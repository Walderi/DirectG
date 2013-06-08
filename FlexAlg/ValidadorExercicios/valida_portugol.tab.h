/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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
     T_TIPO_LOGICO = 304,
     T_LOGICO_VERDADEIRO = 305,
     T_LOGICO_FALSO = 306,
     T_DIVISAOINTEIRA = 307,
     T_RESTO = 308,
     T_VARIAVEL = 309,
     T_RAIZQ = 310,
     T_COPIA = 311,
     T_COMPR = 312,
     T_MAIUSC = 313,
     T_DOISPONTOS = 314,
     T_ENQUANTO = 315,
     T_FIMENQUANTO = 316,
     T_PROCEDIMENTO = 317,
     T_FIMPROCEDIMENTO = 318,
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

extern YYSTYPE yylval;


