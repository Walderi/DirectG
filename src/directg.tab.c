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
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "src/directg.y"


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha/PilhaDim.c"
#include "hash/hashDirectG.c"

//Pegar variavel com $$ -- Ex.: $$=strdup(yytext); , strdup(licate) OR strcpy($$,$1);
#define YYSTYPE char*

extern int 	yylineno;
extern char 	*yytext;

yyerrork; //stack error correction


int erros=0;
char escopo[30];
char nome[30];
char  *variavel;
char *NomeVetor;
char nomefuncao[30];
char tipo[30];
char* a;
int posInicial;
int posFinal;
char param[30];
FILE *arquivo;
int id; // Idenficação na busca


VetFuncao hashFuncao;
VetVariavel hashVariavel;

void inserirvariavel(char *Nome,char * Tipo,char * escopo){
int existe;
	existe = hashvariavel_existe(Nome, Tipo, escopo , &hashVariavel);

	if (existe == 0) {
	hashvariavel_inserir(Nome, Tipo,escopo, &hashVariavel);
	} else {
	erros++;
	yyerror("Variavel Já Declarada!! ");
	}
}

void inserirfuncao(char* nome, char* tiporeturn){
int existe;

	existe = hashfuncao_existe(nome, tiporeturn, &hashFuncao);
	if(existe == 0){
	hashfuncao_inserir( nome, tiporeturn, &hashFuncao);
	}else{
	erros++;
        yyerror("Função já Declarada!! ");
	}


}

void existeVariavel( char *nome){
int existe;
        existe = hashvariavel_existenaHash(nome, &hashVariavel);
        if (existe == 1) {
       		fprintf(arquivo, " %s " , nome);
        } else {
       //	 erros++;
       	//	 yyerror("Essa variavel não existe ");
        }

}




/* Line 268 of yacc.c  */
#line 149 "directg.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     T_VAR = 260,
     T_INICIO = 261,
     T_COMENTARIO = 262,
     T_IDENTIFICADOR = 263,
     T_ATRIBUI = 264,
     T_SEPARADOR = 265,
     T_ABRE_PARENT = 266,
     T_FECHA_PARENT = 267,
     T_ABRECOLCHETE = 268,
     T_FECHACOLCHETE = 269,
     T_AND = 270,
     T_OR = 271,
     T_NOT = 272,
     T_XOR = 273,
     T_INTEIRO = 274,
     T_REAL = 275,
     T_CARACTERE = 276,
     T_LOGICO = 277,
     T_NUMINTEIRO = 278,
     T_NUMREAL = 279,
     T_STRING = 280,
     T_VETOR = 281,
     T_DECLARAVAR = 282,
     T_PONTOPONTO = 283,
     T_ESPACO = 284,
     T_LOGICO_VERDADEIRO = 285,
     T_LOGICO_FALSO = 286,
     T_VARIAVEL = 287,
     T_PROCEDIMENTO = 288,
     T_FIMPROCEDIMENTO = 289,
     T_FUNCAO = 290,
     T_FIMFUNCAO = 291,
     T_RETORNE = 292,
     T_INVALIDO = 293,
     T_QUEBRA = 294,
     T_REPITA = 295,
     T_ATE = 296,
     T_ESCOLHA = 297,
     T_CASO = 298,
     T_OUTROCASO = 299,
     T_FIMESCOLHA = 300,
     T_ENQUANTO = 301,
     T_FIMENQUANTO = 302,
     T_SE = 303,
     T_ENTAO = 304,
     T_SENAO = 305,
     T_FIMSE = 306,
     T_INTERROMPA = 307,
     T_PARA = 308,
     T_DE = 309,
     T_PASSO = 310,
     T_FACA = 311,
     T_FIMPARA = 312,
     T_SOMA = 313,
     T_DIVISAO = 314,
     T_SUBTRACAO = 315,
     T_MULT = 316,
     T_POTENCIA = 317,
     T_MOD = 318,
     T_PI = 319,
     T_DIFERENTE = 320,
     T_MENORQUE = 321,
     T_MENORIGUALQUE = 322,
     T_MAIORQUE = 323,
     T_MAIORIGUALQUE = 324,
     T_IGUAL = 325,
     T_DIVISAOINTEIRA = 326,
     T_RESTO = 327,
     T_ESCREVAL = 328,
     T_ESCREVA = 329,
     T_LEIA = 330,
     T_RAIZQ = 331,
     T_COPIA = 332,
     T_COMPR = 333,
     T_MAIUSC = 334
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 283 "directg.tab.c"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   1673

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  195
/* YYNRULES -- Number of rules.  */
#define YYNRULES  349
/* YYNRULES -- Number of states.  */
#define YYNSTATES  535

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

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
      75,    76,    77,    78,    79
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    10,    12,    14,    16,    19,
      21,    23,    24,    25,    31,    33,    35,    39,    41,    43,
      45,    48,    50,    51,    56,    57,    63,    66,    68,    70,
      71,    75,    78,    81,    83,    85,    86,    87,    88,    96,
      97,   104,   107,   109,   111,   113,   114,   115,   121,   123,
     125,   127,   129,   131,   133,   135,   137,   139,   141,   143,
     145,   147,   149,   151,   153,   155,   157,   159,   163,   167,
     169,   171,   173,   175,   177,   179,   181,   183,   185,   187,
     190,   192,   196,   201,   206,   208,   210,   212,   215,   218,
     219,   222,   223,   227,   229,   231,   234,   235,   239,   242,
     245,   247,   249,   251,   253,   255,   257,   259,   261,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   289,
     291,   293,   295,   297,   302,   309,   311,   313,   315,   316,
     326,   328,   330,   332,   334,   338,   345,   347,   349,   351,
     353,   355,   357,   359,   361,   363,   371,   382,   391,   403,
     416,   426,   428,   430,   432,   434,   436,   438,   440,   442,
     444,   445,   446,   452,   459,   461,   463,   465,   467,   472,
     473,   480,   482,   483,   489,   490,   492,   494,   496,   498,
     499,   500,   501,   508,   510,   512,   514,   516,   518,   520,
     522,   524,   526,   528,   529,   530,   531,   532,   533,   551,
     553,   555,   557,   561,   563,   565,   568,   569,   575,   577,
     579,   581,   585,   589,   591,   593,   594,   595,   601,   603,
     605,   607,   608,   614,   616,   617,   618,   629,   631,   634,
     637,   639,   641,   643,   645,   647,   649,   651,   653,   654,
     659,   661,   663,   665,   667,   669,   671,   673,   675,   677,
     679,   681,   683,   685,   687,   689,   691,   693,   697,   701,
     705,   709,   713,   717,   720,   724,   725,   726,   732,   734,
     736,   738,   740,   742,   744,   746,   748,   752,   757,   759,
     760,   765,   767,   771,   773,   777,   779,   783,   785,   786,
     787,   788,   796,   797,   798,   805,   807,   809,   810,   820,
     822,   824,   825,   826,   827,   835,   837,   838,   839,   846,
     847,   850,   852,   853,   855,   858,   864,   868,   876,   880,
     881,   882,   888,   890,   892,   895,   897,   900,   902,   903,
     904,   911,   913,   915,   917,   919,   921,   923,   925,   929,
     933,   937,   939,   941,   943,   945,   947,   949,   951,   953
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    -1,    81,    89,    83,    -1,    39,    -1,
     209,    -1,     1,    -1,    82,    -1,    82,    83,    -1,     3,
      -1,     1,    -1,    -1,    -1,    84,    86,    91,    87,    83,
      -1,     4,    -1,     1,    -1,    85,    93,    88,    -1,    25,
      -1,    90,    -1,     1,    -1,     6,    83,    -1,     1,    -1,
      -1,    97,    92,    94,   130,    -1,    -1,    97,   180,    92,
      95,   130,    -1,   208,    93,    -1,     5,    -1,     1,    -1,
      -1,    96,    83,    99,    -1,    96,    83,    -1,   208,    97,
      -1,    27,    -1,     1,    -1,    -1,    -1,    -1,   104,    98,
     114,   100,    83,   101,    99,    -1,    -1,   104,    98,   127,
     102,    83,    99,    -1,   208,    99,    -1,    10,    -1,     1,
      -1,   107,    -1,    -1,    -1,   107,   105,   103,   106,   104,
      -1,   108,    -1,     8,    -1,   128,    -1,     1,    -1,    19,
      -1,    20,    -1,    21,    -1,   109,    -1,   110,    -1,    22,
      -1,   109,    -1,   110,    -1,   111,    -1,   113,    -1,     1,
      -1,    13,    -1,     1,    -1,    14,    -1,     1,    -1,   115,
     118,   116,    -1,   119,   120,   121,    -1,   122,    -1,    28,
      -1,     1,    -1,   123,    -1,    23,    -1,     1,    -1,    23,
      -1,     1,    -1,    54,    -1,     1,    -1,   124,   114,    -1,
      26,    -1,   126,   117,   125,    -1,   108,   115,   107,   116,
      -1,   108,   115,   224,   116,    -1,    52,    -1,   131,    -1,
     208,    -1,   208,   130,    -1,   131,   130,    -1,    -1,    90,
      83,    -1,    -1,   214,   132,    83,    -1,   134,    -1,   155,
      -1,   129,    83,    -1,    -1,   231,   133,    83,    -1,   232,
      83,    -1,    83,   131,    -1,   149,    -1,   138,    -1,   154,
      -1,    56,    -1,     1,    -1,    46,    -1,    47,    -1,     1,
      -1,   136,   269,   135,    83,   130,   137,    83,    -1,    53,
      -1,    57,    -1,     1,    -1,    54,    -1,     1,    -1,   152,
      -1,   228,    -1,   224,    -1,   228,    -1,   224,    -1,   107,
      -1,   224,    -1,   228,    -1,    55,    -1,   141,   143,   142,
     144,    -1,   141,   143,   142,   144,   146,   145,    -1,     1,
      -1,    56,    -1,     1,    -1,    -1,   139,   107,   150,   147,
     148,    83,   130,   140,    83,    -1,    40,    -1,    41,    -1,
       1,    -1,   269,    -1,   163,   269,   164,    -1,   151,    83,
     130,   152,   153,    83,    -1,   160,    -1,   168,    -1,    48,
      -1,    51,    -1,     1,    -1,    49,    -1,     1,    -1,    50,
      -1,     1,    -1,   156,   269,   158,    83,   130,   157,    83,
      -1,   156,   269,   158,    83,   130,   159,    83,   130,   157,
      83,    -1,   156,   269,   158,    83,   130,   160,   157,    83,
      -1,   156,   269,   158,    83,   130,   159,    83,   130,   160,
     157,    83,    -1,   156,   269,   158,    83,   130,   160,   159,
      83,   130,   160,   157,    83,    -1,   156,   269,   158,    83,
     130,   159,   160,   157,    83,    -1,     1,    -1,    42,    -1,
      45,    -1,     1,    -1,    11,    -1,     1,    -1,    12,    -1,
       1,    -1,   107,    -1,    -1,    -1,   163,   166,   107,   167,
     164,    -1,   161,   165,    83,   173,   162,    83,    -1,    43,
      -1,     1,    -1,    44,    -1,     1,    -1,   169,   176,    83,
     130,    -1,    -1,   169,   176,    83,   130,   172,   171,    -1,
       1,    -1,    -1,   171,   170,   174,    83,   130,    -1,    -1,
     107,    -1,    90,    -1,   112,    -1,   175,    -1,    -1,    -1,
      -1,   175,   177,   178,   103,   179,   176,    -1,   185,    -1,
     205,    -1,   231,    -1,   232,    -1,   231,    -1,    35,    -1,
      36,    -1,     1,    -1,    27,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,   182,   186,   194,   184,   114,   187,    83,
     188,    97,    92,   130,   193,    83,   189,   183,   190,    83,
      -1,     1,    -1,    37,    -1,     1,    -1,   163,    90,   164,
      -1,    90,    -1,   228,    -1,   191,   192,    -1,    -1,   108,
     195,   163,   197,   164,    -1,     1,    -1,    27,    -1,     1,
      -1,   198,   196,   114,    -1,   197,   103,   197,    -1,     1,
      -1,   107,    -1,    -1,    -1,   107,   199,   103,   200,   198,
      -1,    33,    -1,    34,    -1,     1,    -1,    -1,   108,   204,
     163,   197,   164,    -1,     1,    -1,    -1,    -1,   201,   206,
     203,   207,    83,    97,    92,   130,   202,    83,    -1,   209,
      -1,   209,   208,    -1,     7,    83,    -1,     9,    -1,    31,
      -1,    30,    -1,    90,    -1,   228,    -1,   181,    -1,   211,
      -1,   212,    -1,    -1,   108,   215,   210,   213,    -1,    58,
      -1,    60,    -1,    61,    -1,    59,    -1,    71,    -1,    63,
      -1,    60,    -1,    62,    -1,    23,    -1,     1,    -1,    24,
      -1,    64,    -1,   224,    -1,   225,    -1,   226,    -1,   227,
      -1,   107,    -1,   228,   216,   228,    -1,   228,   217,   228,
      -1,   228,   218,   228,    -1,   228,   219,   228,    -1,   228,
     220,   228,    -1,   228,   221,   228,    -1,   222,   228,    -1,
     228,   223,   228,    -1,    -1,    -1,   163,   229,   228,   230,
     164,    -1,   181,    -1,   236,    -1,   244,    -1,   247,    -1,
     252,    -1,   261,    -1,   263,    -1,   265,    -1,   108,   163,
     164,    -1,   108,   163,   233,   164,    -1,   107,    -1,    -1,
     107,   234,   103,   233,    -1,   227,    -1,   227,   103,   233,
      -1,   232,    -1,   232,   103,   233,    -1,   231,    -1,   231,
     103,   233,    -1,    78,    -1,    -1,    -1,    -1,   235,   163,
     237,   107,   238,   239,   164,    -1,    -1,    -1,   235,   163,
     240,    90,   241,   164,    -1,    77,    -1,   143,    -1,    -1,
     242,   163,   107,   245,   103,   243,   103,   224,   164,    -1,
       1,    -1,    79,    -1,    -1,    -1,    -1,   246,   163,   248,
     107,   249,   250,   164,    -1,    76,    -1,    -1,    -1,   251,
     163,   253,   228,   254,   164,    -1,    -1,    27,   224,    -1,
       1,    -1,    -1,    90,    -1,   228,   255,    -1,   256,   103,
     228,    98,   224,    -1,   256,   103,   228,    -1,   256,   103,
     228,    98,   224,    98,   224,    -1,   256,   103,    90,    -1,
      -1,    -1,   163,   258,   256,   259,   164,    -1,     1,    -1,
      74,    -1,   260,   257,    -1,    73,    -1,   262,   257,    -1,
      75,    -1,    -1,    -1,   264,   163,   266,   107,   267,   164,
      -1,    70,    -1,    65,    -1,    66,    -1,    67,    -1,    68,
      -1,    69,    -1,     1,    -1,   228,   268,   228,    -1,   269,
     274,   269,    -1,   163,   269,   164,    -1,   107,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,   270,    -1,   271,
      -1,   272,    -1,   273,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   127,   127,   129,   132,   133,   134,   138,   139,   143,
     148,   152,   152,   152,   156,   157,   161,   165,   170,   171,
     175,   176,   180,   180,   181,   181,   182,   187,   188,   191,
     192,   193,   194,   199,   200,   203,   204,   209,   204,   210,
     210,   214,   218,   219,   223,   231,   237,   231,   245,   249,
     250,   251,   255,   259,   264,   269,   270,   275,   280,   281,
     282,   283,   284,   292,   293,   297,   298,   302,   306,   310,
     314,   315,   319,   323,   324,   328,   329,   333,   334,   338,
     342,   346,   350,   351,   358,   362,   363,   364,   365,   368,
     369,   370,   370,   371,   372,   373,   374,   374,   375,   376,
     383,   384,   385,   390,   391,   395,   399,   400,   404,   413,
     417,   418,   422,   423,   427,   431,   432,   437,   438,   443,
     444,   445,   450,   454,   455,   456,   460,   461,   465,   465,
     470,   474,   475,   479,   480,   485,   492,   493,   497,   501,
     502,   506,   507,   511,   512,   518,   519,   520,   521,   522,
     523,   524,   529,   533,   534,   538,   539,   543,   544,   547,
     548,   548,   548,   553,   558,   559,   563,   564,   568,   569,
     569,   570,   576,   576,   579,   580,   581,   582,   587,   588,
     588,   588,   588,   592,   593,   594,   598,   599,   603,   607,
     608,   612,   613,   617,   617,   623,   624,   624,   617,   625,
     629,   630,   634,   635,   636,   641,   645,   645,   646,   650,
     651,   655,   656,   657,   661,   668,   674,   668,   678,   682,
     683,   687,   687,   688,   692,   692,   692,   700,   701,   705,
     709,   713,   718,   723,   724,   725,   726,   727,   732,   732,
     737,   742,   747,   751,   756,   761,   765,   769,   774,   775,
     779,   783,   787,   788,   789,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   803,   803,   804,   808,
     809,   810,   811,   812,   813,   814,   818,   819,   824,   825,
     825,   826,   827,   828,   829,   830,   831,   836,   840,   840,
     840,   840,   841,   841,   841,   846,   850,   854,   854,   855,
     859,   863,   863,   863,   863,   868,   872,   872,   872,   876,
     877,   878,   881,   882,   883,   884,   885,   886,   887,   892,
     892,   892,   893,   897,   901,   905,   910,   915,   919,   919,
     919,   924,   925,   926,   927,   928,   929,   930,   934,   935,
     936,   937,   942,   946,   950,   954,   958,   959,   960,   961
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ALGORITMO", "T_FIMALGORITMO", "T_VAR",
  "T_INICIO", "T_COMENTARIO", "T_IDENTIFICADOR", "T_ATRIBUI",
  "T_SEPARADOR", "T_ABRE_PARENT", "T_FECHA_PARENT", "T_ABRECOLCHETE",
  "T_FECHACOLCHETE", "T_AND", "T_OR", "T_NOT", "T_XOR", "T_INTEIRO",
  "T_REAL", "T_CARACTERE", "T_LOGICO", "T_NUMINTEIRO", "T_NUMREAL",
  "T_STRING", "T_VETOR", "T_DECLARAVAR", "T_PONTOPONTO", "T_ESPACO",
  "T_LOGICO_VERDADEIRO", "T_LOGICO_FALSO", "T_VARIAVEL", "T_PROCEDIMENTO",
  "T_FIMPROCEDIMENTO", "T_FUNCAO", "T_FIMFUNCAO", "T_RETORNE",
  "T_INVALIDO", "T_QUEBRA", "T_REPITA", "T_ATE", "T_ESCOLHA", "T_CASO",
  "T_OUTROCASO", "T_FIMESCOLHA", "T_ENQUANTO", "T_FIMENQUANTO", "T_SE",
  "T_ENTAO", "T_SENAO", "T_FIMSE", "T_INTERROMPA", "T_PARA", "T_DE",
  "T_PASSO", "T_FACA", "T_FIMPARA", "T_SOMA", "T_DIVISAO", "T_SUBTRACAO",
  "T_MULT", "T_POTENCIA", "T_MOD", "T_PI", "T_DIFERENTE", "T_MENORQUE",
  "T_MENORIGUALQUE", "T_MAIORQUE", "T_MAIORIGUALQUE", "T_IGUAL",
  "T_DIVISAOINTEIRA", "T_RESTO", "T_ESCREVAL", "T_ESCREVA", "T_LEIA",
  "T_RAIZQ", "T_COPIA", "T_COMPR", "T_MAIUSC", "$accept", "Input",
  "QuebraComando", "QuebrasComando", "InicioAlgoritmo",
  "CabecalhoAlgoritmo", "$@1", "$@2", "FimAlgoritmo", "BlocoAlgoritmo",
  "String", "NomeAlgoritmo", "InicioLogica", "BlocoCodigo", "$@3", "$@4",
  "InicioBlocoDeclaracao", "BlocoDeclaracao", "DefineTipo",
  "BlocoVariaveis", "$@5", "$@6", "$@7", "Separador", "Variaveis", "$@8",
  "$@9", "Variavel", "Identificador", "TipoInteiro", "TipoReal",
  "TipoCaractere", "TipoNumerico", "TipoLogico", "Tipos", "AbreColchete",
  "FechaColchete", "ExprColcheteVetor", "ExprInternaColcheteVetor",
  "PosInicialVetor", "EntrePosVetor", "PosFinalVetor",
  "NumeroInteiroInicialVetor", "NumeroInteiroFinalVetor",
  "DefineTipoVetor", "TipoDoTipoVetor", "NomeVetor", "TipoVetor",
  "VariavelVetor", "Interromper", "BlocosLogicos", "BlocoLogico", "$@10",
  "$@11", "Lacos", "FacaEnquanto", "InicioEnquanto", "FimEnquanto",
  "BlocoEnquanto", "InicioPara", "FimPara", "AlcancePara", "AtePara",
  "InicioAlcancePara", "FimAlcancePara", "AlcancePasso", "PassoPara",
  "ExprCondicaoPara", "FacaPara", "BlocoPara", "$@12", "InicioRepita",
  "RepitaAte", "ExprRepitaAte", "BlocoRepita", "Desvios", "InicioSe",
  "FimSe", "DesvioEntao", "DesvioSenao", "BlocosSe", "InicioEscolha",
  "FimEscolha", "AbreParenteses", "FechaParenteses", "ExprEscolha", "$@13",
  "$@14", "BlocosEscolha", "AbreCaso", "OutroCaso", "BlocosCaso", "$@15",
  "BlocoCasos", "$@16", "Selecao", "SelecaoCasos", "$@17", "$@18", "$@19",
  "Funcoes", "FuncaoRetornavel", "IniciaFuncao", "FimFuncao",
  "DefinidorFuncao", "Funcao", "$@20", "$@21", "$@22", "$@23", "$@24",
  "PalavraRetorno", "ExprRetorno", "Retorno", "NomeFuncao", "$@25",
  "DefineVarAssinatura", "Assinatura", "Variaveisfuncao", "$@26", "$@27",
  "InicioProcedimento", "FimProcedimento", "NomeProcedimento", "$@28",
  "BlocoProcedimento", "$@29", "$@30", "Comentarios", "Comentario",
  "Atribuidor", "LogicoFalso", "LogicoVerdadeiro", "Atribuido",
  "Atribuicao", "@31", "ExprSoma", "ExprSub", "ExprMult", "ExprDiv",
  "ExprDivInt", "ExprMod", "Negativo", "ExprPot", "NumeroInteiro",
  "NumeroReal", "Pi", "Numero", "ArtmExpr", "$@32", "$@33", "FuncaoNativa",
  "FuncaoNaoNativa", "AssinaturaExistente", "$@34", "InicioComprimento",
  "Comprimento", "$@35", "$@36", "$@37", "$@38", "$@39", "InicioCopia",
  "SegundoTermoCopia", "Copia", "$@40", "InicioMaiusc", "Maiusc", "$@41",
  "$@42", "$@43", "InicioRaiz", "Raiz", "$@44", "$@45", "CasasDecimais",
  "ExprEscreva", "ParametrosEscreva", "$@46", "$@47", "InicioEscreva",
  "Escreva", "InicioEscreval", "Escreval", "InicioLeia", "Leia", "$@48",
  "$@49", "CondicoesLogicas", "ExpressaoLogica", "LogicoAnd", "LogicoOr",
  "LogicoNot", "LogicoXor", "OperadoresLogicos", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    82,    83,    83,    84,
      84,    86,    87,    85,    88,    88,    89,    90,    91,    91,
      92,    92,    94,    93,    95,    93,    93,    96,    96,    97,
      97,    97,    97,    98,    98,    99,   100,   101,    99,   102,
      99,    99,   103,   103,   104,   105,   106,   104,   107,   108,
     108,   108,   109,   110,   111,   112,   112,   113,   114,   114,
     114,   114,   114,   115,   115,   116,   116,   117,   118,   119,
     120,   120,   121,   122,   122,   123,   123,   124,   124,   125,
     126,   127,   128,   128,   129,   130,   130,   130,   130,   131,
     131,   132,   131,   131,   131,   131,   133,   131,   131,   131,
     134,   134,   134,   135,   135,   136,   137,   137,   138,   139,
     140,   140,   141,   141,   142,   143,   143,   144,   144,   145,
     145,   145,   146,   147,   147,   147,   148,   148,   150,   149,
     151,   152,   152,   153,   153,   154,   155,   155,   156,   157,
     157,   158,   158,   159,   159,   160,   160,   160,   160,   160,
     160,   160,   161,   162,   162,   163,   163,   164,   164,   165,
     166,   167,   165,   168,   169,   169,   170,   170,   171,   172,
     171,   171,   174,   173,   175,   175,   175,   175,   176,   177,
     178,   179,   176,   180,   180,   180,   181,   181,   182,   183,
     183,   184,   184,   186,   187,   188,   189,   190,   185,   185,
     191,   191,   192,   192,   192,   193,   195,   194,   194,   196,
     196,   197,   197,   197,   198,   199,   200,   198,   201,   202,
     202,   204,   203,   203,   206,   207,   205,   208,   208,   209,
     210,   211,   212,   213,   213,   213,   213,   213,   215,   214,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   224,
     225,   226,   227,   227,   227,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   229,   230,   228,   228,   231,
     231,   231,   231,   231,   231,   231,   232,   232,   233,   234,
     233,   233,   233,   233,   233,   233,   233,   235,   237,   238,
     239,   236,   240,   241,   236,   242,   243,   245,   244,   244,
     246,   248,   249,   250,   247,   251,   253,   254,   252,   255,
     255,   255,   256,   256,   256,   256,   256,   256,   256,   258,
     259,   257,   257,   260,   261,   262,   263,   264,   266,   267,
     265,   268,   268,   268,   268,   268,   268,   268,   269,   269,
     269,   269,   270,   271,   272,   273,   274,   274,   274,   274
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     1,     1,     1,     1,     2,     1,
       1,     0,     0,     5,     1,     1,     3,     1,     1,     1,
       2,     1,     0,     4,     0,     5,     2,     1,     1,     0,
       3,     2,     2,     1,     1,     0,     0,     0,     7,     0,
       6,     2,     1,     1,     1,     0,     0,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     4,     4,     1,     1,     1,     2,     2,     0,
       2,     0,     3,     1,     1,     2,     0,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     6,     1,     1,     1,     0,     9,
       1,     1,     1,     1,     3,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,    10,     8,    11,    12,
       9,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     5,     6,     1,     1,     1,     1,     4,     0,
       6,     1,     0,     5,     0,     1,     1,     1,     1,     0,
       0,     0,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     0,     0,     0,    17,     1,
       1,     1,     3,     1,     1,     2,     0,     5,     1,     1,
       1,     3,     3,     1,     1,     0,     0,     5,     1,     1,
       1,     0,     5,     1,     0,     0,    10,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     3,     0,     0,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     1,     0,
       4,     1,     3,     1,     3,     1,     3,     1,     0,     0,
       0,     7,     0,     0,     6,     1,     1,     0,     9,     1,
       1,     0,     0,     0,     7,     1,     0,     0,     6,     0,
       2,     1,     0,     1,     2,     5,     3,     7,     3,     0,
       0,     5,     1,     1,     2,     1,     2,     1,     0,     0,
       6,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    10,     9,    11,     0,     0,     0,    28,
      27,     0,     0,     0,     0,     0,   227,     6,     4,     0,
       3,     5,    19,    17,    18,    12,   229,    15,    14,    16,
       0,    21,     0,   218,   188,   325,   323,   327,   305,   295,
     287,   300,    22,     0,   193,   183,   224,   184,   185,     0,
     269,     0,   270,     0,   271,     0,   272,     0,   273,     0,
     274,     0,   275,    26,     0,   228,     8,     0,    51,    49,
      30,     0,    44,     0,    50,     0,    20,     0,    21,    24,
       0,     0,   156,   155,   288,     0,   301,   306,   322,   319,
     324,   326,   328,    13,    34,    33,     0,     0,    64,    63,
       0,    41,     6,   130,   152,   105,   138,    84,   109,     0,
       0,     0,     0,    23,     0,    93,     0,   101,     0,   100,
       0,   102,    94,     0,   136,     0,   137,     0,     5,    91,
      96,     0,     0,    51,     0,     0,    51,     0,   225,     0,
       0,   297,     0,     0,     0,     0,    62,    52,    53,    54,
      57,    80,    58,    59,    60,    61,    36,     0,    39,    43,
      42,    46,    51,   248,     0,     0,    99,    90,   156,     0,
       0,    95,    88,    51,   250,   246,   251,   256,     0,     0,
     268,     0,   252,   253,   254,   255,     0,   187,   186,     0,
     128,     0,     0,    51,   159,   160,     0,    87,     0,     0,
      98,    25,     0,   192,   191,     0,     0,     0,   289,   293,
       0,   302,   256,   265,   307,   313,     0,     0,   329,     0,
       0,     0,     0,     0,    66,    65,    82,    83,   158,   157,
     278,   276,     0,     0,     0,     0,   230,     0,     0,     0,
     263,   337,   240,   243,   241,   242,   247,   245,   332,   333,
     334,   335,   336,   331,   244,     0,     0,     0,     0,     0,
       0,     0,     0,   104,   342,   343,   344,   345,   103,     0,
     346,   347,   348,   349,     0,     0,     0,   142,   141,     0,
       0,     0,    92,    97,     0,   194,     0,     0,   290,     0,
       0,   303,     0,   311,     0,   314,     0,     0,     0,    37,
      74,    73,     0,     0,    69,    78,    77,     0,    81,     0,
      47,     0,     0,     0,     0,   158,   277,   232,   231,   233,
     268,   236,   237,   239,   234,   266,   340,   257,   258,   259,
     260,   261,   262,   264,   338,     0,   339,   113,   112,     0,
       0,   132,   131,     0,     0,   161,   165,   164,     0,     0,
       0,    51,   214,     0,     0,     0,     0,     0,     0,     0,
     294,   296,   252,   115,     0,     0,   308,   249,   310,   318,
       0,   321,   330,     0,    67,    71,    70,     0,    79,    40,
       0,    51,   282,   286,   284,     0,     0,     0,   127,   126,
       0,     0,     0,   133,     0,     0,   176,   175,    55,    56,
     177,   178,     0,   167,   166,   172,   154,   153,     0,     0,
     158,     0,   207,   210,   209,     0,   195,   222,     0,    32,
     291,     0,   304,     0,    38,    76,    75,    68,    72,   280,
     267,   107,   106,     0,     0,   114,     0,   135,     0,   140,
     143,   139,     0,     0,     0,   162,   180,     0,     0,   163,
     216,     0,   211,     0,     0,     0,     0,   108,   123,   252,
     117,     0,   340,   145,     6,     0,     0,   140,     0,     0,
       0,   168,     0,     0,     0,   220,   219,     0,   298,     0,
     122,     0,   111,   110,     0,     0,   140,     0,   147,     0,
     181,     0,   173,   217,     0,   226,   317,   256,   124,   252,
     121,   129,   140,     0,     0,   150,     0,     0,   170,     0,
     146,     0,   151,     0,   182,   201,   200,     0,     0,   148,
       0,   203,   265,   205,   204,   196,   149,     0,     0,   202,
     190,   189,   197,     0,   198
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    19,   109,     5,     6,     8,    67,    29,     7,
     110,    25,    42,    12,    77,   132,    13,    14,    96,    70,
     219,   373,   222,   411,    71,    97,   223,   212,   178,   152,
     153,   154,   400,   155,   156,   100,   226,   221,   302,   303,
     377,   427,   304,   428,   307,   308,   157,   158,    74,   112,
     113,   114,   198,   199,   115,   269,   116,   433,   117,   118,
     484,   339,   434,   361,   458,   498,   481,   340,   390,   119,
     275,   120,   343,   391,   121,   122,   123,   442,   279,   443,
     124,   125,   408,   213,   231,   196,   280,   395,   126,   348,
     405,   349,   491,   350,   448,   401,   402,   446,   470,   507,
      43,   180,    44,   532,   205,    45,    80,   355,   453,   528,
     533,   517,   523,   518,   135,   202,   415,   353,   354,   409,
     473,    46,   477,   138,   206,    47,    81,   207,   127,    21,
     237,   321,   322,   323,   129,   170,   255,   256,   257,   258,
     259,   260,   181,   261,   182,   183,   184,   185,   186,   238,
     385,   187,   188,   235,   311,    49,    50,   139,   288,   359,
     140,   289,    51,   364,    52,   210,    53,    54,   142,   291,
     365,    55,    56,   143,   292,   295,   217,    90,   144,   297,
      57,    58,    59,    60,    61,    62,   145,   298,   262,   189,
     270,   271,   272,   273,   274
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -410
static const yytype_int16 yypact[] =
{
    -410,   457,  -410,  -410,  -410,  -410,  1472,   159,   149,  -410,
    -410,   159,   133,   159,   372,  1472,    59,  -410,  -410,   799,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    1490,    76,   159,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,   322,  -410,  -410,  -410,  -410,  -410,   209,
    -410,   209,  -410,   209,  -410,   209,  -410,   218,  -410,   218,
    -410,   209,  -410,  -410,   372,  -410,  -410,   159,  -410,  -410,
    -410,   187,    57,   240,  -410,  1505,  -410,  1099,  -410,  -410,
     236,   301,  -410,  -410,   100,   321,  -410,  -410,   680,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,   613,   273,  -410,  -410,
     205,  -410,   414,  -410,  -410,  -410,  -410,  -410,  -410,   879,
     159,   326,   159,  -410,   934,  -410,   653,  -410,   321,  -410,
     159,  -410,  -410,   653,  -410,   341,  -410,   989,    59,  -410,
    -410,   159,  1099,   125,   402,   189,   155,   443,  -410,   321,
     171,  -410,   321,   653,   887,   321,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,    58,  -410,  -410,
    -410,  -410,  -410,  -410,    60,    60,  -410,  -410,   281,   222,
     202,  -410,  -410,   925,  -410,  -410,  -410,   851,  1584,   653,
    -410,   653,  -410,  -410,  -410,  -410,   486,  -410,  -410,   260,
    -410,  1141,   316,   219,  -410,  -410,   159,  -410,   159,   159,
    -410,  -410,   209,  -410,  -410,   292,   209,   159,  -410,  -410,
     273,  -410,  -410,  -410,   520,  -410,   589,   135,  -410,   159,
     216,    47,   159,   321,  -410,  -410,  -410,  -410,   358,  -410,
     230,  -410,   280,   386,   420,    63,  -410,  1458,   653,   558,
     520,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,   653,   653,   653,   653,   653,
     653,   653,   653,  -410,  -410,  -410,  -410,  -410,  -410,   159,
    -410,  -410,  -410,  -410,   653,    48,   126,  -410,  -410,   159,
     321,    80,  -410,  -410,   345,  -410,   345,   502,  -410,    63,
     653,  -410,    63,  -410,   225,  -410,  1479,    63,    63,  -410,
    -410,  -410,    60,   145,  -410,  -410,  -410,   292,  -410,  1505,
    -410,   273,   108,   108,   108,  -410,  -410,  -410,  -410,  -410,
     164,  -410,  -410,  -410,   520,   520,  -410,   520,   520,   520,
     520,   520,   520,   520,   520,  1160,   515,   204,  -410,   653,
      28,  -410,  -410,   653,   741,  -410,   214,  -410,   392,    68,
      44,   272,   278,   454,   194,   159,   454,   322,   502,    63,
    -410,  -410,    53,   520,   273,    63,  -410,  -410,  -410,  -410,
    1602,  -410,  -410,  1505,  -410,  -410,  -410,   264,  -410,  -410,
     108,  -410,  -410,  -410,  -410,    63,    61,   126,  -410,  -410,
     159,   159,   653,   515,    71,    63,  -410,  -410,  -410,  -410,
    -410,   296,   159,  -410,  -410,  -410,  -410,  -410,   159,   273,
     389,   345,  -410,  -410,  -410,   292,  -410,  -410,  1220,  -410,
    -410,   225,  -410,   225,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,   159,   653,  -410,  1262,  -410,   558,   477,
    -410,  -410,   159,   154,    67,  -410,  -410,  1044,   159,  -410,
    -410,   474,  -410,   502,    52,    63,   258,  -410,   269,    43,
     520,    23,   169,  -410,  -410,  1278,    49,  -410,   159,   159,
     273,   293,  1320,   321,   322,  -410,  -410,   159,  -410,   225,
    -410,   653,  -410,  -410,   159,    78,  -410,   159,  -410,  1379,
    -410,    80,  -410,  -410,  1363,  -410,  -410,    32,  -410,    41,
     520,  -410,   289,   159,    49,  -410,    29,   392,  -410,    55,
    -410,   159,  -410,    49,  -410,  -410,  -410,  1479,   159,  -410,
     159,  -410,   171,  -410,   520,  -410,  -410,    63,    54,  -410,
    -410,  -410,  -410,   159,  -410
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -410,  -410,  -410,    -7,  -410,  -410,  -410,  -410,  -410,  -410,
      -5,  -410,   -36,   342,  -410,  -410,  -410,   -14,  -342,   -66,
    -410,  -410,  -410,   -54,   122,  -410,  -410,   398,   124,  -338,
    -330,  -410,  -410,  -410,  -197,   215,  -160,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
     -80,   252,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,    27,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,   -10,  -410,  -410,  -410,  -410,  -409,  -410,   -64,
    -378,  -410,  -410,   -38,   330,  -410,  -410,  -410,  -410,  -410,
    -410,  -109,  -410,  -410,  -410,  -410,  -119,  -410,  -410,  -410,
    -410,   182,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -260,   -82,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,    21,    16,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,   -59,  -410,  -410,  -155,   348,  -410,
    -410,     6,   249,  -274,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,   347,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -121,
    -410,  -410,  -410,  -410,  -410
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -342
static const yytype_int16 yytable[] =
{
      20,    64,   192,    24,    26,   227,    30,    79,   285,   101,
     398,    84,    66,    85,   232,    86,   444,    87,   399,    89,
      48,    89,    16,    92,   482,    76,   356,    15,   423,   388,
     512,    16,    16,  -119,   172,   468,    15,    65,   382,   383,
     384,   165,  -120,   161,  -118,   406,    16,   197,   305,   337,
     486,    75,   201,   475,  -116,   530,   515,   487,   239,    98,
      93,   224,   431,  -116,   315,   466,    11,   -45,   467,   403,
      48,    99,   439,   169,   225,   229,   503,   106,   179,   502,
     483,   346,  -199,   130,   389,   179,   476,   195,  -119,   407,
     531,    16,   516,   128,  -116,   511,    75,  -120,  -118,  -118,
     441,   306,   338,   167,   520,   171,   429,   504,   432,   381,
     378,   276,   404,   191,   479,   130,    69,   440,   441,   106,
     130,   440,   441,   347,   200,  -292,   106,   341,   513,   441,
     128,   163,   174,   130,    27,   209,   159,    28,   130,   215,
     169,   179,   374,   128,    16,   160,   375,  -320,   128,    65,
      22,   451,  -208,   336,    73,   464,   290,   232,   232,   232,
      17,    11,  -223,   296,   284,  -235,    11,   342,   286,   398,
    -134,  -235,   176,   376,    23,   233,  -134,   399,   312,   313,
     314,    35,    36,    37,    38,    39,    40,    41,    94,   281,
     203,   282,   283,    18,  -223,   413,    23,   130,    18,    73,
     287,   111,   106,  -235,   134,   137,   162,   128,  -134,    73,
      82,   236,   299,    69,    95,   309,   204,   300,   452,    88,
      83,   414,   393,   228,    73,   232,   367,  -156,   163,    83,
      69,   362,   319,   111,   229,   368,   179,   133,   111,   301,
    -279,    98,    73,   379,    69,   163,   174,   -48,   163,    73,
     -48,   111,   -48,    99,   -48,   386,   111,   380,  -171,    94,
    -125,   263,   335,    73,   394,   425,    73,   -48,  -315,    73,
    -315,   438,   344,   357,   159,   264,   265,   266,   267,   -48,
     362,   159,   -64,   160,  -213,    95,   176,   426,  -215,   -64,
     160,   369,  -281,   146,   -48,    35,    36,    37,    38,    39,
      40,    41,   136,    16,   -64,   392,  -179,   424,   358,    69,
     421,   147,   148,   149,   150,   111,   268,   277,   233,   233,
     233,   418,    68,    78,   480,    16,   131,   168,    32,    69,
      75,   264,   265,   266,   267,  -238,  -169,    83,   454,    99,
    -151,   130,   193,   396,   419,   310,   351,    73,   416,    69,
     130,   128,    83,    69,   179,   450,   461,    63,   131,   -51,
     128,   166,   455,   131,   456,   278,   387,   471,   -51,   -51,
     -51,   -51,   220,    31,    16,   459,   131,   435,    32,   358,
     469,   131,   508,   436,   437,   485,   233,   159,   514,    16,
     -43,   493,   492,    68,    75,   447,   160,   -43,  -285,  -174,
      69,   449,  -174,    98,    73,    33,    91,    34,    73,   506,
      73,   147,   148,  -206,   509,    99,   490,    23,   234,   320,
     496,   159,   499,   -51,   130,   -51,   457,   -51,    72,     0,
     160,  -174,  -283,    73,   128,   463,   465,     0,   494,   474,
     131,   472,   130,     0,    98,    35,    36,    37,    38,    39,
      40,    41,   128,   130,  -221,   410,    99,     2,     3,   111,
       4,   488,   489,   128,   160,     0,   229,     0,   111,    16,
     495,   130,    73,    72,   358,   159,     0,   501,   130,   522,
     505,   128,     0,   141,   160,     0,  -212,   241,   128,     0,
       0,   214,   216,     0,     0,   130,   510,    73,   164,     0,
     130,     0,   396,     9,   519,   128,     0,    10,   -29,    11,
     128,   525,   521,   526,   177,     0,   190,   527,     0,     0,
       0,   177,     0,   194,     0,  -144,   534,  -151,  -151,   240,
     264,   265,   266,   267,     0,    73,     0,   208,     0,     0,
     211,     0,   111,   218,   242,   243,   244,   245,   246,   247,
       0,   248,   249,   250,   251,   252,   253,   254,     0,   315,
     111,   234,   234,   234,     0,   316,     0,   230,     0,   326,
     229,   111,     0,   264,   265,   266,   267,   177,   242,   243,
     244,   245,   246,   247,   131,   324,   325,     0,     0,   111,
     293,   254,     0,   131,     0,     0,   111,    73,     0,  -309,
       0,  -309,     0,   327,   328,   329,   330,   331,   332,   333,
     334,     0,     0,   111,   146,     0,   294,     0,   111,   360,
       0,    72,   366,     0,     0,     0,     0,   371,   372,   234,
       0,    73,   147,   148,   149,   150,     0,     0,   363,   151,
       0,     0,     0,     0,   370,     0,     0,   242,   243,   244,
     245,   246,   247,     0,   173,     0,     0,     0,     0,     0,
     254,    69,     0,     0,    83,     0,     0,   131,     0,     0,
       0,     0,   177,     0,     0,     0,   163,   174,   345,     0,
       0,  -156,   352,   412,   352,   131,   417,   363,  -156,   420,
    -156,  -156,  -156,     0,     0,   422,   131,     0,     0,     0,
       0,     0,     0,  -156,  -156,  -156,     0,    72,     0,     0,
     230,   230,   230,   175,   131,   430,     0,   176,     0,     0,
       0,   131,     0,     0,     0,   445,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     0,     0,     0,   131,     0,
    -156,   177,   102,   131,  -156,     0,   397,     0,    11,    69,
       0,     0,     0,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
       0,     0,     0,     0,     0,     0,    23,     0,   462,     0,
       0,    72,     0,     0,     0,     0,     0,     0,   230,     0,
      18,   103,   460,   104,     0,   478,     0,   105,     0,   106,
     177,   -89,   -89,   107,   108,     0,     0,     0,     0,    -7,
      17,     0,    -7,    -7,    -7,    -7,    11,    -7,     0,   352,
       0,     0,     0,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,    -7,     0,     0,     0,     0,   500,
       0,     0,    -7,    -7,    -7,    -7,    -7,     0,    18,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,     0,     0,     0,    -7,   529,  -341,     0,
       0,     0,     0,  -341,     0,   524,  -341,  -341,  -341,  -341,
       0,   352,    -7,    -7,    -7,    -7,    -7,    -7,    -7,   497,
     102,     0,     0,   -89,     0,     0,    11,    69,   173,     0,
    -341,     0,     0,     0,     0,    69,     0,  -312,    83,  -312,
    -341,     0,     0,     0,    23,   397,     0,  -341,     0,     0,
     163,   174,    23,   -89,     0,     0,   -89,     0,    18,   103,
     -89,   104,   -89,   -89,   -89,   105,   -89,   106,     0,   -89,
     -89,   107,   108,  -156,     0,   102,   -89,     0,   -85,     0,
       0,    11,    69,     0,     0,     0,     0,   175,  -156,  -156,
    -156,   176,    35,    36,    37,    38,    39,    40,    41,    23,
      35,    36,    37,    38,    39,    40,    41,     0,   -85,     0,
       0,   -85,     0,    18,   103,   -85,   104,   -85,   -85,   -85,
     105,   -85,   106,     0,   -85,   -85,   107,   108,     0,  -156,
     102,   -85,     0,   -86,     0,     0,    11,    69,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,     0,     0,    35,    36,    37,
      38,    39,    40,    41,    23,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,     0,     0,   -86,     0,    18,   103,
     -86,   104,   -86,   -86,   -86,   105,   -86,   106,     0,   -86,
     -86,   107,   108,     0,     0,   102,   -86,     0,     0,     0,
       0,    11,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,    38,    39,    40,    41,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,   103,     0,   104,   -89,   -89,     0,
     105,     0,   106,     0,     0,     0,   107,   108,     0,     0,
     102,     0,     0,   -89,     0,     0,    11,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,   103,
       0,   104,   102,     0,     0,   105,     0,   106,    11,    69,
       0,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,    23,    11,    69,     0,
       0,     0,    35,    36,    37,    38,    39,    40,    41,     0,
      18,   103,   -89,   104,     0,    23,     0,   105,     0,   106,
       0,     0,     0,   107,   108,     0,     0,     0,     0,    18,
     103,     0,   104,     0,     0,     0,   105,   -89,   106,     0,
       0,     0,   107,   108,    35,    36,    37,    38,    39,    40,
      41,   102,     0,     0,     0,     0,     0,    11,    69,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,   -89,     0,     0,     0,     0,    18,
     103,     0,   104,   102,     0,     0,   105,     0,   106,    11,
      69,     0,   107,   108,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,     0,    11,    69,    23,     0,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
       0,    18,   103,    23,   104,     0,     0,     0,   105,     0,
     106,     0,     0,     0,   107,   108,     0,    18,   103,   -89,
     104,   102,     0,     0,   105,     0,   106,    11,    69,   -89,
     107,   108,     0,     0,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,    23,     0,     0,     0,     0,
       0,    35,    36,    37,    38,    39,    40,    41,     0,    18,
     103,     0,   104,     0,   102,   -89,   105,     0,   106,     0,
      11,    69,   107,   108,     0,     0,     0,     0,     0,     0,
     102,     0,     0,     0,     0,     0,    11,    69,    23,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
     -89,     0,    18,   103,    23,   104,     0,     0,     0,   105,
       0,   106,     0,     0,     0,   107,   108,     0,    18,   103,
       0,   104,     0,     0,     0,   105,     0,   106,     0,     0,
       0,   107,   108,     0,     0,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,    38,    39,    40,    41,   173,
       0,     0,     0,     0,     0,     0,    69,     0,     0,    83,
       0,     0,     0,     9,     0,     0,     0,    10,   -29,    11,
     173,   163,   174,    23,     0,     0,     0,    69,   317,   318,
      83,    68,     0,     0,     0,     0,   -31,    11,    69,     0,
       0,     0,   163,   174,    23,   -29,    68,   -29,     0,     0,
       0,   -35,    11,    69,     0,     0,     0,     0,   175,     0,
       0,     0,   176,   -31,     0,   -31,     0,     0,     0,     0,
       0,    35,    36,    37,    38,    39,    40,    41,   -35,   175,
     -35,     0,     0,   176,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,     0,     0,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   168,     0,     0,     0,     0,
       0,   -48,     0,     0,   -48,    83,   -48,    99,     0,   -48,
     -48,   -48,   -48,    94,     0,     0,     0,     0,     0,     0,
       0,   -48,  -316,     0,  -316,     0,     0,     0,     0,     0,
       0,     0,     0,   -48,     0,   -48,     0,     0,     0,    95,
       0,     0,     0,   -48,     0,     0,     0,     0,     0,   -48,
     -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,
     242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
       0,     0,     0,   254
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-410))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,    15,   123,     8,    11,   165,    13,    43,   205,    75,
     348,    49,    19,    51,   169,    53,   394,    55,   348,    57,
      14,    59,     6,    61,     1,    32,   286,     6,   370,     1,
       1,    15,    16,     1,   114,   444,    15,    16,   312,   313,
     314,   100,     1,    97,     1,     1,    30,   127,     1,     1,
       1,    30,   132,     1,     1,     1,     1,   466,   179,     1,
      67,     1,     1,    10,     1,   443,     7,    10,     1,     1,
      64,    13,     1,   111,    14,    12,   485,    48,   116,     1,
      57,     1,     6,    77,    56,   123,    34,   125,    56,    45,
      36,    75,    37,    77,    41,   504,    75,    56,    55,    56,
      51,    54,    54,   110,   513,   112,   380,   485,    47,     1,
     307,   191,    44,   120,   456,   109,     8,    50,    51,    48,
     114,    50,    51,    43,   131,    25,    48,     1,   506,    51,
     114,    23,    24,   127,     1,   140,     1,     4,   132,   144,
     178,   179,   302,   127,   128,    10,     1,    12,   132,   128,
       1,   411,    27,   274,    30,     1,   210,   312,   313,   314,
       1,     7,     7,   217,   202,     1,     7,    41,   206,   507,
       1,     7,    64,    28,    25,   169,     7,   507,   232,   233,
     234,    73,    74,    75,    76,    77,    78,    79,     1,   196,
       1,   198,   199,    39,    39,     1,    25,   191,    39,    75,
     207,    77,    48,    39,    80,    81,     1,   191,    39,    85,
       1,     9,   219,     8,    27,   222,    27,     1,   415,     1,
      11,    27,   343,     1,   100,   380,     1,     8,    23,    11,
       8,   290,   237,   109,    12,   294,   274,     1,   114,    23,
      10,     1,   118,   309,     8,    23,    24,     7,    23,   125,
      10,   127,    12,    13,    14,   335,   132,   311,    44,     1,
      56,     1,   269,   139,   344,     1,   142,    27,    10,   145,
      12,   392,   279,   287,     1,    15,    16,    17,    18,    39,
     339,     1,     1,    10,    12,    27,    64,    23,    10,     8,
      10,   296,    12,     1,    54,    73,    74,    75,    76,    77,
      78,    79,     1,   287,    23,   343,    10,   373,   287,     8,
     364,    19,    20,    21,    22,   191,    56,     1,   312,   313,
     314,   357,     1,     1,    55,   309,    77,     1,     6,     8,
     309,    15,    16,    17,    18,     9,    43,    11,   418,    13,
      51,   335,     1,   348,   358,   223,     1,   223,   355,     8,
     344,   335,    11,     8,   392,   409,   436,    15,   109,     1,
     344,   109,   421,   114,   423,    49,   339,   447,    10,    11,
      12,    13,   157,     1,   358,   434,   127,   387,     6,   358,
     444,   132,   491,   390,   391,   465,   380,     1,   507,   373,
       1,   473,   472,     1,   373,   402,    10,     8,    12,     7,
       8,   408,    10,     1,   280,    33,    59,    35,   284,   489,
     286,    19,    20,    11,   494,    13,   470,    25,   169,   237,
     479,     1,   481,     9,   418,    11,   433,    13,    30,    -1,
      10,    39,    12,   309,   418,   442,   443,    -1,   474,   453,
     191,   448,   436,    -1,     1,    73,    74,    75,    76,    77,
      78,    79,   436,   447,    11,     1,    13,     0,     1,   335,
       3,   468,   469,   447,    10,    -1,    12,    -1,   344,   453,
     477,   465,   348,    75,   453,     1,    -1,   484,   472,   517,
     487,   465,    -1,    85,    10,    -1,    12,     1,   472,    -1,
      -1,   143,   144,    -1,    -1,   489,   503,   373,   100,    -1,
     494,    -1,   507,     1,   511,   489,    -1,     5,     6,     7,
     494,   518,   517,   520,   116,    -1,   118,   522,    -1,    -1,
      -1,   123,    -1,   125,    -1,    48,   533,    50,    51,   181,
      15,    16,    17,    18,    -1,   411,    -1,   139,    -1,    -1,
     142,    -1,   418,   145,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,     1,
     436,   312,   313,   314,    -1,   235,    -1,   169,    -1,   239,
      12,   447,    -1,    15,    16,    17,    18,   179,    58,    59,
      60,    61,    62,    63,   335,   237,   238,    -1,    -1,   465,
       1,    71,    -1,   344,    -1,    -1,   472,   473,    -1,    10,
      -1,    12,    -1,   255,   256,   257,   258,   259,   260,   261,
     262,    -1,    -1,   489,     1,    -1,    27,    -1,   494,   289,
      -1,   223,   292,    -1,    -1,    -1,    -1,   297,   298,   380,
      -1,   507,    19,    20,    21,    22,    -1,    -1,   290,    26,
      -1,    -1,    -1,    -1,   296,    -1,    -1,    58,    59,    60,
      61,    62,    63,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      71,     8,    -1,    -1,    11,    -1,    -1,   418,    -1,    -1,
      -1,    -1,   274,    -1,    -1,    -1,    23,    24,   280,    -1,
      -1,     1,   284,   353,   286,   436,   356,   339,     8,   359,
      10,    11,    12,    -1,    -1,   365,   447,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,   309,    -1,    -1,
     312,   313,   314,    60,   465,   385,    -1,    64,    -1,    -1,
      -1,   472,    -1,    -1,    -1,   395,    73,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,   489,    -1,
      60,   343,     1,   494,    64,    -1,   348,    -1,     7,     8,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,   438,    -1,
      -1,   373,    -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,
      39,    40,   434,    42,    -1,   455,    -1,    46,    -1,    48,
     392,    50,    51,    52,    53,    -1,    -1,    -1,    -1,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,   411,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,   481,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    -1,    -1,    -1,    57,   527,     7,    -1,
      -1,    -1,    -1,    12,    -1,   517,    15,    16,    17,    18,
      -1,   473,    73,    74,    75,    76,    77,    78,    79,   481,
       1,    -1,    -1,     4,    -1,    -1,     7,     8,     1,    -1,
      39,    -1,    -1,    -1,    -1,     8,    -1,    10,    11,    12,
      49,    -1,    -1,    -1,    25,   507,    -1,    56,    -1,    -1,
      23,    24,    25,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,     8,    -1,     1,    57,    -1,     4,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,    60,    23,    24,
      25,    64,    73,    74,    75,    76,    77,    78,    79,    25,
      73,    74,    75,    76,    77,    78,    79,    -1,    34,    -1,
      -1,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    -1,    64,
       1,    57,    -1,     4,    -1,    -1,     7,     8,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    -1,    -1,     1,    57,    -1,    -1,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    42,    43,    44,    -1,
      46,    -1,    48,    -1,    -1,    -1,    52,    53,    -1,    -1,
       1,    -1,    -1,     4,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    42,     1,    -1,    -1,    46,    -1,    48,     7,     8,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    25,     7,     8,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    -1,
      39,    40,    41,    42,    -1,    25,    -1,    46,    -1,    48,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    39,
      40,    -1,    42,    -1,    -1,    -1,    46,    47,    48,    -1,
      -1,    -1,    52,    53,    73,    74,    75,    76,    77,    78,
      79,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      40,    -1,    42,     1,    -1,    -1,    46,    -1,    48,     7,
       8,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    25,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      -1,    39,    40,    25,    42,    -1,    -1,    -1,    46,    -1,
      48,    -1,    -1,    -1,    52,    53,    -1,    39,    40,    57,
      42,     1,    -1,    -1,    46,    -1,    48,     7,     8,    51,
      52,    53,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    -1,    39,
      40,    -1,    42,    -1,     1,    45,    46,    -1,    48,    -1,
       7,     8,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,     7,     8,    25,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      37,    -1,    39,    40,    25,    42,    -1,    -1,    -1,    46,
      -1,    48,    -1,    -1,    -1,    52,    53,    -1,    39,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,     1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    11,
      -1,    -1,    -1,     1,    -1,    -1,    -1,     5,     6,     7,
       1,    23,    24,    25,    -1,    -1,    -1,     8,    30,    31,
      11,     1,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,
      -1,    -1,    23,    24,    25,    33,     1,    35,    -1,    -1,
      -1,     6,     7,     8,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    33,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    33,    60,
      35,    -1,    -1,    64,    -1,    73,    74,    75,    76,    77,
      78,    79,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,     1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,     0,     1,     3,    84,    85,    89,    86,     1,
       5,     7,    93,    96,    97,   208,   209,     1,    39,    82,
      83,   209,     1,    25,    90,    91,    83,     1,     4,    88,
      83,     1,     6,    33,    35,    73,    74,    75,    76,    77,
      78,    79,    92,   180,   182,   185,   201,   205,   231,   235,
     236,   242,   244,   246,   247,   251,   252,   260,   261,   262,
     263,   264,   265,    93,    97,   208,    83,    87,     1,     8,
      99,   104,   107,   108,   128,   208,    83,    94,     1,    92,
     186,   206,     1,    11,   163,   163,   163,   163,     1,   163,
     257,   257,   163,    83,     1,    27,    98,   105,     1,    13,
     115,    99,     1,    40,    42,    46,    48,    52,    53,    83,
      90,   108,   129,   130,   131,   134,   136,   138,   139,   149,
     151,   154,   155,   156,   160,   161,   168,   208,   209,   214,
     231,   232,    95,     1,   108,   194,     1,   108,   203,   237,
     240,   107,   248,   253,   258,   266,     1,    19,    20,    21,
      22,    26,   109,   110,   111,   113,   114,   126,   127,     1,
      10,   103,     1,    23,   107,   224,   131,    83,     1,   163,
     215,    83,   130,     1,    24,    60,    64,   107,   108,   163,
     181,   222,   224,   225,   226,   227,   228,   231,   232,   269,
     107,    83,   269,     1,   107,   163,   165,   130,   132,   133,
      83,   130,   195,     1,    27,   184,   204,   207,   107,    90,
     245,   107,   107,   163,   228,    90,   228,   256,   107,   100,
     115,   117,   102,   106,     1,    14,   116,   116,     1,    12,
     107,   164,   227,   231,   232,   233,     9,   210,   229,   269,
     228,     1,    58,    59,    60,    61,    62,    63,    65,    66,
      67,    68,    69,    70,    71,   216,   217,   218,   219,   220,
     221,   223,   268,     1,    15,    16,    17,    18,    56,   135,
     270,   271,   272,   273,   274,   150,   130,     1,    49,   158,
     166,    83,    83,    83,   163,   114,   163,    83,   238,   241,
     103,   249,   254,     1,    27,   255,   103,   259,   267,    83,
       1,    23,   118,   119,   122,     1,    54,   124,   125,    83,
     104,   234,   103,   103,   103,     1,   164,    30,    31,    90,
     181,   211,   212,   213,   228,   228,   164,   228,   228,   228,
     228,   228,   228,   228,   228,    83,   269,     1,    54,   141,
     147,     1,    41,   152,    83,   107,     1,    43,   169,   171,
     173,     1,   107,   197,   198,   187,   197,    97,   208,   239,
     164,   143,   224,   228,   243,   250,   164,     1,   224,    90,
     228,   164,   164,   101,   116,     1,    28,   120,   114,    99,
     103,     1,   233,   233,   233,   230,   130,   143,     1,    56,
     148,   153,   163,   269,   130,   167,    90,   107,   109,   110,
     112,   175,   176,     1,    44,   170,     1,    45,   162,   199,
       1,   103,   164,     1,    27,   196,    83,   164,    92,    97,
     164,   103,   164,    98,    99,     1,    23,   121,   123,   233,
     164,     1,    47,   137,   142,   152,    83,    83,   269,     1,
      50,    51,   157,   159,   160,   164,   177,    83,   174,    83,
     103,   197,   114,   188,   130,   224,   224,    83,   144,   224,
     228,   130,   164,    83,     1,    83,   160,     1,   157,   159,
     178,   130,    83,   200,    97,     1,    34,   202,   164,    98,
      55,   146,     1,    57,   140,   130,     1,   157,    83,    83,
     103,   172,   130,   198,    92,    83,   224,   107,   145,   224,
     228,    83,     1,   157,   160,    83,   130,   179,   171,   130,
      83,   157,     1,   160,   176,     1,    37,   191,   193,    83,
     157,    90,   163,   192,   228,    83,    83,    90,   189,   164,
       1,    36,   183,   190,    83
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

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
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1806 of yacc.c  */
#line 132 "src/directg.y"
    {fprintf(arquivo, "\n");}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 134 "src/directg.y"
    {erros++;yyerror("Erro do fim de linha");}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 143 "src/directg.y"
    {arquivo = fopen("../Saida.C","w+"); 
		     	strcpy(escopo,"global");
			fprintf(arquivo, "#include <stdio.h>\n#include<ctype.h> \n#include <stdlib.h> \n#include <math.h> \n#include <string.h> \n#define false 0\n#define true 1  ");			

				}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 148 "src/directg.y"
    {erros++;yyerror("Erro de inicializacao do programa esperado \" ALGORITMO \" ");}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 152 "src/directg.y"
    {fprintf(arquivo,"// "); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 152 "src/directg.y"
    {fprintf(arquivo,"\n"); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 156 "src/directg.y"
    {fprintf(arquivo, "return 0; \n } ");}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 157 "src/directg.y"
    {erros++;yyerror("Erro de termino de algoritmo esperado \" FIMALGORITMO \" ");}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 165 "src/directg.y"
    { (yyval)=strdup(yytext);
	fprintf(arquivo," %s ", (yyval));}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 171 "src/directg.y"
    {erros++;yyerror("Algoritmo sem nome");}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 176 "src/directg.y"
    {erros++;yyerror("Faltando \" INICIO \" ");}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 180 "src/directg.y"
    {fprintf(arquivo, "int main() {\n");}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 181 "src/directg.y"
    {fprintf(arquivo, "int main() {\n");}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 188 "src/directg.y"
    {erros++;yyerror("Faltando \" VAR \" ");}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 200 "src/directg.y"
    {erros++;yyerror("Necessario \" : \" para declaracao da variavel");}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 204 "src/directg.y"
    {inserirvariavel(nome,tipo,escopo);
					id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
				//	fprintf(arquivo, "%s	%s ;", hashVariavel.variaveis[id].tipo,hashVariavel.variaveis[id].nome); }
									
					fprintf(arquivo, "%s	%s ;", hashVariavel.variaveis[id].tipo,param); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 209 "src/directg.y"
    {strcpy(param,"");}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 210 "src/directg.y"
    {inserirvariavel(nome, tipo, escopo);
					  id = hashvariavel_busca(nome,tipo,escopo, &hashVariavel);
					  posFinal = posFinal - posInicial;
					  fprintf(arquivo, "%s    %s[ %d ] ;", hashVariavel.variaveis[id].tipo,param, posFinal);}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 219 "src/directg.y"
    {erros++;yyerror("Faltando \",\" para divisao de variaveis");}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 223 "src/directg.y"
    {inserirvariavel(nome,tipo,escopo); //printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 //strcat(param, hashVariavel.variaveis[id].tipo);
                 //strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);
}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 231 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo); //printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 //strcat(param, hashVariavel.variaveis[id].tipo);
                 //strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);

}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 237 "src/directg.y"
    {strcat(param, ", ");}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 249 "src/directg.y"
    {(yyval)=strdup(yytext); strcpy(nome, (yyval)); variavel =(yyval);}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 251 "src/directg.y"
    {erros++;yyerror("Identificador invalido");}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 255 "src/directg.y"
    {strcpy(tipo,"int"); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 259 "src/directg.y"
    {strcpy(tipo,"float"); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 264 "src/directg.y"
    {strcpy(tipo,"char"); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 275 "src/directg.y"
    {strcpy(tipo,"short"); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 284 "src/directg.y"
    {erros++; yyerror("Tipo de dado invalido!"); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 293 "src/directg.y"
    {erros++;yyerror("Esperado \"[\"");}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 298 "src/directg.y"
    {erros++;yyerror("Esperado \"]\"");}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 315 "src/directg.y"
    {erros++;yyerror("Erro na divisao do vetor \"..\"");}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 323 "src/directg.y"
    {(yyval)=strdup(yytext); posInicial=atoi((yyval));}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 324 "src/directg.y"
    {erros++;yyerror("Esperado um numero do tipo inteiro");}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 328 "src/directg.y"
    {(yyval)=strdup(yytext); posFinal=atoi((yyval));}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 329 "src/directg.y"
    {erros++;yyerror("Esperado um numero do tipo inteiro");}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 334 "src/directg.y"
    {erros++;yyerror("Faltou o termo de condicao do vetor \"DE\"");}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 342 "src/directg.y"
    { NomeVetor = strdup(yytext); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 358 "src/directg.y"
    {fprintf(arquivo,"break;\n");}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 370 "src/directg.y"
    {fprintf(arquivo,";\n");}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 374 "src/directg.y"
    {fprintf(arquivo,";\n");}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 390 "src/directg.y"
    {fprintf(arquivo,")  { \n ");}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 391 "src/directg.y"
    {erros++; yyerror("Esperado \"FACA\"");}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 395 "src/directg.y"
    {fprintf(arquivo, "While ( " );}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 399 "src/directg.y"
    {fprintf(arquivo,"\n  } ");}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 400 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMENQUANTO\"");}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 413 "src/directg.y"
    {fprintf(arquivo, "for");}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 417 "src/directg.y"
    {fprintf(arquivo, "\n }");}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 418 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPARA\"");}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 422 "src/directg.y"
    {fprintf(arquivo, "; ");}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 423 "src/directg.y"
    {erros++; yyerror("Esperado \"DE\"");}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 456 "src/directg.y"
    {erros++;yyerror("Erro na condicao para");}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 461 "src/directg.y"
    {erros++;yyerror("Esperado \"FACA\"");}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 465 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 470 "src/directg.y"
    {fprintf(arquivo, "do {");}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 474 "src/directg.y"
    {fprintf(arquivo, "} while ");}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 475 "src/directg.y"
    {erros++;yyerror("Espera \"ATE\" para finalizar o bloco REPITA");}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 497 "src/directg.y"
    {fprintf(arquivo, " if ( ");}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 501 "src/directg.y"
    {fprintf(arquivo, " } ");}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 502 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMSE\"");}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 506 "src/directg.y"
    {fprintf(arquivo, " ) {\n");}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 507 "src/directg.y"
    {erros++;yyerror("Esperado \"ENTAO\"");}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 511 "src/directg.y"
    {fprintf(arquivo, " } else {  ");}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 512 "src/directg.y"
    {erros++;yyerror("Esperado \"SENAO\"");}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 524 "src/directg.y"
    {erros++;yyerror("Erro no Bloco SE");}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 529 "src/directg.y"
    {fprintf(arquivo, " switch ");}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 533 "src/directg.y"
    {fprintf(arquivo, " } \n");}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 534 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMESCOLHA\"");}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 538 "src/directg.y"
    {/*fprintf(arquivo, "( ");*/}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 539 "src/directg.y"
    {erros++;yyerror("Esperado \"(\"");}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 543 "src/directg.y"
    {/*fprintf(arquivo, " ) ");*/}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 544 "src/directg.y"
    {erros++;yyerror("Esperado \")\"");}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 548 "src/directg.y"
    {fprintf(arquivo, " ( ");}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 548 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 548 "src/directg.y"
    {fprintf(arquivo, " )  { ");}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 558 "src/directg.y"
    {fprintf(arquivo, "\n case ");}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 559 "src/directg.y"
    {erros++;yyerror("Necessario um CASO");}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 563 "src/directg.y"
    {fprintf(arquivo, "\n default : ");}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 564 "src/directg.y"
    {erros++;yyerror("Necessario um OUTROCASO");}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 568 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 569 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 570 "src/directg.y"
    {erros++;yyerror("Erro no bloco caso");}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 576 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 580 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 587 "src/directg.y"
    {fprintf(arquivo,":");}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 588 "src/directg.y"
    {fprintf(arquivo,":");}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 588 "src/directg.y"
    {fprintf(arquivo,"\n break;");}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 588 "src/directg.y"
    {fprintf(arquivo, " \n  case ");}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 608 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMFUNCAO\"");}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 613 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 617 "src/directg.y"
    {strcpy(escopo,"local");}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 617 "src/directg.y"
    { inserirfuncao(nomefuncao, tipo);   
	         id = hashfuncao_busca(nomefuncao, tipo, &hashFuncao); // printf("%d" , id);
                 fprintf(arquivo, "%s    %s (%s) ", hashFuncao.funcoes[id].tiporeturn,hashFuncao.funcoes[id].nome,param);
	 }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 623 "src/directg.y"
    {fprintf(arquivo, "{ \n"); strcpy(param, "");   }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 624 "src/directg.y"
    {strcpy(escopo,"global");}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 624 "src/directg.y"
    {fprintf(arquivo, "} \n");}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 625 "src/directg.y"
    {erros++;yyerror("Erro na declaracao de FUNCAO");}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 630 "src/directg.y"
    {erros++;yyerror("Esperado \"RETORNE\"");}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 645 "src/directg.y"
    {strcpy (nomefuncao, nome);   }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 646 "src/directg.y"
    {erros++;yyerror("Erro no nome da funcao");}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 651 "src/directg.y"
    {erros++;yyerror("Esperado \":\"");}
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 657 "src/directg.y"
    {erros++;yyerror("Erro no parametro da funcao");}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 661 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo); //printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 strcat(param, hashVariavel.variaveis[id].tipo);
                 strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);

}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 668 "src/directg.y"
    { inserirvariavel(nome,tipo,escopo);// printf("%s %s",nome, tipo);
                 id = hashvariavel_busca(nome, tipo, escopo, &hashVariavel);
                 strcat(param, hashVariavel.variaveis[id].tipo);
		 strcat(param, " ");
                 strcat(param, hashVariavel.variaveis[id].nome);
          
}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 674 "src/directg.y"
    {strcat(param, ", ");}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 683 "src/directg.y"
    {erros++;yyerror("Esperado \"FIMPROCEDIMENTO\"");}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 687 "src/directg.y"
    {strcpy (nomefuncao, nome); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 688 "src/directg.y"
    {erros++;yyerror("Erro no nome do procedimento");}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 692 "src/directg.y"
    {strcpy(escopo,"local");}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 692 "src/directg.y"
    { inserirfuncao(nomefuncao, "void");
                 id = hashfuncao_busca(nomefuncao, "void", &hashFuncao); // printf("%d" , id);
                 fprintf(arquivo, "%s    %s (%s) ", hashFuncao.funcoes[id].tiporeturn,hashFuncao.funcoes[id].nome,param);
         }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 709 "src/directg.y"
    {fprintf(arquivo, "=");}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 713 "src/directg.y"
    {fprintf(arquivo, "false");}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 718 "src/directg.y"
    {fprintf(arquivo, "true");}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 732 "src/directg.y"
    {(yyval)=strdup((yyvsp[(1) - (1)])); strcpy(nome,(yyval)); existeVariavel(nome); }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 737 "src/directg.y"
    {fprintf(arquivo, " + ");}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 742 "src/directg.y"
    {fprintf(arquivo, " - ");}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 747 "src/directg.y"
    {fprintf(arquivo, " * ");}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 751 "src/directg.y"
    {fprintf(arquivo, " \\ ");}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 756 "src/directg.y"
    {fprintf(arquivo, " / ");}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 761 "src/directg.y"
    {fprintf(arquivo, " %% ");}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 765 "src/directg.y"
    {fprintf(arquivo, " - ");}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 769 "src/directg.y"
    {fprintf(arquivo, " pow  ");}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 774 "src/directg.y"
    {(yyval)=strdup(yytext);  fprintf(arquivo,"%s",(yyval));}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 775 "src/directg.y"
    {erros++;yyerror("Esperado um numero do tipo inteiro");}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 779 "src/directg.y"
    {(yyval)=strdup(yytext);  fprintf(arquivo,"%s",(yyval));}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 783 "src/directg.y"
    {(yyval)=strdup(yytext);  fprintf(arquivo,"%s",(yyval));}
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 794 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 803 "src/directg.y"
    {fprintf(arquivo, "(");}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 803 "src/directg.y"
    {fprintf(arquivo, "(");}
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 824 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 825 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 836 "src/directg.y"
    {fprintf(arquivo,"strlen");}
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 840 "src/directg.y"
    {fprintf(arquivo, "(");}
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 840 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 840 "src/directg.y"
    {fprintf(arquivo, ")");}
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 841 "src/directg.y"
    {fprintf(arquivo, "(");}
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 841 "src/directg.y"
    {fprintf(arquivo, ")");}
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 846 "src/directg.y"
    {fprintf(arquivo,"strcpy");}
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 854 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 855 "src/directg.y"
    {erros++;yyerror("Erro na funcao Copia");}
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 859 "src/directg.y"
    {fprintf(arquivo,"toupper");}
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 863 "src/directg.y"
    {fprintf(arquivo, "(");}
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 863 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 863 "src/directg.y"
    {fprintf(arquivo, ")");}
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 868 "src/directg.y"
    {fprintf(arquivo,"sqrt");}
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 872 "src/directg.y"
    {fprintf(arquivo, "(");}
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 872 "src/directg.y"
    {fprintf(arquivo, ")");}
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 878 "src/directg.y"
    {erros++;yyerror("Esperado \":NUMEROINTEIRO\"");}
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 892 "src/directg.y"
    {fprintf(arquivo, " (   ");}
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 892 "src/directg.y"
    {fprintf(arquivo, "  ) ");}
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 893 "src/directg.y"
    {erros++;yyerror("Erro na funcao Escreva");}
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 897 "src/directg.y"
    {fprintf(arquivo, " printf ");}
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 905 "src/directg.y"
    {fprintf(arquivo, " printf ");}
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 910 "src/directg.y"
    {fprintf(arquivo, " printf(\"\\n\") ");}
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 915 "src/directg.y"
    {fprintf(arquivo, " scanf ");}
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 919 "src/directg.y"
    {fprintf(arquivo, " (");}
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 919 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 919 "src/directg.y"
    {fprintf(arquivo, " )");}
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 924 "src/directg.y"
    {fprintf(arquivo, " == ");}
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 925 "src/directg.y"
    {fprintf(arquivo, " != ");}
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 926 "src/directg.y"
    {fprintf(arquivo, " < ");}
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 927 "src/directg.y"
    {fprintf(arquivo, " <= ");}
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 928 "src/directg.y"
    {fprintf(arquivo, " > ");}
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 929 "src/directg.y"
    {fprintf(arquivo, " >= ");}
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 930 "src/directg.y"
    {erros++;yyerror("Erro na condicao logica");}
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 937 "src/directg.y"
    {existeVariavel(variavel);}
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 942 "src/directg.y"
    {fprintf(arquivo, " && ");}
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 946 "src/directg.y"
    {fprintf(arquivo, " ||  ");}
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 950 "src/directg.y"
    {fprintf(arquivo, " ! ");}
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 954 "src/directg.y"
    {fprintf(arquivo, " ^ ");}
    break;



/* Line 1806 of yacc.c  */
#line 3592 "directg.tab.c"
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
#line 966 "src/directg.y"


//chamadas de funcoes da pilha dinamica
extern void FPVazia(TipoPilha *Pilha);
extern int Vazia(TipoPilha Pilha);
extern void Empilha(TipoItem Item, TipoPilha *Pilha);
extern void Desempilha(TipoPilha *Pilha, TipoItem *Item);
extern int Tamanho(TipoPilha Pilha);

//instanciacao elementos pilha

TipoPilha minhaPilha;
TipoItem item;

//chamadas da tabela hash

extern void hashfuncao_iniciar(VetFuncao *hashFuncao, VetVariavel *hashVariavel);
extern void hashfuncao_inserir(char nome[], char tipodereturn[], VetFuncao *hashFuncao);
extern int hashfuncao_busca( char nome[], char tiporeturn[], VetFuncao *hashFuncao);
extern int hashfuncao_existe( char nome[], char tiporeturn[], VetFuncao *hashFuncao);
extern void hashvariavel_inserir(char nome[], char tipo[], char escopo[], VetVariavel *hashVariavel);
extern int hashvariavel_busca( char nome[], char tipo[], char escopo[],VetVariavel *hashVariavel );
extern int hashvariavel_existe( char nome[], char tipo[], char escopo[], VetVariavel *hashVariavel );
extern int hashvariavel_existenaHash( char nome[], VetVariavel *hashVariavel );



int yyerror(char *s) {
        if (strcmp(yytext,"\n")==0 || strcmp(yytext,"\r")==0) {
                yytext="VAZIO";
		item.lineNo = yylineno--;
        	item.errNo = yytext;
        	item.errMsg = s;
        	Empilha(item,&minhaPilha);
        }
	else {

        item.lineNo = yylineno;
        item.errNo = yytext;
        item.errMsg = s;
	yyerrork;
	yyclearin;

        Empilha(item,&minhaPilha);
	}
}


int main(int argc, char *argv[] ) {
        FPVazia(&minhaPilha);
        extern FILE *yyin;
	short itemTopoNulo=1; //comeca com topo padrao nulo
	hashfuncao_iniciar(&hashFuncao, &hashVariavel);
  	yyin = fopen(argv[1], "r" );
  	printf("Compilando...\n");
	

	yyparse();
  	if (erros == 0) {
        	printf("Sucesso!\n");
        	return 0;
  	}
  	else {
        	printf("You Suck!\n");
        	while(Tamanho(minhaPilha) > 0) {
  			if (itemTopoNulo == 0) {
			//	printf("Mensagem de erro: %s\nNa linha:%d Token Encontrado:%s\n", minhaPilha.Topo->Item.errMsg,
                        //                 minhaPilha.Topo->Item.lineNo, minhaPilha.Topo->Item.errNo);
				
				printf("Mensagem de erro: %s\nNa linha:%d Token Encontrado:\n", minhaPilha.Topo->Item.errMsg,
                                         minhaPilha.Topo->Item.lineNo);
                        	Desempilha(&minhaPilha,&minhaPilha.Topo->Item);
			}
			else {
				Desempilha(&minhaPilha,&minhaPilha.Topo->Item);
				itemTopoNulo = 0;
			}
		}		
	}
	fclose(arquivo);
	return 0;
}

int yywrap(void) {
  return 1;
}


