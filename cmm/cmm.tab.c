/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "cmm.y" /* yacc.c:339  */

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
	

#line 95 "cmm.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VAR = 258,
    MAIN = 259,
    ID = 260,
    LPAR = 261,
    RPAR = 262,
    COMMA = 263,
    LBRA = 264,
    RBRA = 265,
    WRITE = 266,
    WRITELN = 267,
    SEMI = 268,
    PLUS = 269,
    MINUS = 270,
    MULT = 271,
    DIV = 272,
    MOD = 273,
    POW = 274,
    PLPL = 275,
    MIMI = 276,
    LABEL = 277,
    GOTO = 278,
    NUMBER = 279,
    IF = 280,
    THEN = 281,
    ELSE = 282,
    ENDIF = 283,
    WHILE = 284,
    DO = 285,
    FOR = 286,
    ENDFOR = 287,
    READ = 288,
    COLEQ = 289,
    GE = 290,
    GT = 291,
    LE = 292,
    LT = 293,
    NE = 294,
    EQ = 295,
    RETURN = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 185 "cmm.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  135

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    70,    76,    79,    84,    95,   109,   121,
     133,   146,   152,   160,   171,   177,   182,   189,   201,   215,
     225,   232,   237,   242,   261,   279,   280,   281,   282,   283,
     284,   285,   286,   286,   294,   305,   318,   337,   384,   405,
     418,   433,   446,   462,   481,   486,   491,   496,   501,   506,
     512,   517,   522,   531,   537,   553,   560,   566,   567,   572,
     573,   574,   575,   576,   581,   598,   620,   624,   631,   635,
     642,   647,   654
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "MAIN", "ID", "LPAR", "RPAR",
  "COMMA", "LBRA", "RBRA", "WRITE", "WRITELN", "SEMI", "PLUS", "MINUS",
  "MULT", "DIV", "MOD", "POW", "PLPL", "MIMI", "LABEL", "GOTO", "NUMBER",
  "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "FOR", "ENDFOR", "READ",
  "COLEQ", "GE", "GT", "LE", "LT", "NE", "EQ", "RETURN", "$accept",
  "program", "main", "fdecls", "fdecl", "fhead", "fid", "params", "body",
  "vdaction", "vardecls", "vardecl", "ids", "stmts", "st", "$@1", "ifstmt",
  "whilestmt", "forstmt", "pow", "pre_inc", "pre_de", "post_de",
  "post_inc", "cond", "E", "T", "F", "G", "H", "fparams", "ac_params",
  "fparam", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

#define YYPACT_NINF -23

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-23)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -23,    10,     0,   -23,    29,   -23,   -23,   -23,    29,    38,
     -23,   -23,   -23,    41,   155,    50,   -23,    15,    20,    43,
      59,    71,    93,    43,    43,   155,    94,    43,    14,   -23,
      29,   -23,   -23,   -23,    87,    90,    95,    96,   107,   -23,
     -23,   109,   -23,   -23,    43,    12,    43,   -23,   -23,   -23,
     -23,   -23,   -23,    37,    53,   101,   -23,   -23,   -23,   -23,
     -23,    30,    22,    85,    43,   108,    69,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,    -5,   -23,    73,    43,     6,
     -23,    43,    43,    43,    43,    43,   100,   155,    43,    43,
      43,    43,    43,    43,   155,   112,   -23,   -23,   123,   -23,
     -23,    51,   122,   130,   -23,   -23,    53,    53,   101,   101,
     101,   -23,    67,    51,    51,    51,    51,    51,    51,   -23,
     155,   -23,   -23,    43,   155,   117,   110,   -23,   103,   -23,
     155,   126,   132,   -23,   -23
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,     0,     8,     2,     4,     0,     0,
      15,     3,     6,    11,    32,    13,    10,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,    32,    20,
       0,    25,    26,    27,     0,     0,     0,     0,     0,    14,
       7,     0,    43,    42,     0,    64,     0,    66,    57,    59,
      60,    61,    62,     0,    52,    56,    58,    63,    22,    40,
      41,     0,     0,     0,     0,     0,     0,    12,    19,    33,
      28,    29,    31,    30,    18,     0,     9,     0,    68,     0,
      21,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,    32,     0,    23,    34,     0,    16,
      24,    72,     0,    69,    71,    67,    50,    51,    53,    55,
      54,    39,     0,    45,    44,    47,    46,    48,    49,    37,
      32,    17,    65,     0,    32,     0,     0,    70,     0,    35,
      32,     0,    32,    36,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,    -1,   -23,
     -23,   -23,   -23,    11,   -19,   -23,   -23,   -23,   -23,   -23,
     -14,   -13,     2,     3,   -22,    58,    -3,     8,   -23,   -23,
     -23,   -23,    19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     6,     2,     7,     8,     9,    17,    11,    14,
      15,    39,    75,    28,    29,    30,    31,    32,    33,    48,
      49,    50,    51,    52,    61,    62,    54,    55,    56,    57,
     102,   103,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    35,    63,    98,     4,     5,    64,    12,    99,    68,
       3,    34,    35,   105,    34,    35,    36,    37,    78,    18,
      81,    82,    40,    41,    67,    19,    20,    36,    37,    69,
      36,    37,    42,    43,    21,    22,    81,    82,    10,    23,
      42,    43,    95,    24,    13,    25,    16,    26,    45,    46,
      80,    81,    82,    38,    44,    27,    87,    88,    89,    90,
      91,    92,    93,    21,    22,    81,    82,    47,   112,    83,
      84,    85,    58,    34,    35,   119,    59,    53,   106,   107,
      34,    35,    97,    81,    82,    66,   100,    81,    82,    36,
      37,   108,   109,   110,   124,   125,    36,    37,    60,    65,
      70,   126,    77,    71,    79,   128,    34,    35,    72,    73,
      34,    35,    74,    68,    76,    94,    34,    35,    34,    35,
      86,    96,    36,    37,   111,   120,    36,    37,   121,   122,
     129,   131,    36,    37,    36,    37,   101,    18,   123,   133,
     130,   132,   127,    19,    20,     0,   113,   114,   115,   116,
     117,   118,    21,    22,     0,     0,     0,    23,     0,     0,
      18,    24,     0,    25,   134,    26,    19,    20,     0,     0,
       0,     0,     0,    27,     0,    21,    22,     0,     0,     0,
      23,   101,     0,     0,    24,     0,    25,     0,    26,     0,
       0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      14,    14,    24,     8,     4,     5,    25,     8,    13,    28,
       0,    25,    25,     7,    28,    28,    14,    14,     6,     5,
      14,    15,     7,     8,    10,    11,    12,    25,    25,    30,
      28,    28,    20,    21,    20,    21,    14,    15,     9,    25,
      20,    21,    64,    29,     6,    31,     5,    33,     5,     6,
      13,    14,    15,     3,    34,    41,    26,    35,    36,    37,
      38,    39,    40,    20,    21,    14,    15,    24,    87,    16,
      17,    18,    13,    87,    87,    94,     5,    19,    81,    82,
      94,    94,    13,    14,    15,    27,    13,    14,    15,    87,
      87,    83,    84,    85,    27,    28,    94,    94,     5,     5,
      13,   120,    44,    13,    46,   124,   120,   120,    13,    13,
     124,   124,     5,   132,     5,    30,   130,   130,   132,   132,
      19,    13,   120,   120,    24,    13,   124,   124,     5,     7,
      13,    28,   130,   130,   132,   132,    78,     5,     8,    13,
      30,   130,   123,    11,    12,    -1,    88,    89,    90,    91,
      92,    93,    20,    21,    -1,    -1,    -1,    25,    -1,    -1,
       5,    29,    -1,    31,    32,    33,    11,    12,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    20,    21,    -1,    -1,    -1,
      25,   123,    -1,    -1,    29,    -1,    31,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    45,     0,     4,     5,    44,    46,    47,    48,
       9,    50,    50,     6,    51,    52,     5,    49,     5,    11,
      12,    20,    21,    25,    29,    31,    33,    41,    55,    56,
      57,    58,    59,    60,    62,    63,    64,    65,     3,    53,
       7,     8,    20,    21,    34,     5,     6,    24,    61,    62,
      63,    64,    65,    67,    68,    69,    70,    71,    13,     5,
       5,    66,    67,    66,    56,     5,    67,    10,    56,    50,
      13,    13,    13,    13,     5,    54,     5,    67,     6,    67,
      13,    14,    15,    16,    17,    18,    19,    26,    35,    36,
      37,    38,    39,    40,    30,    66,    13,    13,     8,    13,
      13,    67,    72,    73,    74,     7,    68,    68,    69,    69,
      69,    24,    56,    67,    67,    67,    67,    67,    67,    56,
      13,     5,     7,     8,    27,    28,    56,    74,    56,    13,
      30,    28,    55,    13,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    45,    45,    46,    47,    48,    49,
      49,    49,    50,    51,    52,    52,    53,    54,    54,    55,
      55,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    56,    56,    58,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    66,    66,    66,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    69,    69,    70,
      70,    70,    70,    70,    71,    71,    71,    71,    72,    72,
      73,    73,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     2,     4,     1,     3,
       1,     0,     4,     1,     2,     0,     3,     3,     1,     2,
       1,     3,     2,     3,     4,     1,     1,     1,     2,     2,
       2,     2,     0,     2,     3,     6,     8,     4,     8,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     0,     1,
       3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 53 "cmm.y" /* yacc.c:1646  */
    {
		cptr *tmp;
		int label0;

		label0 = makelabel();

		tmp = makecode(O_JMP, 0, label0);
		tmp = mergecode(tmp, (yyvsp[-1]).code);
		tmp = mergecode(tmp, makecode(O_LAB, 0, label0));
		tmp = mergecode(tmp, makecode(O_INT, 0, (yyvsp[0]).val + SYSTEM_AREA));
		tmp = mergecode(tmp, (yyvsp[0]).code);
		tmp = mergecode(tmp, makecode(O_OPR, 0, 0));

		printcode(ofile, tmp);
	}
#line 1384 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 70 "cmm.y" /* yacc.c:1646  */
    {
			  (yyval).code = (yyvsp[0]).code;
			  (yyval).val = (yyvsp[0]).val;
		  }
#line 1393 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 76 "cmm.y" /* yacc.c:1646  */
    {
			  (yyval).code = mergecode((yyvsp[-1]).code, (yyvsp[0]).code);
		  }
#line 1401 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 79 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = NULL;
}
#line 1409 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 85 "cmm.y" /* yacc.c:1646  */
    {
	cptr *tmp, *tmp2;

	tmp = makecode(O_LAB, 0, (yyvsp[-1]).val);
	tmp2 = makecode(O_INT, 0, (yyvsp[0]).val + SYSTEM_AREA);
	(yyval).code = mergecode(mergecode(tmp, tmp2), (yyvsp[0]).code);
	delete_block();
}
#line 1422 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 96 "cmm.y" /* yacc.c:1646  */
    {
	int   label;
	int   i;
	list *tmp;

	label = makelabel();

	make_params((yyvsp[-1]).val+1, label);

	(yyval).val = label;
}
#line 1438 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 110 "cmm.y" /* yacc.c:1646  */
    {
	if (search_all((yyvsp[0]).name) == NULL){
		addlist((yyvsp[0]).name, FUNC, 0, level, 0);
	}
	else {
		sem_error1("fid");
	}
	addlist("block", BLOCK, 0, 0, 0);
}
#line 1452 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 122 "cmm.y" /* yacc.c:1646  */
    {
	if (search_block((yyvsp[0]).name) == NULL){
		addlist((yyvsp[0]).name, VARIABLE, 0, level, 0);
	}
	else {
		sem_error1("params");
	}

	(yyval).code = NULL;
	(yyval).val = (yyvsp[-2]).val + 1;
}
#line 1468 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 134 "cmm.y" /* yacc.c:1646  */
    {
	if (search_block((yyvsp[0]).name) == NULL){
		addlist((yyvsp[0]).name, VARIABLE, 0, level, 0);
	}
	else {
		sem_error1("params2");
	}

	(yyval).code = NULL;
	(yyval).val = 1;
}
#line 1484 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 146 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).val = 0;
	(yyval).code = NULL;
}
#line 1493 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 153 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = (yyvsp[-1]).code;
	(yyval).val = (yyvsp[-2]).val + (yyvsp[-1]).val;
	offset = offset - (yyvsp[-2]).val;
}
#line 1503 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 161 "cmm.y" /* yacc.c:1646  */
    {
	int i;

	vd_backpatch((yyvsp[0]).val, offset);

	(yyval).val = (yyvsp[0]).val;
	offset = offset + (yyvsp[0]).val;
}
#line 1516 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 172 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).val = (yyvsp[-1]).val + (yyvsp[0]).val;
	(yyval).code = NULL;
}
#line 1525 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 177 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).val = 0;
}
#line 1533 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 183 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).val = (yyvsp[-1]).val;
	(yyval).code = NULL;
}
#line 1542 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 190 "cmm.y" /* yacc.c:1646  */
    {
	if (search_block((yyvsp[0]).name) == NULL){
		addlist((yyvsp[0]).name, VARIABLE, 0, level, 0);
	}
	else {
		sem_error1("var");
	}

	(yyval).code = NULL;
	(yyval).val = (yyvsp[-2]).val + 1;
}
#line 1558 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 202 "cmm.y" /* yacc.c:1646  */
    {
	if (search_block((yyvsp[0]).name) == NULL){
		addlist((yyvsp[0]).name, VARIABLE, 0, level, 0);
	}
	else {
		sem_error1("var");
	}

	(yyval).code = NULL;
	(yyval).val = 1;
}
#line 1574 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 216 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode((yyvsp[-1]).code, (yyvsp[0]).code);
	if ((yyvsp[-1]).val < (yyvsp[0]).val){
		(yyval).val = (yyvsp[0]).val;
	}
	else {
		(yyval).val = (yyvsp[-1]).val;
	}
}
#line 1588 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 226 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = (yyvsp[0]).code;
	(yyval).val = (yyvsp[0]).val;
}
#line 1597 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 233 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode((yyvsp[-1]).code, makecode(O_CSP, 0, 1));
	(yyval).val = 0;
}
#line 1606 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 238 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = makecode(O_CSP, 0, 2);
	(yyval).val = 0;
}
#line 1615 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 243 "cmm.y" /* yacc.c:1646  */
    {
	cptr *tmp;
	list *tmp2;

	tmp2 = search_all((yyvsp[-1]).name);

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
#line 1638 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 262 "cmm.y" /* yacc.c:1646  */
    {
	list *tmp;

	tmp = search_all((yyvsp[-3]).name);

	if (tmp == NULL){
		sem_error2("assignment");
	}

	if (tmp->kind != VARIABLE){
		sem_error2("assignment2");
	}

	(yyval).code = mergecode((yyvsp[-1]).code,
			makecode(O_STO, level - tmp->l, tmp->a));
	(yyval).val = 0;
}
#line 1660 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 286 "cmm.y" /* yacc.c:1646  */
    { addlist("block", BLOCK, 0, 0, 0); }
#line 1666 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 289 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = (yyvsp[0]).code;
	(yyval).val = (yyvsp[0]).val;
	delete_block();
}
#line 1676 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 295 "cmm.y" /* yacc.c:1646  */
    {
	list* tmp2;

	tmp2 = searchf(level);

	(yyval).code = mergecode((yyvsp[-1]).code, makecode(O_RET, 0, tmp2->params));
	(yyval).val = 0;
}
#line 1689 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 306 "cmm.y" /* yacc.c:1646  */
    {
	cptr *tmp;
	int label0, label1;

	label0 = makelabel();

	tmp = mergecode((yyvsp[-4]).code, makecode(O_JPC, 0, label0));
	tmp = mergecode(tmp, (yyvsp[-2]).code);

	(yyval).code = mergecode(tmp, makecode(O_LAB, 0, label0));
	(yyval).val = 0;
}
#line 1706 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 319 "cmm.y" /* yacc.c:1646  */
    {
	cptr *tmp;
	int label0, label1;

	label0 = makelabel();
	label1 = makelabel();

	tmp = mergecode((yyvsp[-6]).code, makecode(O_JPC, 0, label0));
	tmp = mergecode(tmp, (yyvsp[-4]).code);
	tmp = mergecode(tmp, makecode(O_JMP, 0, label1));
	tmp = mergecode(tmp, makecode(O_LAB, 0, label0));
	tmp = mergecode(tmp, (yyvsp[-2]).code);

	(yyval).code = mergecode(tmp, makecode(O_LAB, 0, label1));
	(yyval).val = 0;
}
#line 1727 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 338 "cmm.y" /* yacc.c:1646  */
    {
	int label0, label1;
	cptr *tmp;

	label0 = makelabel();
	label1 = makelabel();

	tmp = makecode(O_LAB, 0, label0);
	tmp = mergecode(tmp, (yyvsp[-2]).code);
	tmp = mergecode(tmp, makecode(O_JPC, 0, label1));
	tmp = mergecode(tmp, (yyvsp[0]).code);
	tmp = mergecode(tmp, makecode(O_JMP, 0, label0));
	tmp = mergecode(tmp, makecode(O_LAB, 0, label1));

	(yyval).code = tmp; 

	(yyval).val = 0;
}
#line 1750 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 385 "cmm.y" /* yacc.c:1646  */
    {
	int for0,for1;
	for0 = makelabel();for1 = makelabel();
	cptr *tmp;
	/* init をinitしつつ、ラベル設置 */
	tmp = mergecode((yyvsp[-6]).code,makecode(O_LAB, 0, for0));
	/* falseでroopしゅうりょう　*/
	tmp = mergecode(mergecode(tmp,(yyvsp[-5]).code),makecode(O_JPC,0,for1));
	/* 満を持して中身計算  */
	tmp = mergecode(tmp,(yyvsp[-1]).code);
	/* forをひとつ進める */
	tmp = mergecode(tmp,(yyvsp[-3]).code);
	/* ループ処理 */
	tmp = mergecode(tmp,makecode(O_JMP,0,for0));
	tmp = mergecode(tmp,makecode(O_LAB,0,for1));
	(yyval).code = tmp;
	(yyval).val = 0;

}
#line 1774 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 406 "cmm.y" /* yacc.c:1646  */
    {
	int right = yylval.val;  
	cptr* sum = makecode(O_LIT,0,1);
	for(int i=0;i<right;i++){
		sum = mergecode(mergecode(sum,copy_cptr((yyvsp[-2]).code)),makecode(O_OPR,0,4));
	}
	(yyval).code = sum;

}
#line 1788 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 419 "cmm.y" /* yacc.c:1646  */
    { 
	/*なぜかうまくいかない*/ /* 全体でlevelを管理してた */
	/* iは+して,その行での評価はiのまま*/
	/* NUMBERを直接よみこむ*/
	list *tmpl = search_all((yyvsp[0]).name);
	if(tmpl == NULL) sem_error2("pre_inc");
	cptr *tmp;
	tmp = mergecode(makecode(O_LOD,level - tmpl->l,tmpl->a),makecode(O_LIT,0,1));
	tmp = mergecode(tmp,makecode(O_OPR,0,2));
	tmp = mergecode(tmp,makecode(O_STO,level-tmpl->l,tmpl->a));
	tmp = mergecode(tmp,makecode(O_LOD,level-tmpl->l,tmpl->a));
	(yyval).code = tmp;
}
#line 1806 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 434 "cmm.y" /* yacc.c:1646  */
    { 
	list *tmpl = search_all((yyvsp[0]).name);
	if(tmpl == NULL) sem_error2("pre_de");
	cptr *tmp;
	cptr *out;
	tmp = mergecode(makecode(O_LOD,level - tmpl->l,tmpl->a),makecode(O_LIT,0,1));
	tmp = mergecode(tmp,makecode(O_OPR,0,3));
	tmp = mergecode(tmp,makecode(O_STO,level-tmpl->l,tmpl->a));
	tmp = mergecode(tmp,makecode(O_LOD,level-tmpl->l,tmpl->a));
	(yyval).code = tmp;
}
#line 1822 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 447 "cmm.y" /* yacc.c:1646  */
    { 
	/* 実際の変数の場所の数値はかえておいて、出力するのは普通の値*/
	list *tmpl = search_all((yyvsp[-1]).name);
	if(tmpl == NULL) sem_error2("pre_de");
	cptr *tmp;
	cptr *out;
	tmp = mergecode(makecode(O_LOD,level - tmpl->l,tmpl->a),makecode(O_LIT,0,1));
	tmp = mergecode(tmp,makecode(O_OPR,0,3));
	tmp = mergecode(tmp,makecode(O_STO,level-tmpl->l,tmpl->a));
	tmp = mergecode(tmp,makecode(O_LOD,level-tmpl->l,tmpl->a));
	out = mergecode(mergecode(tmp,makecode(O_LIT,0,1))
					,makecode(O_OPR,0,2));
	(yyval).code = out;
}
#line 1841 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 463 "cmm.y" /* yacc.c:1646  */
    { 
	/* 実際の変数の場所の数値はかえておいて、出力するのは普通の値*/
	list *tmpl = search_all((yyvsp[-1]).name);
	if(tmpl == NULL) sem_error2("pre_de");
	cptr *tmp;
	cptr *out;
	tmp = mergecode(makecode(O_LOD,level - tmpl->l,tmpl->a),makecode(O_LIT,0,1));
	tmp = mergecode(tmp,makecode(O_OPR,0,2));
	tmp = mergecode(tmp,makecode(O_STO,level-tmpl->l,tmpl->a));
	tmp = mergecode(tmp,makecode(O_LOD,level-tmpl->l,tmpl->a));
	out = mergecode(mergecode(tmp,makecode(O_LIT,0,1))
					,makecode(O_OPR,0,3));
	(yyval).code = out;
}
#line 1860 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 482 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode(mergecode((yyvsp[-2]).code, (yyvsp[0]).code),
			makecode(O_OPR, 0, 12));
}
#line 1869 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 487 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode(mergecode((yyvsp[-2]).code, (yyvsp[0]).code),
			makecode(O_OPR, 0, 11));
}
#line 1878 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 492 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode(mergecode((yyvsp[-2]).code, (yyvsp[0]).code),
			makecode(O_OPR, 0, 10));
}
#line 1887 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 497 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode(mergecode((yyvsp[-2]).code, (yyvsp[0]).code),
			makecode(O_OPR, 0, 13));
}
#line 1896 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 502 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode(mergecode((yyvsp[-2]).code, (yyvsp[0]).code),
			makecode(O_OPR, 0, 9));
}
#line 1905 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 507 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode(mergecode((yyvsp[-2]).code, (yyvsp[0]).code),
			makecode(O_OPR, 0, 8));
}
#line 1914 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 513 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode(mergecode((yyvsp[-2]).code, (yyvsp[0]).code),
			makecode(O_OPR, 0, 2));
}
#line 1923 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 518 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode(mergecode((yyvsp[-2]).code, (yyvsp[0]).code),
			makecode(O_OPR, 0, 3));
}
#line 1932 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 523 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = (yyvsp[0]).code;
}
#line 1940 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 532 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode(mergecode((yyvsp[-2]).code, (yyvsp[0]).code),
			makecode(O_OPR, 0, 4));
}
#line 1949 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 538 "cmm.y" /* yacc.c:1646  */
    {
	cptr *tmp,*tmp1,*tmp2,*tmp3,*tmp4;
	/* したいこと: mod = a - b * (a / b) であまりが出る */
	/* mergecodeすると$1.code,$3.codeが消えるからできない */
	/* copy_cptr作成で解決 */
	tmp1 = copy_cptr((yyvsp[-2]).code); tmp2 = copy_cptr((yyvsp[0]).code);
	tmp3 = copy_cptr((yyvsp[-2]).code); tmp4 = copy_cptr((yyvsp[0]).code);
	tmp = mergecode(mergecode(tmp1,tmp2),makecode(O_OPR,0,5));
	/* b*tmp */
	tmp = mergecode(mergecode(tmp4,tmp),makecode(O_OPR,0,4));
	/* a-tmp */
	tmp = mergecode(mergecode(tmp3,tmp),makecode(O_OPR,0,3));
	(yyval).code = tmp;
}
#line 1968 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 554 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = mergecode(mergecode((yyvsp[-2]).code, (yyvsp[0]).code),
			makecode(O_OPR, 0, 5));
}
#line 1977 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 561 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = (yyvsp[0]).code;
}
#line 1985 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 568 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = (yyvsp[0]).code;
}
#line 1993 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 577 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = (yyvsp[0]).code;
}
#line 2001 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 582 "cmm.y" /* yacc.c:1646  */
    {
	cptr *tmpc;
	list* tmpl;

	tmpl = search_all((yyvsp[0]).name);
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
#line 2022 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 599 "cmm.y" /* yacc.c:1646  */
    {
	list* tmpl;

	tmpl = search_all((yyvsp[-3]).name);
	if (tmpl == NULL){
		sem_error2("id as function");
	}

	if (tmpl->kind != FUNC){
		sem_error2("id as function2");
	}

	if (tmpl->params != (yyvsp[-1]).val){
		sem_error3(tmpl->name, tmpl->params, (yyvsp[-1]).val);
	}

	(yyval).code = mergecode((yyvsp[-1]).code,
			makecode(O_CAL,
				level - tmpl->l,
				tmpl->a));
}
#line 2048 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 621 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = makecode(O_LIT, 0, yylval.val);
}
#line 2056 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 625 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = (yyvsp[-1]).code;
}
#line 2064 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 631 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).val = 0;
	(yyval).code = NULL;
}
#line 2073 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 636 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).val = (yyvsp[0]).val;
	(yyval).code = (yyvsp[0]).code;
}
#line 2082 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 643 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).val = (yyvsp[-2]).val + 1;
	(yyval).code = mergecode((yyvsp[-2]).code, (yyvsp[0]).code);
}
#line 2091 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 648 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).val = 1;
	(yyval).code = (yyvsp[0]).code;
}
#line 2100 "cmm.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 655 "cmm.y" /* yacc.c:1646  */
    {
	(yyval).code = (yyvsp[0]).code;
}
#line 2108 "cmm.tab.c" /* yacc.c:1646  */
    break;


#line 2112 "cmm.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 659 "cmm.y" /* yacc.c:1906  */


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
