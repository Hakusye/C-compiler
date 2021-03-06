/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VAR = 258,
     LAB = 259,
     MAIN = 260,
     ID = 261,
     LPAR = 262,
     RPAR = 263,
     COMMA = 264,
     LBRA = 265,
     RBRA = 266,
     WRITE = 267,
     WRITELN = 268,
     SEMI = 269,
     CRN = 270,
     PLUS = 271,
     MINUS = 272,
     MULT = 273,
     DIV = 274,
     NUMBER = 275,
     IF = 276,
     THEN = 277,
     ELSE = 278,
     ENDIF = 279,
     WHILE = 280,
     DO = 281,
     READ = 282,
     COLEQ = 283,
     GE = 284,
     GT = 285,
     LE = 286,
     LT = 287,
     NE = 288,
     EQ = 289,
     RETURN = 290,
     AND = 291,
     OR = 292,
     NOT = 293,
     FOR = 294,
     GOTO = 295
   };
#endif
/* Tokens.  */
#define VAR 258
#define LAB 259
#define MAIN 260
#define ID 261
#define LPAR 262
#define RPAR 263
#define COMMA 264
#define LBRA 265
#define RBRA 266
#define WRITE 267
#define WRITELN 268
#define SEMI 269
#define CRN 270
#define PLUS 271
#define MINUS 272
#define MULT 273
#define DIV 274
#define NUMBER 275
#define IF 276
#define THEN 277
#define ELSE 278
#define ENDIF 279
#define WHILE 280
#define DO 281
#define READ 282
#define COLEQ 283
#define GE 284
#define GT 285
#define LE 286
#define LT 287
#define NE 288
#define EQ 289
#define RETURN 290
#define AND 291
#define OR 292
#define NOT 293
#define FOR 294
#define GOTO 295




/* Copy the first part of user declarations.  */
#line 1 "cmm.y"

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 214 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   148

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  138

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    13,    16,    21,    23,
      27,    29,    30,    35,    37,    40,    41,    45,    49,    53,
      55,    58,    60,    64,    67,    71,    76,    78,    80,    82,
      84,    86,    87,    90,    94,   101,   110,   115,   122,   126,
     129,   133,   135,   139,   143,   146,   150,   154,   158,   162,
     166,   170,   174,   178,   181,   185,   189,   191,   195,   199,
     201,   203,   208,   210,   214,   215,   217,   221,   223
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    44,    43,    -1,     5,    49,    -1,    44,
      45,    -1,    -1,    46,    49,    -1,    47,     7,    48,     8,
      -1,     6,    -1,    48,     9,     6,    -1,     6,    -1,    -1,
      10,    50,    54,    11,    -1,    51,    -1,    51,    52,    -1,
      -1,     3,    53,    14,    -1,     4,    53,    14,    -1,    53,
       9,     6,    -1,     6,    -1,    54,    55,    -1,    55,    -1,
      12,    65,    14,    -1,    13,    14,    -1,    27,     6,    14,
      -1,     6,    28,    65,    14,    -1,    57,    -1,    58,    -1,
      59,    -1,    61,    -1,    62,    -1,    -1,    56,    49,    -1,
      35,    65,    14,    -1,    21,    63,    22,    55,    24,    14,
      -1,    21,    63,    22,    55,    23,    55,    24,    14,    -1,
      25,    63,    26,    55,    -1,    39,    60,    63,    60,    26,
      55,    -1,     6,    28,    65,    -1,     6,    15,    -1,    40,
       6,    14,    -1,    64,    -1,    63,    37,    64,    -1,     7,
      63,     8,    -1,    38,    63,    -1,    65,    30,    65,    -1,
      65,    29,    65,    -1,    65,    32,    65,    -1,    65,    31,
      65,    -1,    65,    33,    65,    -1,    65,    34,    65,    -1,
      64,    36,    64,    -1,     7,    64,     8,    -1,    38,    64,
      -1,    65,    16,    66,    -1,    65,    17,    66,    -1,    66,
      -1,    66,    18,    67,    -1,    66,    19,    67,    -1,    67,
      -1,     6,    -1,     6,     7,    68,     8,    -1,    20,    -1,
       7,    65,     8,    -1,    -1,    69,    -1,    69,     9,    70,
      -1,    70,    -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    69,    75,    78,    83,    94,   108,   120,
     132,   145,   151,   159,   170,   176,   181,   186,   198,   210,
     224,   234,   241,   246,   251,   270,   288,   289,   290,   291,
     292,   293,   293,   300,   311,   324,   343,   364,   386,   406,
     422,   440,   445,   468,   472,   491,   496,   501,   506,   511,
     516,   521,   539,   543,   563,   568,   573,   579,   584,   589,
     594,   611,   633,   637,   644,   648,   655,   660,   667
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "LAB", "MAIN", "ID", "LPAR",
  "RPAR", "COMMA", "LBRA", "RBRA", "WRITE", "WRITELN", "SEMI", "CRN",
  "PLUS", "MINUS", "MULT", "DIV", "NUMBER", "IF", "THEN", "ELSE", "ENDIF",
  "WHILE", "DO", "READ", "COLEQ", "GE", "GT", "LE", "LT", "NE", "EQ",
  "RETURN", "AND", "OR", "NOT", "FOR", "GOTO", "$accept", "program",
  "main", "fdecls", "fdecl", "fhead", "fid", "params", "body", "vdaction",
  "vardecls", "vardecl", "ids", "stmts", "st", "@1", "ifstmt", "whilestmt",
  "forstmt", "forst", "label", "gotof", "cond", "cond1", "E", "T", "F",
  "fparams", "ac_params", "fparam", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    44,    44,    45,    46,    47,    48,
      48,    48,    49,    50,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    56,    55,    55,    57,    57,    58,    59,    60,    61,
      62,    63,    63,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    66,    66,    66,
      67,    67,    67,    67,    68,    68,    69,    69,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     2,     4,     1,     3,
       1,     0,     4,     1,     2,     0,     3,     3,     3,     1,
       2,     1,     3,     2,     3,     4,     1,     1,     1,     1,
       1,     0,     2,     3,     6,     8,     4,     6,     3,     2,
       3,     1,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     1,     3,     3,     1,
       1,     4,     1,     3,     0,     1,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,     0,     8,     2,     4,     0,     0,
      15,     3,     6,    11,    31,    13,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    21,     0,
      26,    27,    28,    29,    30,     0,     0,    14,     7,     0,
      39,     0,    60,     0,    62,     0,    56,    59,    23,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     0,
      12,    20,    32,    19,     0,     0,     9,     0,    64,     0,
      22,     0,     0,     0,     0,     0,    41,     0,    44,    41,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      24,    33,     0,     0,    40,     0,    16,    17,    25,    68,
       0,    65,    67,    63,    54,    55,    57,    58,    43,    52,
       0,     0,     0,    42,    51,    46,    45,    48,    47,    49,
      50,    36,    38,     0,    18,    61,     0,    31,     0,     0,
      53,    31,    66,     0,    34,    37,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     6,     2,     7,     8,     9,    17,    11,    14,
      15,    37,    64,    27,    28,    29,    30,    31,    32,    58,
      33,    34,    51,    52,    53,    46,    47,   100,   101,   102
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -42
static const yytype_int16 yypact[] =
{
     -42,     2,    71,   -42,    27,   -42,   -42,   -42,    27,    21,
     -42,   -42,   -42,    50,    69,    17,   -42,   114,    33,    52,
      38,     7,     7,    56,    52,    72,    74,     4,   -42,    27,
     -42,   -42,   -42,   -42,   -42,    77,    77,   -42,   -42,    79,
     -42,    52,    84,    52,   -42,    70,   106,   -42,   -42,     7,
       7,    16,    57,   100,    20,    85,    86,    60,     7,    92,
     -42,   -42,   -42,   -42,    46,    65,   -42,   104,    52,    -5,
     -42,    52,    52,    52,    52,    -1,    15,    81,    58,    57,
      69,    12,    12,    52,    52,    52,    52,    52,    52,    69,
     -42,   -42,    52,    -2,   -42,   113,   -42,   -42,   -42,   110,
     120,   130,   -42,   -42,   106,   106,   -42,   -42,   -42,   -42,
     112,    12,    12,    57,    57,   110,   110,   110,   110,   110,
     110,   -42,   110,   116,   -42,   -42,    52,    69,   129,    15,
      57,    69,   -42,   121,   -42,   -42,   132,   -42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,    18,   -42,
     -42,   -42,   108,   -42,   -26,   -42,   -42,   -42,   -42,    54,
     -42,   -42,   -16,   -41,   -19,    66,    67,   -42,   -42,    22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      45,    61,     3,   103,    57,    56,    54,   108,    76,    79,
      18,    71,    72,    42,    49,    60,    19,    20,    42,   111,
      35,    36,    67,   109,    69,    21,    12,    44,    13,    22,
      77,    23,    44,    75,    78,    81,    81,    10,    80,    24,
     113,   114,    93,    25,    26,    50,    89,    62,    40,    99,
     112,    82,    48,    81,   110,    95,    16,    81,    42,    43,
      96,    41,    55,   121,   115,   116,   117,   118,   119,   120,
     129,   130,    44,   122,    95,    18,     4,     5,    57,    97,
      59,    19,    20,    63,    70,    66,    71,    72,    92,   103,
      21,    68,    77,    82,    22,    81,    23,    71,    72,    90,
      91,   133,    71,    72,    24,   135,    94,    99,    25,    26,
      83,    84,    85,    86,    87,    88,    71,    72,    98,   124,
      71,    72,    38,    39,    73,    74,    71,    72,   125,    83,
      84,    85,    86,    87,    88,   127,   128,   104,   105,   126,
     106,   107,   131,   134,    65,   136,   137,   123,   132
};

static const yytype_uint8 yycheck[] =
{
      19,    27,     0,     8,     6,    24,    22,     8,    49,    50,
       6,    16,    17,     6,     7,    11,    12,    13,     6,     7,
       3,     4,    41,     8,    43,    21,     8,    20,     7,    25,
      49,    27,    20,    49,    50,    37,    37,    10,    22,    35,
      81,    82,    58,    39,    40,    38,    26,    29,    15,    68,
      38,    36,    14,    37,    80,     9,     6,    37,     6,     7,
      14,    28,     6,    89,    83,    84,    85,    86,    87,    88,
     111,   112,    20,    92,     9,     6,     5,     6,     6,    14,
       6,    12,    13,     6,    14,     6,    16,    17,    28,     8,
      21,     7,   111,    36,    25,    37,    27,    16,    17,    14,
      14,   127,    16,    17,    35,   131,    14,   126,    39,    40,
      29,    30,    31,    32,    33,    34,    16,    17,    14,     6,
      16,    17,     8,     9,    18,    19,    16,    17,     8,    29,
      30,    31,    32,    33,    34,    23,    24,    71,    72,     9,
      73,    74,    26,    14,    36,    24,    14,    93,   126
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    44,     0,     5,     6,    43,    45,    46,    47,
      10,    49,    49,     7,    50,    51,     6,    48,     6,    12,
      13,    21,    25,    27,    35,    39,    40,    54,    55,    56,
      57,    58,    59,    61,    62,     3,     4,    52,     8,     9,
      15,    28,     6,     7,    20,    65,    66,    67,    14,     7,
      38,    63,    64,    65,    63,     6,    65,     6,    60,     6,
      11,    55,    49,     6,    53,    53,     6,    65,     7,    65,
      14,    16,    17,    18,    19,    63,    64,    65,    63,    64,
      22,    37,    36,    29,    30,    31,    32,    33,    34,    26,
      14,    14,    28,    63,    14,     9,    14,    14,    14,    65,
      68,    69,    70,     8,    66,    66,    67,    67,     8,     8,
      55,     7,    38,    64,    64,    65,    65,    65,    65,    65,
      65,    55,    65,    60,     6,     8,     9,    23,    24,    64,
      64,    26,    70,    55,    14,    55,    24,    14
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 52 "cmm.y"
    {
            cptr *tmp;
	    int label0;

	    label0 = makelabel();

            tmp = makecode(O_JMP, 0, label0);
	    tmp = mergecode(tmp, (yyvsp[(1) - (2)]).code);
	    tmp = mergecode(tmp, makecode(O_LAB, 0, label0));
	    tmp = mergecode(tmp, makecode(O_INT, 0, (yyvsp[(2) - (2)]).val + SYSTEM_AREA));
	    tmp = mergecode(tmp, (yyvsp[(2) - (2)]).code);
            tmp = mergecode(tmp, makecode(O_OPR, 0, 0));

            printcode(ofile, tmp);
	  }
    break;

  case 3:
#line 69 "cmm.y"
    {
	    (yyval).code = (yyvsp[(2) - (2)]).code;
	    (yyval).val = (yyvsp[(2) - (2)]).val;
	  }
    break;

  case 4:
#line 75 "cmm.y"
    {
	    (yyval).code = mergecode((yyvsp[(1) - (2)]).code, (yyvsp[(2) - (2)]).code);
	  }
    break;

  case 5:
#line 78 "cmm.y"
    {
	    (yyval).code = NULL;
	  }
    break;

  case 6:
#line 84 "cmm.y"
    {
            cptr *tmp, *tmp2;

            tmp = makecode(O_LAB, 0, (yyvsp[(1) - (2)]).val);
            tmp2 = makecode(O_INT, 0, (yyvsp[(2) - (2)]).val + SYSTEM_AREA);
	    (yyval).code = mergecode(mergecode(tmp, tmp2), (yyvsp[(2) - (2)]).code);
	    delete_block();
	  }
    break;

  case 7:
#line 95 "cmm.y"
    {
	    int   label;
	    int   i;
	    list *tmp;

	    label = makelabel();

	    make_params((yyvsp[(3) - (4)]).val+1, label);

	    (yyval).val = label;
	  }
    break;

  case 8:
#line 109 "cmm.y"
    {
	    if (search_all((yyvsp[(1) - (1)]).name) == NULL){
	      addlist((yyvsp[(1) - (1)]).name, FUNC, 0, level, 0);
	    }
	    else {
	      sem_error1("fid");
	    }
	    addlist("block", BLOCK, 0, 0, 0);
	  }
    break;

  case 9:
#line 121 "cmm.y"
    {
	    if (search_block((yyvsp[(3) - (3)]).name) == NULL){
	      addlist((yyvsp[(3) - (3)]).name, VARIABLE, 0, level, 0);
	    }
	    else {
	      sem_error1("params");
	    }

	    (yyval).code = NULL;
	    (yyval).val = (yyvsp[(1) - (3)]).val + 1;
	  }
    break;

  case 10:
#line 133 "cmm.y"
    {
	    if (search_block((yyvsp[(1) - (1)]).name) == NULL){
	      addlist((yyvsp[(1) - (1)]).name, VARIABLE, 0, level, 0);
	    }
	    else {
	      sem_error1("params2");
	    }

	    (yyval).code = NULL;
	    (yyval).val = 1;
	  }
    break;

  case 11:
#line 145 "cmm.y"
    {
	    (yyval).val = 0;
	    (yyval).code = NULL;
	  }
    break;

  case 12:
#line 152 "cmm.y"
    {
	    (yyval).code = (yyvsp[(3) - (4)]).code;
	    (yyval).val = (yyvsp[(2) - (4)]).val + (yyvsp[(3) - (4)]).val;
	    offset = offset - (yyvsp[(2) - (4)]).val;
	  }
    break;

  case 13:
#line 160 "cmm.y"
    {
	    int i;

	    vd_backpatch((yyvsp[(1) - (1)]).val, offset);

	    (yyval).val = (yyvsp[(1) - (1)]).val;
	    offset = offset + (yyvsp[(1) - (1)]).val;
	  }
    break;

  case 14:
#line 171 "cmm.y"
    {
	    (yyval).val = (yyvsp[(1) - (2)]).val + (yyvsp[(2) - (2)]).val;
	    (yyval).code = NULL;
	  }
    break;

  case 15:
#line 176 "cmm.y"
    {
	    (yyval).val = 0;
	  }
    break;

  case 16:
#line 182 "cmm.y"
    {
	    (yyval).val = (yyvsp[(2) - (3)]).val;
	    (yyval).code = NULL;
	  }
    break;

  case 17:
#line 187 "cmm.y"
    {
	    int label;
	    list *tmp;

	    label = makelabel();
	    tmp->a = label;
	    (yyval).val = (yyvsp[(2) - (3)]).val;

	  }
    break;

  case 18:
#line 199 "cmm.y"
    {
	    if (search_block((yyvsp[(3) - (3)]).name) == NULL){
	      addlist((yyvsp[(3) - (3)]).name, VARIABLE, 0, level, 0);
	    }
	    else {
	      sem_error1("var");
	    }

	    (yyval).code = NULL;
	    (yyval).val = (yyvsp[(1) - (3)]).val + 1;
	  }
    break;

  case 19:
#line 211 "cmm.y"
    {
	    if (search_block((yyvsp[(1) - (1)]).name) == NULL){
	      addlist((yyvsp[(1) - (1)]).name, VARIABLE, 0, level, 0);
	    }
	    else {
	      sem_error1("var");
	    }

	    (yyval).code = NULL;
	    (yyval).val = 1;
	  }
    break;

  case 20:
#line 225 "cmm.y"
    {
	    (yyval).code = mergecode((yyvsp[(1) - (2)]).code, (yyvsp[(2) - (2)]).code);
	    if ((yyvsp[(1) - (2)]).val < (yyvsp[(2) - (2)]).val){
	      (yyval).val = (yyvsp[(2) - (2)]).val;
	    }
	    else {
	      (yyval).val = (yyvsp[(1) - (2)]).val;
	    }
	  }
    break;

  case 21:
#line 235 "cmm.y"
    {
	    (yyval).code = (yyvsp[(1) - (1)]).code;
	    (yyval).val = (yyvsp[(1) - (1)]).val;
	  }
    break;

  case 22:
#line 242 "cmm.y"
    {
	    (yyval).code = mergecode((yyvsp[(2) - (3)]).code, makecode(O_CSP, 0, 1));
	    (yyval).val = 0;
	  }
    break;

  case 23:
#line 247 "cmm.y"
    {
	    (yyval).code = makecode(O_CSP, 0, 2);
	    (yyval).val = 0;
	  }
    break;

  case 24:
#line 252 "cmm.y"
    {
            cptr *tmp;
	    list *tmp2;

	    tmp2 = search_all((yyvsp[(2) - (3)]).name);

	    if (tmp2 == NULL){
	      sem_error2("read");
	    }

	    if (tmp2->kind != VARIABLE){
	      sem_error2("as function");
	    }

	    (yyval).code = mergecode(makecode(O_CSP, 0, 0),
				makecode(O_STO, level - tmp2->l, tmp2->a));
	    (yyval).val = 0;
	  }
    break;

  case 25:
#line 271 "cmm.y"
    {
	    list *tmp;

	    tmp = search_all((yyvsp[(1) - (4)]).name);

	    if (tmp == NULL){
	      sem_error2("assignment");
	    }

	    if (tmp->kind != VARIABLE){
	      sem_error2("assignment2");
	    }

	    (yyval).code = mergecode((yyvsp[(3) - (4)]).code,
				makecode(O_STO, level - tmp->l, tmp->a));
	    (yyval).val = 0;
	  }
    break;

  case 31:
#line 293 "cmm.y"
    { addlist("block", BLOCK, 0, 0, 0); }
    break;

  case 32:
#line 295 "cmm.y"
    {
	    (yyval).code = (yyvsp[(2) - (2)]).code;
	    (yyval).val = (yyvsp[(2) - (2)]).val;
	    delete_block();
	  }
    break;

  case 33:
#line 301 "cmm.y"
    {
	    list* tmp2;

	    tmp2 = searchf(level);

	    (yyval).code = mergecode((yyvsp[(2) - (3)]).code, makecode(O_RET, 0, tmp2->params));
	    (yyval).val = 0;
	  }
    break;

  case 34:
#line 312 "cmm.y"
    {
	    cptr *tmp;
	    int label0, label1;

	    label0 = makelabel();

	    tmp = mergecode((yyvsp[(2) - (6)]).code, makecode(O_JPC, 0, label0));
	    tmp = mergecode(tmp, (yyvsp[(4) - (6)]).code);

	    (yyval).code = mergecode(tmp, makecode(O_LAB, 0, label0));
	    (yyval).val = 0;
	  }
    break;

  case 35:
#line 325 "cmm.y"
    {
	    cptr *tmp;
	    int label0, label1;

	    label0 = makelabel();
	    label1 = makelabel();

	    tmp = mergecode((yyvsp[(2) - (8)]).code, makecode(O_JPC, 0, label0));
	    tmp = mergecode(tmp, (yyvsp[(4) - (8)]).code);
	    tmp = mergecode(tmp, makecode(O_JMP, 0, label1));
	    tmp = mergecode(tmp, makecode(O_LAB, 0, label0));
	    tmp = mergecode(tmp, (yyvsp[(6) - (8)]).code);

	    (yyval).code = mergecode(tmp, makecode(O_LAB, 0, label1));
	    (yyval).val = 0;
	  }
    break;

  case 36:
#line 344 "cmm.y"
    {
	    int label0, label1;
	    cptr *tmp;

	    label0 = makelabel();
	    label1 = makelabel();

	    tmp = makecode(O_LAB, 0, label0);
	    tmp = mergecode(tmp, (yyvsp[(2) - (4)]).code);
	    tmp = mergecode(tmp, makecode(O_JPC, 0, label1));
	    tmp = mergecode(tmp, (yyvsp[(4) - (4)]).code);
	    tmp = mergecode(tmp, makecode(O_JMP, 0, label0));
	    tmp = mergecode(tmp, makecode(O_LAB, 0, label1));

	    (yyval).code = tmp; 
			
	    (yyval).val = 0;
	  }
    break;

  case 37:
#line 365 "cmm.y"
    {
	    int label0, label1;
	    cptr *tmp;

	    label0 = makelabel();
	    label1 = makelabel();

	    tmp = mergecode((yyvsp[(2) - (6)]).code, makecode(O_LAB, 0, label0));
	    tmp = mergecode(tmp, (yyvsp[(3) - (6)]).code);
	    tmp = mergecode(tmp, makecode(O_JPC, 0, label1));
	    tmp = mergecode(tmp, (yyvsp[(6) - (6)]).code);
	    tmp = mergecode(tmp, (yyvsp[(4) - (6)]).code);
	    tmp = mergecode(tmp, makecode(O_JMP, 0, label0));
	    tmp = mergecode(tmp, makecode(O_LAB, 0, label1));

	    (yyval).code = tmp;
			
	    (yyval).val = 0;
	  }
    break;

  case 38:
#line 387 "cmm.y"
    {
	    list *tmp;

	    tmp = search_all((yyvsp[(1) - (3)]).name);

	    if (tmp == NULL){
	      sem_error2("assignment");
	    }

	    if (tmp->kind != VARIABLE){
	      sem_error2("assignment2");
	    }

	    (yyval).code = mergecode((yyvsp[(3) - (3)]).code,
				makecode(O_STO, level - tmp->l, tmp->a));
	    (yyval).val = 0;
	  }
    break;

  case 39:
#line 407 "cmm.y"
    {
	    list *tmpl;
	    tmpl = search_all((yyvsp[(1) - (2)]).name);

	    if (tmpl == NULL){
	      sem_error2("assignment");
	    }

	    if (tmpl->kind != VARIABLE){
	      sem_error2("assignment2");
	    }
	    (yyval).code = makecode(O_LAB, level - tmpl->l, tmpl->a);
	    (yyval).val = 0;
	  }
    break;

  case 40:
#line 423 "cmm.y"
    {
	    list *tmpl;

	    tmpl = search_all((yyvsp[(1) - (3)]).name);

	    if (tmpl == NULL){
	      sem_error2("assignment");
	    }

	    if (tmpl->kind != VARIABLE){
	      sem_error2("assignment2");
	    }

	    (yyval).code = makecode(O_JMP, level - tmpl->l, tmpl->a);
	    (yyval).val = 0;
	  }
    break;

  case 41:
#line 441 "cmm.y"
    {
	    (yyval).code = (yyvsp[(1) - (1)]).code;
	  }
    break;

  case 42:
#line 446 "cmm.y"
    {
	    cptr *tmp;
	    int label0, label1, label2, label3;
	    label0 = makelabel();
	    label1 = makelabel();
	    label2 = makelabel();
	    label3 = makelabel();

	    tmp = mergecode((yyvsp[(1) - (3)]).code, makecode(O_JPC, 0, label0));
	    tmp = mergecode(tmp, makecode(O_JMP, 0, label2));
	    tmp = mergecode(tmp, makecode(O_LAB, 0, label0));
	    tmp = mergecode(tmp, (yyvsp[(3) - (3)]).code);
	    tmp = mergecode(tmp, makecode(O_JPC, 0, label1));
	    tmp = mergecode(tmp, makecode(O_LAB, 0, label2));
	    tmp = mergecode(tmp, makecode(O_LIT, 0, 1));
	    tmp = mergecode(tmp, makecode(O_JMP, 0, label3));
	    tmp = mergecode(tmp, makecode(O_LAB, 0, label1));
	    tmp = mergecode(tmp, makecode(O_LIT, 0, 0));

	    (yyval).code = mergecode(tmp, makecode(O_LAB, 0, label3));

	  }
    break;

  case 43:
#line 469 "cmm.y"
    {
	    (yyval).code = (yyvsp[(2) - (3)]).code;
	  }
    break;

  case 44:
#line 473 "cmm.y"
    {
	    cptr *tmp;
	    int label0, label1, label2, label3;
	    label0 = makelabel();
	    label1 = makelabel();
	    label2 = makelabel();
	    label3 = makelabel();

	    tmp = mergecode((yyvsp[(2) - (2)]).code, makecode(O_JPC, 0, label0));
	    tmp = mergecode(tmp, makecode(O_LIT, 0, 0));
	    tmp = mergecode(tmp, makecode(O_JMP, 0, label1));
	    tmp = mergecode(tmp, makecode(O_LAB, 0, label0));
	    tmp = mergecode(tmp, makecode(O_LIT, 0, 1));
	    (yyval).code = mergecode(tmp, makecode(O_LAB, 0, label1));
	  }
    break;

  case 45:
#line 492 "cmm.y"
    {
	    (yyval).code = mergecode(mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code),
				makecode(O_OPR, 0, 12));
	  }
    break;

  case 46:
#line 497 "cmm.y"
    {
	    (yyval).code = mergecode(mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code),
				makecode(O_OPR, 0, 11));
	  }
    break;

  case 47:
#line 502 "cmm.y"
    {
	    (yyval).code = mergecode(mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code),
				makecode(O_OPR, 0, 10));
	  }
    break;

  case 48:
#line 507 "cmm.y"
    {
	    (yyval).code = mergecode(mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code),
				makecode(O_OPR, 0, 13));
	  }
    break;

  case 49:
#line 512 "cmm.y"
    {
	    (yyval).code = mergecode(mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code),
				makecode(O_OPR, 0, 9));
	  }
    break;

  case 50:
#line 517 "cmm.y"
    {
	    (yyval).code = mergecode(mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code),
				makecode(O_OPR, 0, 8));
	  }
    break;

  case 51:
#line 522 "cmm.y"
    {
	    cptr *tmp;
	    int label0, label1;
	    label0 = makelabel();
	    label1 = makelabel();

	    tmp = mergecode((yyvsp[(1) - (3)]).code, makecode(O_JPC, 0, label0));
	    tmp = mergecode(tmp, (yyvsp[(3) - (3)]).code);
	    tmp = mergecode(tmp, makecode(O_JPC, 0, label0));
	    tmp = mergecode(tmp, makecode(O_LIT, 0, 1));
	    tmp = mergecode(tmp, makecode(O_JMP, 0, label1));
	    tmp = mergecode(tmp, makecode(O_LAB, 0, label0));
	    tmp = mergecode(tmp, makecode(O_LIT, 0, 0));

	    (yyval).code = mergecode(tmp, makecode(O_LAB, 0, label1));

	  }
    break;

  case 52:
#line 540 "cmm.y"
    {
	    (yyval).code = (yyvsp[(2) - (3)]).code;
	  }
    break;

  case 53:
#line 544 "cmm.y"
    {
	    cptr *tmp;
	    int label0, label1, label2, label3;
	    label0 = makelabel();
	    label1 = makelabel();
	    label2 = makelabel();
	    label3 = makelabel();

	    tmp = mergecode((yyvsp[(2) - (2)]).code, makecode(O_JPC, 0, label0));
	    tmp = mergecode(tmp, makecode(O_LIT, 0, 0));
	    tmp = mergecode(tmp, makecode(O_JMP, 0, label1));
	    tmp = mergecode(tmp, makecode(O_LAB, 0, label0));
	    tmp = mergecode(tmp, makecode(O_LIT, 0, 1));

	    (yyval).code = mergecode(tmp, makecode(O_LAB, 0, label1));
	  }
    break;

  case 54:
#line 564 "cmm.y"
    {
            (yyval).code = mergecode(mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code),
				makecode(O_OPR, 0, 2));
          }
    break;

  case 55:
#line 569 "cmm.y"
    {
            (yyval).code = mergecode(mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code),
				makecode(O_OPR, 0, 3));
          }
    break;

  case 56:
#line 574 "cmm.y"
    {
            (yyval).code = (yyvsp[(1) - (1)]).code;
          }
    break;

  case 57:
#line 580 "cmm.y"
    {
            (yyval).code = mergecode(mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code),
				makecode(O_OPR, 0, 4));
          }
    break;

  case 58:
#line 585 "cmm.y"
    {
            (yyval).code = mergecode(mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code),
				makecode(O_OPR, 0, 5));
          }
    break;

  case 59:
#line 590 "cmm.y"
    {
            (yyval).code = (yyvsp[(1) - (1)]).code;
          }
    break;

  case 60:
#line 595 "cmm.y"
    {
	    cptr *tmpc;
	    list* tmpl;

	    tmpl = search_all((yyvsp[(1) - (1)]).name);
	    if (tmpl == NULL){
	      sem_error2("id");
	    }

	    if (tmpl->kind == VARIABLE){
	      (yyval).code = makecode(O_LOD, level - tmpl->l, tmpl->a);
	    }
	    else {
	      sem_error2("id as variable");
	    }
	  }
    break;

  case 61:
#line 612 "cmm.y"
    {
	    list* tmpl;

	    tmpl = search_all((yyvsp[(1) - (4)]).name);
	    if (tmpl == NULL){
	      sem_error2("id as function");
	    }

	    if (tmpl->kind != FUNC){
	      sem_error2("id as function2");
	    }

	    if (tmpl->params != (yyvsp[(3) - (4)]).val){
	      sem_error3(tmpl->name, tmpl->params, (yyvsp[(3) - (4)]).val);
	    }

	    (yyval).code = mergecode((yyvsp[(3) - (4)]).code,
				makecode(O_CAL,
					 level - tmpl->l,
					 tmpl->a));
	  }
    break;

  case 62:
#line 634 "cmm.y"
    {
	    (yyval).code = makecode(O_LIT, 0, yylval.val);
	  }
    break;

  case 63:
#line 638 "cmm.y"
    {
	    (yyval).code = (yyvsp[(2) - (3)]).code;
	  }
    break;

  case 64:
#line 644 "cmm.y"
    {
	    (yyval).val = 0;
	    (yyval).code = NULL;
	  }
    break;

  case 65:
#line 649 "cmm.y"
    {
	    (yyval).val = (yyvsp[(1) - (1)]).val;
	    (yyval).code = (yyvsp[(1) - (1)]).code;
	  }
    break;

  case 66:
#line 656 "cmm.y"
    {
	    (yyval).val = (yyvsp[(1) - (3)]).val + 1;
	    (yyval).code = mergecode((yyvsp[(1) - (3)]).code, (yyvsp[(3) - (3)]).code);
	  }
    break;

  case 67:
#line 661 "cmm.y"
    {
	    (yyval).val = 1;
	    (yyval).code = (yyvsp[(1) - (1)]).code;
	  }
    break;

  case 68:
#line 668 "cmm.y"
    {
	    (yyval).code = (yyvsp[(1) - (1)]).code;
	  }
    break;


/* Line 1267 of yacc.c.  */
#line 2276 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 672 "cmm.y"


#include "lex.yy.c"

main(){
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

