/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "valida_portugol.y"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


/* Line 268 of yacc.c  */
#line 78 "valida_portugol.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_ALGORITMO = 258,
     T_FIMALGORITMO = 259,
     T_INICIO = 260,
     T_ESCREVAL = 261,
     T_ESCREVA = 262,
     T_STRING = 263,
     T_COMENTARIO = 264,
     T_ABRE_PARENT = 265,
     T_FECHA_PARENT = 266,
     T_ABRECOLCHETE = 267,
     T_FECHACOLCHETE = 268,
     T_VIRGULA = 269,
     T_AND = 270,
     T_OR = 271,
     T_NOT = 272,
     T_VAR = 273,
     T_INTEIRO = 274,
     T_REAL = 275,
     T_CARACTERE = 276,
     T_LOGICO = 277,
     T_PI = 278,
     T_LEIA = 279,
     T_ESCOLHA = 280,
     T_CASO = 281,
     T_OUTROCASO = 282,
     T_FIMESCOLHA = 283,
     T_NUMINTEIRO = 284,
     T_NUMREAL = 285,
     T_ATRIBUI = 286,
     T_DECLARAVAR = 287,
     T_ESPACO = 288,
     T_PONTOPONTO = 289,
     T_SOMA = 290,
     T_DIVISAO = 291,
     T_SUBTRACAO = 292,
     T_MULT = 293,
     T_POTENCIA = 294,
     T_MOD = 295,
     T_DIFERENTE = 296,
     T_MENORQUE = 297,
     T_MENORIGUALQUE = 298,
     T_MAIORQUE = 299,
     T_MAIORIGUALQUE = 300,
     T_IGUAL = 301,
     T_REPITA = 302,
     T_ATE = 303,
     T_LOGICO_VERDADEIRO = 304,
     T_LOGICO_FALSO = 305,
     T_DIVISAOINTEIRA = 306,
     T_RESTO = 307,
     T_VARIAVEL = 308,
     T_RAIZQ = 309,
     T_COPIA = 310,
     T_COMPR = 311,
     T_MAIUSC = 312,
     T_DOISPONTOS = 313,
     T_ENQUANTO = 314,
     T_FIMENQUANTO = 315,
     T_PROCEDIMENTO = 316,
     T_FIMPROCEDIMENTO = 317,
     T_RETORNE = 318,
     T_FUNCAO = 319,
     T_FIMFUNCAO = 320,
     T_SE = 321,
     T_ENTAO = 322,
     T_SENAO = 323,
     T_FIMSE = 324,
     T_INTERROMPA = 325,
     T_PARA = 326,
     T_DE = 327,
     T_PASSO = 328,
     T_FACA = 329,
     T_FIMPARA = 330,
     T_VETOR = 331
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 196 "valida_portugol.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   350

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  253

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    12,    14,    18,    21,    22,
      27,    32,    33,    36,    38,    42,    44,    46,    48,    50,
      52,    54,    63,    65,    67,    70,    71,    74,    77,    80,
      83,    86,    89,    92,    95,    98,   101,   104,   107,   113,
     121,   131,   142,   146,   151,   154,   157,   162,   172,   176,
     182,   184,   187,   189,   193,   197,   201,   203,   205,   209,
     213,   217,   221,   225,   228,   232,   236,   238,   240,   242,
     244,   249,   254,   263,   268,   273,   275,   277,   278,   280,
     282,   288,   296,   300,   303,   306,   311,   313,   315,   317,
     319,   321,   323,   327,   329,   331,   333,   335,   339,   341,
     348,   358,   370,   375,   377,   379,   381,   383,   385,   389,
     395,   402
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      78,     0,    -1,    -1,    78,    79,    -1,     3,    80,    81,
       4,    -1,     8,    -1,    83,     5,    89,    -1,    98,    81,
      -1,    -1,    84,    58,    87,    82,    -1,    84,    58,    88,
      82,    -1,    -1,    18,    82,    -1,    86,    -1,    86,    14,
      84,    -1,    29,    -1,    53,    -1,    53,    -1,    19,    -1,
      20,    -1,    21,    -1,    76,    12,    29,    34,    29,    13,
      72,    87,    -1,    98,    -1,    90,    -1,    98,    89,    -1,
      -1,     8,    90,    -1,   111,    90,    -1,   110,    90,    -1,
     112,    90,    -1,   100,    90,    -1,   117,    90,    -1,   119,
      90,    -1,   123,    90,    -1,   118,    90,    -1,    91,    90,
      -1,    70,    90,    -1,    93,    90,    -1,    66,   116,    67,
      89,    69,    -1,    66,   116,    67,    89,    68,    89,    69,
      -1,    61,    53,    10,    97,    11,    83,     5,    89,    62,
      -1,    61,    53,    10,    97,    31,    87,    83,     5,    89,
      62,    -1,    96,    92,   102,    -1,    63,    10,     8,     8,
      -1,    63,     8,    -1,    63,   101,    -1,    53,    10,    97,
      11,    -1,    64,    95,    58,    87,    83,     5,    89,    94,
      65,    -1,    84,    58,    87,    -1,    97,    14,    84,    58,
      87,    -1,    99,    -1,    99,    98,    -1,     9,    -1,    86,
      31,     8,    -1,    86,    31,   101,    -1,    86,    31,   102,
      -1,   107,    -1,    86,    -1,   101,    35,   101,    -1,   101,
      37,   101,    -1,   101,    38,   101,    -1,   101,    36,   101,
      -1,   101,    40,   101,    -1,    37,   101,    -1,   101,    39,
     101,    -1,    10,   101,    11,    -1,   106,    -1,   103,    -1,
     104,    -1,   105,    -1,    56,    10,    53,    11,    -1,    56,
      10,     8,    11,    -1,    55,    10,    53,    14,    29,    14,
      29,    11,    -1,    57,    10,    53,    11,    -1,    54,    10,
     101,    11,    -1,    29,    -1,    30,    -1,    -1,     8,    -1,
     101,    -1,   108,    14,   101,    58,    29,    -1,   108,    14,
     101,    58,    29,    58,    29,    -1,    10,   108,    11,    -1,
       7,   109,    -1,     6,   109,    -1,    24,    10,    53,    11,
      -1,    46,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,    45,    -1,   101,   113,   101,    -1,    15,    -1,    16,
      -1,    17,    -1,   114,    -1,   114,   115,   116,    -1,    22,
      -1,    59,    10,   116,    11,    89,    60,    -1,    71,    86,
      72,    85,    48,    85,    74,    89,    75,    -1,    71,    86,
      72,    85,    48,    85,    73,    29,    74,    89,    75,    -1,
      25,    53,   122,    28,    -1,   114,    -1,    53,    -1,     8,
      -1,   107,    -1,   120,    -1,   120,    14,   121,    -1,    26,
     121,    89,    27,    89,    -1,    26,   121,    89,   122,    27,
      89,    -1,    47,    89,    48,    10,   116,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    55,    59,    63,    66,    67,    70,    71,
      72,    75,    76,    81,    82,    86,    87,    91,    95,    96,
      97,   101,   105,   106,   107,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   126,   127,
     131,   132,   136,   142,   143,   144,   148,   152,   156,   157,
     161,   162,   166,   170,   171,   172,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   190,   191,   192,
     196,   197,   201,   205,   209,   213,   214,   217,   218,   219,
     220,   221,   224,   229,   233,   237,   241,   242,   243,   244,
     245,   246,   249,   253,   254,   255,   259,   260,   261,   265,
     269,   270,   274,   278,   279,   280,   281,   285,   286,   290,
     291,   296
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ALGORITMO", "T_FIMALGORITMO",
  "T_INICIO", "T_ESCREVAL", "T_ESCREVA", "T_STRING", "T_COMENTARIO",
  "T_ABRE_PARENT", "T_FECHA_PARENT", "T_ABRECOLCHETE", "T_FECHACOLCHETE",
  "T_VIRGULA", "T_AND", "T_OR", "T_NOT", "T_VAR", "T_INTEIRO", "T_REAL",
  "T_CARACTERE", "T_LOGICO", "T_PI", "T_LEIA", "T_ESCOLHA", "T_CASO",
  "T_OUTROCASO", "T_FIMESCOLHA", "T_NUMINTEIRO", "T_NUMREAL", "T_ATRIBUI",
  "T_DECLARAVAR", "T_ESPACO", "T_PONTOPONTO", "T_SOMA", "T_DIVISAO",
  "T_SUBTRACAO", "T_MULT", "T_POTENCIA", "T_MOD", "T_DIFERENTE",
  "T_MENORQUE", "T_MENORIGUALQUE", "T_MAIORQUE", "T_MAIORIGUALQUE",
  "T_IGUAL", "T_REPITA", "T_ATE", "T_LOGICO_VERDADEIRO", "T_LOGICO_FALSO",
  "T_DIVISAOINTEIRA", "T_RESTO", "T_VARIAVEL", "T_RAIZQ", "T_COPIA",
  "T_COMPR", "T_MAIUSC", "T_DOISPONTOS", "T_ENQUANTO", "T_FIMENQUANTO",
  "T_PROCEDIMENTO", "T_FIMPROCEDIMENTO", "T_RETORNE", "T_FUNCAO",
  "T_FIMFUNCAO", "T_SE", "T_ENTAO", "T_SENAO", "T_FIMSE", "T_INTERROMPA",
  "T_PARA", "T_DE", "T_PASSO", "T_FACA", "T_FIMPARA", "T_VETOR", "$accept",
  "Input", "Bloco", "nome", "codigo", "blocoVar", "declaravariavel",
  "variaveis", "VariavelInt", "variavel", "tipo", "vetor", "rotinas",
  "rotina", "se", "procedimento", "funcoes", "retorne", "nomefuncao",
  "funcao", "parametros", "comentarios", "comentario", "Atribuicao",
  "Expression", "FuncaoExistente", "comprimento", "copia", "maiusc",
  "raiz", "number", "Conteudo", "ParametroFUNC", "Escreva", "Escreval",
  "Leia", "Relacional", "ExpressaoRelacional", "ExpressaoLogica",
  "Condicao", "Enquanto", "Para", "Escolha", "Selecao", "Selecoes", "Caso",
  "Repita", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    79,    80,    81,    81,    82,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    87,    87,
      87,    88,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    93,    94,    94,    94,    95,    96,    97,    97,
      98,    98,    99,   100,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   103,   104,   105,   106,   107,   107,   108,   108,   108,
     108,   108,   109,   110,   111,   112,   113,   113,   113,   113,
     113,   113,   114,   115,   115,   115,   116,   116,   116,   117,
     118,   118,   119,   120,   120,   120,   120,   121,   121,   122,
     122,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     4,     1,     3,     2,     0,     4,
       4,     0,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     8,     1,     1,     2,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     5,     7,
       9,    10,     3,     4,     2,     2,     4,     9,     3,     5,
       1,     2,     1,     3,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     2,     3,     3,     1,     1,     1,     1,
       4,     4,     8,     4,     4,     1,     1,     0,     1,     1,
       5,     7,     3,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     6,
       9,    11,     4,     1,     1,     1,     1,     1,     3,     5,
       6,     6
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,     5,    11,    52,     8,     0,
       0,    11,    50,    17,    12,     0,    13,     4,    25,     7,
      51,     0,     0,     0,     0,    25,     0,     0,    25,     0,
       0,     0,    25,     0,     0,     6,    23,    25,    25,     0,
      22,    25,    25,    25,    25,    25,    25,    25,    25,    18,
      19,    20,     0,     8,     8,    14,    77,    84,    83,    26,
       0,     0,     0,     0,     0,     0,     0,    98,    75,    76,
       0,     0,    57,     0,    66,    56,    96,     0,    36,     0,
       0,    35,    37,     0,     0,    24,    30,    28,    27,    29,
      31,    34,    32,    33,     0,     9,    10,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,    86,     0,    93,    94,    95,     0,    25,     0,    53,
       0,     0,     0,    54,    55,    67,    68,    69,     0,    42,
       0,    82,     0,    85,   105,   104,   106,   103,   107,    25,
     102,     0,    25,     0,     0,    11,    65,     0,    58,    61,
      59,    60,    64,    62,    92,    97,     0,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,    74,    25,    38,     0,     0,     0,
       0,     0,     0,     0,     0,   108,    25,     0,   111,    99,
      48,     0,    25,     0,     0,     0,    71,    70,    73,    11,
       0,     0,    80,   109,    25,     0,     0,    39,     0,    25,
       0,     0,    11,     0,     0,   110,    49,     0,     0,     0,
       0,     0,    25,     0,    21,    81,    44,     0,    45,    47,
      25,   100,     0,     0,    25,     0,     0,    72,    40,     0,
      43,   101,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,     6,     9,    14,    10,    15,   169,    34,
      53,    54,    35,    36,    37,    84,    38,   228,    65,    39,
     154,    40,    12,    41,    73,   134,   135,   136,   137,    74,
      75,    99,    57,    42,    43,    44,   122,    76,   126,    77,
      45,    46,    47,   148,   149,   102,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -139
static const yytype_int16 yypact[] =
{
    -139,    18,  -139,    -5,  -139,  -139,    13,  -139,   -42,    15,
      28,    13,    31,  -139,  -139,   -11,    38,  -139,   124,  -139,
    -139,     7,   -42,    46,    46,   178,    51,    22,   124,    67,
      29,    20,   178,   -42,    48,  -139,  -139,   178,   178,    33,
     124,   178,   178,   178,   178,   178,   178,   178,   178,  -139,
    -139,  -139,    77,   -42,   -42,  -139,   170,  -139,  -139,  -139,
      70,    65,    81,    20,   110,    92,     6,  -139,  -139,  -139,
       6,   141,  -139,   268,  -139,  -139,    71,    85,  -139,    83,
      82,  -139,  -139,   101,    60,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,   127,  -139,  -139,  -139,   310,    30,
     146,   198,   131,   150,   152,   -42,   121,   232,    88,     6,
       6,     6,     6,     6,     6,     6,  -139,  -139,  -139,  -139,
    -139,  -139,     6,  -139,  -139,  -139,    20,   124,   -14,  -139,
     151,   154,   156,   310,  -139,  -139,  -139,  -139,   157,  -139,
     136,  -139,     6,  -139,  -139,   286,   298,  -139,   158,   124,
    -139,    20,   124,   115,    40,   161,  -139,   239,    88,   137,
      88,   137,   137,   137,   310,  -139,    41,  -139,  -139,   134,
     140,     0,   143,   -42,   160,   262,   198,    72,   186,   138,
     121,  -139,   -42,   196,  -139,   124,  -139,   -14,   190,   199,
     200,   205,    -2,   202,   180,  -139,   124,   194,  -139,  -139,
    -139,   164,   124,   163,    73,   197,  -139,  -139,  -139,   161,
     121,   166,   172,  -139,   124,   121,   173,  -139,   216,   124,
     240,   241,   161,   121,   224,  -139,  -139,   204,   191,   181,
     184,   231,   124,   256,  -139,  -139,  -139,   210,   310,  -139,
     124,  -139,   251,   203,   124,   258,   206,  -139,  -139,   220,
    -139,  -139,  -139
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,  -139,   272,    91,  -138,   -20,    97,    -8,
    -102,  -139,   -27,   248,  -139,  -139,  -139,  -139,  -139,  -139,
     114,    26,  -139,  -139,   -46,   233,  -139,  -139,  -139,  -139,
     -96,  -139,   264,  -139,  -139,  -139,  -139,   -95,  -139,   -56,
    -139,  -139,  -139,  -139,   139,   142,  -139
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -57
static const yytype_int16 yytable[] =
{
      16,    62,    55,     5,   155,   146,   147,   104,   189,   209,
      98,    13,   182,    85,    16,   167,    66,   183,     2,    17,
     107,     3,     7,    72,   108,    79,    49,    50,    51,   210,
      66,     8,    11,    18,   133,    68,    69,    11,    20,   168,
       7,   141,    67,    70,   142,    16,    16,    21,    72,    68,
      69,   181,    22,   190,   182,    72,    56,    70,    72,    13,
      71,    60,    72,   157,   158,   159,   160,   161,   162,   163,
     165,   221,    72,    13,    71,    61,   164,    63,   200,    80,
     146,   147,    64,    52,   233,   153,   123,   124,   125,    94,
     129,   101,    66,    72,    83,   178,   175,    16,   101,   196,
     166,    72,    72,    72,    72,    72,    72,    72,   222,   185,
     186,    68,    69,   226,    72,   130,   131,   132,    72,    70,
     105,   234,   177,   100,   111,   179,   113,   114,   115,   103,
      23,    24,    25,     7,    72,    13,    71,   130,   131,   132,
      49,    50,    51,    72,    95,    96,   218,   219,    26,    27,
     106,   109,   127,   153,   138,   128,   140,   143,   203,   150,
     151,   170,   201,   152,   171,    16,   172,   173,    72,   213,
     174,    28,   176,   180,    16,   216,   114,    13,    97,     8,
      66,   238,   187,    29,    23,    24,    25,   225,    30,   193,
      31,   107,   230,   188,    32,    33,   191,   198,   199,    68,
      69,   202,    26,    27,   205,   243,   144,    70,    66,   212,
     206,   207,   236,   246,   237,   211,   208,   249,   245,    72,
      66,   214,   215,    13,    71,    28,   220,    68,    69,    72,
     224,    13,   217,    68,    69,    70,   227,    29,   223,    68,
      69,    70,    30,   156,    31,   229,   232,    70,    32,    33,
     184,   145,    71,   235,   231,   240,   239,    13,    71,   241,
     242,   244,   247,    13,    71,   248,   250,   110,   111,   112,
     113,   114,   115,    59,   110,   111,   112,   113,   114,   115,
      78,   251,   252,    19,   204,    81,    82,   192,    58,    86,
      87,    88,    89,    90,    91,    92,    93,   110,   111,   112,
     113,   114,   115,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   195,     0,   139,     0,   197,
     194,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   110,   111,   112,   113,   114,
     115
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-139))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       8,    28,    22,     8,   106,   101,   101,    63,     8,    11,
      56,    53,    14,    40,    22,    29,    10,   155,     0,     4,
      66,     3,     9,    31,    70,    33,    19,    20,    21,    31,
      10,    18,     6,     5,    80,    29,    30,    11,    12,    53,
       9,    11,    22,    37,    14,    53,    54,    58,    56,    29,
      30,    11,    14,    53,    14,    63,    10,    37,    66,    53,
      54,    10,    70,   109,   110,   111,   112,   113,   114,   115,
     126,   209,    80,    53,    54,    53,   122,    10,   180,    31,
     176,   176,    53,    76,   222,   105,    15,    16,    17,    12,
       8,    26,    10,   101,    61,   151,   142,   105,    26,    27,
     127,   109,   110,   111,   112,   113,   114,   115,   210,    68,
      69,    29,    30,   215,   122,    55,    56,    57,   126,    37,
      10,   223,   149,    53,    36,   152,    38,    39,    40,    48,
       6,     7,     8,     9,   142,    53,    54,    55,    56,    57,
      19,    20,    21,   151,    53,    54,    73,    74,    24,    25,
      58,    10,    67,   173,    53,    72,    29,    11,   185,    28,
      10,    10,   182,    11,    10,   173,    10,    10,   176,   196,
      34,    47,    14,    58,   182,   202,    39,    53,     8,    18,
      10,   227,    48,    59,     6,     7,     8,   214,    64,    29,
      66,   237,   219,    53,    70,    71,    53,    11,    60,    29,
      30,     5,    24,    25,    14,   232,     8,    37,    10,    29,
      11,    11,     8,   240,    10,    13,    11,   244,     8,   227,
      10,    27,    58,    53,    54,    47,    29,    29,    30,   237,
      58,    53,    69,    29,    30,    37,    63,    59,    72,    29,
      30,    37,    64,    11,    66,    29,     5,    37,    70,    71,
      11,    53,    54,    29,    14,    74,    65,    53,    54,    75,
      29,     5,    11,    53,    54,    62,     8,    35,    36,    37,
      38,    39,    40,    25,    35,    36,    37,    38,    39,    40,
      32,    75,    62,    11,   187,    37,    38,   173,    24,    41,
      42,    43,    44,    45,    46,    47,    48,    35,    36,    37,
      38,    39,    40,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,   176,    -1,    84,    -1,   177,
      58,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    35,    36,    37,    38,    39,
      40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    78,     0,     3,    79,     8,    80,     9,    18,    81,
      83,    98,    99,    53,    82,    84,    86,     4,     5,    81,
      98,    58,    14,     6,     7,     8,    24,    25,    47,    59,
      64,    66,    70,    71,    86,    89,    90,    91,    93,    96,
      98,   100,   110,   111,   112,   117,   118,   119,   123,    19,
      20,    21,    76,    87,    88,    84,    10,   109,   109,    90,
      10,    53,    89,    10,    53,    95,    10,    22,    29,    30,
      37,    54,    86,   101,   106,   107,   114,   116,    90,    86,
      31,    90,    90,    61,    92,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    12,    82,    82,     8,   101,   108,
      53,    26,   122,    48,   116,    10,    58,   101,   101,    10,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,   113,    15,    16,    17,   115,    67,    72,     8,
      55,    56,    57,   101,   102,   103,   104,   105,    53,   102,
      29,    11,    14,    11,     8,    53,   107,   114,   120,   121,
      28,    10,    11,    84,    97,    87,    11,   101,   101,   101,
     101,   101,   101,   101,   101,   116,    89,    29,    53,    85,
      10,    10,    10,    10,    34,   101,    14,    89,   116,    89,
      58,    11,    14,    83,    11,    68,    69,    48,    53,     8,
      53,    53,    97,    29,    58,   121,    27,   122,    11,    60,
      87,    84,     5,    89,    85,    14,    11,    11,    11,    11,
      31,    13,    29,    89,    27,    58,    89,    69,    73,    74,
      29,    83,    87,    72,    58,    89,    87,    63,    94,    29,
      89,    14,     5,    83,    87,    29,     8,    10,   101,    65,
      74,    75,    29,    89,     5,     8,    89,    11,    62,    89,
       8,    75,    62
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
      

/* Line 1806 of yacc.c  */
#line 1679 "valida_portugol.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 2067 of yacc.c  */
#line 299 "valida_portugol.y"


extern int 	yylineno;
extern char 	*yytext;

int yyerror(char *s) {
	printf("Erro %s na Linha %d com o Token nao esperado %s\n", s, yylineno, yytext);
}

int main(int ac, char **av) {
	extern FILE *yyin;
	
	if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
		perror(av[1]);
		exit(1);		
	}

	if(!yyparse())
		printf("Tudo foi OK!!\n");
	else
		printf("Algoritmo com erro.\n");
}

