%token PLUS MINUS
%token MULT DIV
%token NUM NL
%token MOD
%token POW
%%

S : Ls
  ;

Ls : Ls Line
   | Line
   ;

Line : E NL { printf("%d\n", $1); }
     ;

E : E PLUS T { $$ = $1 + $3; }
  | E MINUS T { $$ = $1 - $3; }
  | T { $$ = $1; }
  ;

T : T MULT P { $$ = $1 * $3; }
  | T DIV P { $$ = $1 / $3; }
  | T MOD P { $$ = $1 % $3; }
  | P { $$ = $1; }
  ;

P : P POW F { int i; int pow=1;for(i=0;i<$3;i++) pow*=$1; $$ = pow;}
  | F

F : NUM { $$ = $1; }
  ;

%%

#include "lex.yy.c"

main(){
  yyparse();
}
