%{
	/**
	  The cmm compiler
	  2004.08.18
	  2005.06.13
	  Hisashi Nakai, University of Tsukuba
	 **/

#include <stdio.h>
#include <stdlib.h>

#include "env.h"
#include "code.h"

	FILE *ofile;

	int level = 0; 
	int offset = 0; 

	typedef struct Codeval {
		cptr* code;
		int   val;
		char* name;
	} codeval;

#define YYSTYPE codeval
	%}

	%token VAR
	%token MAIN
	%token ID
	%token LPAR RPAR
	%token COMMA
	%token LBRA RBRA
	%token WRITE
	%token WRITELN
	%token SEMI
	%token PLUS MINUS
	%token MULT DIV MOD
	%token POW
	%token PLPL MIMI
	%token LABEL GOTO
	%token NUMBER
	%token IF THEN ELSE ENDIF
	%token WHILE DO FOR
	%token ENDFOR
	%token READ
	%token COLEQ
	%token GE GT LE LT NE EQ
	%token RETURN
	%%

	program : fdecls main {
		cptr *tmp;
		int label0;

		label0 = makelabel();

		tmp = makecode(O_JMP, 0, label0);
		tmp = mergecode(tmp, $1.code);
		tmp = mergecode(tmp, makecode(O_LAB, 0, label0));
		tmp = mergecode(tmp, makecode(O_INT, 0, $2.val + SYSTEM_AREA));
		tmp = mergecode(tmp, $2.code);
		tmp = mergecode(tmp, makecode(O_OPR, 0, 0));

		printcode(ofile, tmp);
	}
;

main	: MAIN body {
			  $$.code = $2.code;
			  $$.val = $2.val;
		  }
;

fdecls	: fdecls fdecl {
			  $$.code = mergecode($1.code, $2.code);
		  }
| /* epsilon */ {
	$$.code = NULL;
}
;

fdecl	: fhead body
{
	cptr *tmp, *tmp2;

	tmp = makecode(O_LAB, 0, $1.val);
	tmp2 = makecode(O_INT, 0, $2.val + SYSTEM_AREA);
	$$.code = mergecode(mergecode(tmp, tmp2), $2.code);
	delete_block();
}
;

fhead	: fid LPAR params RPAR
{
	int   label;
	int   i;
	list *tmp;

	label = makelabel();

	make_params($3.val+1, label);

	$$.val = label;
}
;

fid	: ID
{
	if (search_all($1.name) == NULL){
		addlist($1.name, FUNC, 0, level, 0);
	}
	else {
		sem_error1("fid");
	}
	addlist("block", BLOCK, 0, 0, 0);
}
;

params	: params COMMA ID
{
	if (search_block($3.name) == NULL){
		addlist($3.name, VARIABLE, 0, level, 0);
	}
	else {
		sem_error1("params");
	}

	$$.code = NULL;
	$$.val = $1.val + 1;
}
| ID
{
	if (search_block($1.name) == NULL){
		addlist($1.name, VARIABLE, 0, level, 0);
	}
	else {
		sem_error1("params2");
	}

	$$.code = NULL;
	$$.val = 1;
}
| /* epsilon */
{
	$$.val = 0;
	$$.code = NULL;
}
;

body	: LBRA vdaction stmts RBRA
{
	$$.code = $3.code;
	$$.val = $2.val + $3.val;
	offset = offset - $2.val;
}
;

vdaction: vardecls
{
	int i;

	vd_backpatch($1.val, offset);

	$$.val = $1.val;
	offset = offset + $1.val;
}
;

vardecls: vardecls vardecl
{
	$$.val = $1.val + $2.val;
	$$.code = NULL;
}
| /* epsilon */
{
	$$.val = 0;
}
;

vardecl	: VAR ids SEMI
{
	$$.val = $2.val;
	$$.code = NULL;
}
;

ids	: ids COMMA ID
{
	if (search_block($3.name) == NULL){
		addlist($3.name, VARIABLE, 0, level, 0);
	}
	else {
		sem_error1("var");
	}

	$$.code = NULL;
	$$.val = $1.val + 1;
}
| ID
{
	if (search_block($1.name) == NULL){
		addlist($1.name, VARIABLE, 0, level, 0);
	}
	else {
		sem_error1("var");
	}

	$$.code = NULL;
	$$.val = 1;
}
;

stmts	: stmts st
{
	$$.code = mergecode($1.code, $2.code);
	if ($1.val < $2.val){
		$$.val = $2.val;
	}
	else {
		$$.val = $1.val;
	}
}
| st
{
	$$.code = $1.code;
	$$.val = $1.val;
}
;

st	: WRITE E SEMI
{
	$$.code = mergecode($2.code, makecode(O_CSP, 0, 1));
	$$.val = 0;
}
| WRITELN SEMI
{
	$$.code = makecode(O_CSP, 0, 2);
	$$.val = 0;
}
| READ ID SEMI
{
	cptr *tmp;
	list *tmp2;

	tmp2 = search_all($2.name);

	if (tmp2 == NULL){
		sem_error2("read");
	}

	if (tmp2->kind != VARIABLE){
		sem_error2("as function");
	}

	$$.code = mergecode(makecode(O_CSP, 0, 0),
			makecode(O_STO, level - tmp2->l, tmp2->a));
	$$.val = 0;
}
| ID COLEQ E SEMI
{
	list *tmp;

	tmp = search_all($1.name);

	if (tmp == NULL){
		sem_error2("assignment");
	}

	if (tmp->kind != VARIABLE){
		sem_error2("assignment2");
	}

	$$.code = mergecode($3.code,
			makecode(O_STO, level - tmp->l, tmp->a));
	$$.val = 0;
}
| ifstmt 
| whilestmt
| forstmt
| pre_inc SEMI
| pre_de SEMI
| post_inc SEMI
| post_de SEMI
| { addlist("block", BLOCK, 0, 0, 0); }

body
{
	$$.code = $2.code;
	$$.val = $2.val;
	delete_block();
}  
| RETURN E SEMI
{
	list* tmp2;

	tmp2 = searchf(level);

	$$.code = mergecode($2.code, makecode(O_RET, 0, tmp2->params));
	$$.val = 0;
}
;

ifstmt	: IF cond THEN st ENDIF SEMI
{
	cptr *tmp;
	int label0, label1;

	label0 = makelabel();

	tmp = mergecode($2.code, makecode(O_JPC, 0, label0));
	tmp = mergecode(tmp, $4.code);

	$$.code = mergecode(tmp, makecode(O_LAB, 0, label0));
	$$.val = 0;
}
| IF cond THEN st ELSE st ENDIF SEMI
{
	cptr *tmp;
	int label0, label1;

	label0 = makelabel();
	label1 = makelabel();

	tmp = mergecode($2.code, makecode(O_JPC, 0, label0));
	tmp = mergecode(tmp, $4.code);
	tmp = mergecode(tmp, makecode(O_JMP, 0, label1));
	tmp = mergecode(tmp, makecode(O_LAB, 0, label0));
	tmp = mergecode(tmp, $6.code);

	$$.code = mergecode(tmp, makecode(O_LAB, 0, label1));
	$$.val = 0;
}
;

whilestmt	: WHILE cond DO st
{
	int label0, label1;
	cptr *tmp;

	label0 = makelabel();
	label1 = makelabel();

	tmp = makecode(O_LAB, 0, label0);
	tmp = mergecode(tmp, $2.code);
	tmp = mergecode(tmp, makecode(O_JPC, 0, label1));
	tmp = mergecode(tmp, $4.code);
	tmp = mergecode(tmp, makecode(O_JMP, 0, label0));
	tmp = mergecode(tmp, makecode(O_LAB, 0, label1));

	$$.code = tmp; 

	$$.val = 0;
}
;
/*********************追加コンテンツ***********************/
/*
struct pnt{
	int num;
	char* name;
};
/* ラベル管理 */
/*
struct pnt label[255]; 
int label_num = 0;
int NIL = -1;
int search_label(char* name){
	for(int i=0;i<label_num;i++){
		if(!strcmp(labels[i].name,label)) return labels[i].num;
	}
	return NIL;
}
*/
/*
go2 : LABEL ID SEMI stmts GOTO ID SEMI
{
	int num = search_label($2.code);

}
;
*/
/* whileと同じように書くだけ 真ん中のstを条件文と置く*/
forstmt : FOR st cond SEMI st DO stmts ENDFOR
{
	int for0,for1;
	for0 = makelabel();for1 = makelabel();
	cptr *tmp;
	/* init をinitしつつ、ラベル設置 */
	tmp = mergecode($2.code,makecode(O_LAB, 0, for0));
	/* falseでroopしゅうりょう　*/
	tmp = mergecode(mergecode(tmp,$3.code),makecode(O_JPC,0,for1));
	/* 満を持して中身計算  */
	tmp = mergecode(tmp,$7.code);
	/* forをひとつ進める */
	tmp = mergecode(tmp,$5.code);
	/* ループ処理 */
	tmp = mergecode(tmp,makecode(O_JMP,0,for0));
	tmp = mergecode(tmp,makecode(O_LAB,0,for1));
	$$.code = tmp;
	$$.val = 0;

}
;
pow : F POW NUMBER
{
	int right = yylval.val;  
	cptr* sum = makecode(O_LIT,0,1);
	for(int i=0;i<right;i++){
		sum = mergecode(mergecode(sum,copy_cptr($1.code)),makecode(O_OPR,0,4));
	}
	$$.code = sum;

}
/* インクリメント、デクリメント 前と後ろの処理タイミングに注意 */
/* 式の中に組み込むことはできるが、単体で使うことはできない */ 
/* forと同等の高さとEの下層に詰むことで解決 */
pre_inc : PLPL ID
{ 
	/*なぜかうまくいかない*/ /* 全体でlevelを管理してた */
	/* iは+して,その行での評価はiのまま*/
	/* NUMBERを直接よみこむ*/
	list *tmpl = search_all($2.name);
	if(tmpl == NULL) sem_error2("pre_inc");
	cptr *tmp;
	tmp = mergecode(makecode(O_LOD,level - tmpl->l,tmpl->a),makecode(O_LIT,0,1));
	tmp = mergecode(tmp,makecode(O_OPR,0,2));
	tmp = mergecode(tmp,makecode(O_STO,level-tmpl->l,tmpl->a));
	tmp = mergecode(tmp,makecode(O_LOD,level-tmpl->l,tmpl->a));
	$$.code = tmp;
}
;
pre_de : MIMI ID
{ 
	list *tmpl = search_all($2.name);
	if(tmpl == NULL) sem_error2("pre_de");
	cptr *tmp;
	cptr *out;
	tmp = mergecode(makecode(O_LOD,level - tmpl->l,tmpl->a),makecode(O_LIT,0,1));
	tmp = mergecode(tmp,makecode(O_OPR,0,3));
	tmp = mergecode(tmp,makecode(O_STO,level-tmpl->l,tmpl->a));
	tmp = mergecode(tmp,makecode(O_LOD,level-tmpl->l,tmpl->a));
	$$.code = tmp;
}
;
post_de : ID MIMI
{ 
	/* 実際の変数の場所の数値はかえておいて、出力するのは普通の値*/
	list *tmpl = search_all($1.name);
	if(tmpl == NULL) sem_error2("pre_de");
	cptr *tmp;
	cptr *out;
	tmp = mergecode(makecode(O_LOD,level - tmpl->l,tmpl->a),makecode(O_LIT,0,1));
	tmp = mergecode(tmp,makecode(O_OPR,0,3));
	tmp = mergecode(tmp,makecode(O_STO,level-tmpl->l,tmpl->a));
	tmp = mergecode(tmp,makecode(O_LOD,level-tmpl->l,tmpl->a));
	out = mergecode(mergecode(tmp,makecode(O_LIT,0,1))
					,makecode(O_OPR,0,2));
	$$.code = out;
}
;
post_inc : ID PLPL
{ 
	/* 実際の変数の場所の数値はかえておいて、出力するのは普通の値*/
	list *tmpl = search_all($1.name);
	if(tmpl == NULL) sem_error2("pre_de");
	cptr *tmp;
	cptr *out;
	tmp = mergecode(makecode(O_LOD,level - tmpl->l,tmpl->a),makecode(O_LIT,0,1));
	tmp = mergecode(tmp,makecode(O_OPR,0,2));
	tmp = mergecode(tmp,makecode(O_STO,level-tmpl->l,tmpl->a));
	tmp = mergecode(tmp,makecode(O_LOD,level-tmpl->l,tmpl->a));
	out = mergecode(mergecode(tmp,makecode(O_LIT,0,1))
					,makecode(O_OPR,0,3));
	$$.code = out;
}
;


/***********************************************************/
cond	: E GT E
{
	$$.code = mergecode(mergecode($1.code, $3.code),
			makecode(O_OPR, 0, 12));
}
| E GE E
{
	$$.code = mergecode(mergecode($1.code, $3.code),
			makecode(O_OPR, 0, 11));
}
| E LT E
{
	$$.code = mergecode(mergecode($1.code, $3.code),
			makecode(O_OPR, 0, 10));
}
| E LE E
{
	$$.code = mergecode(mergecode($1.code, $3.code),
			makecode(O_OPR, 0, 13));
}
| E NE E
{
	$$.code = mergecode(mergecode($1.code, $3.code),
			makecode(O_OPR, 0, 9));
}
| E EQ E
{
	$$.code = mergecode(mergecode($1.code, $3.code),
			makecode(O_OPR, 0, 8));
}
;
E   : E PLUS  T
{
	$$.code = mergecode(mergecode($1.code, $3.code),
			makecode(O_OPR, 0, 2));
}
| E MINUS T
{
	$$.code = mergecode(mergecode($1.code, $3.code),
			makecode(O_OPR, 0, 3));
}
| T
{
	$$.code = $1.code;
}
;




T	: T MULT F
{
	$$.code = mergecode(mergecode($1.code, $3.code),
			makecode(O_OPR, 0, 4));
}

| T MOD  F
{
	cptr *tmp,*tmp1,*tmp2,*tmp3,*tmp4;
	/* したいこと: mod = a - b * (a / b) であまりが出る */
	/* mergecodeすると$1.code,$3.codeが消えるからできない */
	/* copy_cptr作成で解決 */
	tmp1 = copy_cptr($1.code); tmp2 = copy_cptr($3.code);
	tmp3 = copy_cptr($1.code); tmp4 = copy_cptr($3.code);
	tmp = mergecode(mergecode(tmp1,tmp2),makecode(O_OPR,0,5));
	/* b*tmp */
	tmp = mergecode(mergecode(tmp4,tmp),makecode(O_OPR,0,4));
	/* a-tmp */
	tmp = mergecode(mergecode(tmp3,tmp),makecode(O_OPR,0,3));
	$$.code = tmp;
}

| T DIV  F
{
	$$.code = mergecode(mergecode($1.code, $3.code),
			makecode(O_OPR, 0, 5));
}
/* add code */

| F
{
	$$.code = $1.code;
}
;

F : pow
| G
{
	$$.code = $1.code;
}
;
G   : pre_inc
| pre_de
| post_de
| post_inc
| H
{
	$$.code = $1.code;
}

H	: ID 
{
	cptr *tmpc;
	list* tmpl;

	tmpl = search_all($1.name);
	if (tmpl == NULL){
		sem_error2("id");
	}

	if (tmpl->kind == VARIABLE){
		$$.code = makecode(O_LOD, level - tmpl->l, tmpl->a);
	}
	else {
		sem_error2("id as variable");
	}
}
| ID LPAR fparams RPAR
{
	list* tmpl;

	tmpl = search_all($1.name);
	if (tmpl == NULL){
		sem_error2("id as function");
	}

	if (tmpl->kind != FUNC){
		sem_error2("id as function2");
	}

	if (tmpl->params != $3.val){
		sem_error3(tmpl->name, tmpl->params, $3.val);
	}

	$$.code = mergecode($3.code,
			makecode(O_CAL,
				level - tmpl->l,
				tmpl->a));
}
| NUMBER
{
	$$.code = makecode(O_LIT, 0, yylval.val);
}
| LPAR E RPAR
{
	$$.code = $2.code;
}
;

fparams : /* epsilon */
{
	$$.val = 0;
	$$.code = NULL;
}
| ac_params
{
	$$.val = $1.val;
	$$.code = $1.code;
}
;

ac_params : ac_params COMMA fparam
{
	$$.val = $1.val + 1;
	$$.code = mergecode($1.code, $3.code);
}
| fparam
{
	$$.val = 1;
	$$.code = $1.code;
}
;

fparam	: E
{
	$$.code = $1.code;
}
;
%%

#include "lex.yy.c"

int main(){
	ofile = fopen("code.output", "w");

	if (ofile == NULL){
		perror("ofile");
		exit(EXIT_FAILURE);
	}

	initialize();
	yyparse();

	if (fclose(ofile) != 0){
		perror("ofile");
		exit(EXIT_FAILURE);
	}
}
