%option yylineno
%{
#define YYSTYPE double
#include "valida_portugol.tab.h"
%}

ALGORITMO 	[Aa][Ll][Gg][Oo][Rr][Ii][Tt][Mm][Oo]
FIMALGORITMO 	[fF][iI][mM][aA][lL][gG][oO][rR][iI][tT][mM][Oo]
INICIO 		[iI][nN][iI][cC][iI][oO]
ESCREVAL 	[eE][Ss][cC][rR][eE][vV][aA][lL]

STRING 		\".*\"

ESCREVA 	[eE][sS][cC][rR][eE][vV][aA]
VAR 		[V|v][a|A][r|R]
RAIZQ 		[r|R][A|a][i|I][z|Z][q|Q]
LOGICO 		[lL][oO][gG][iI][cC][oO]
INTEIRO 	[iI][nN][tT][eE][iI][rR][oO]
VERDADEIRO 	[vV][eE][rR][dD][aA][dD][eE][iI][rR][oO]
FALSO 		[fF][aA][lL][sS][oO]
REAL 		[rR][eE][aA][lL]
PI 		[pP][\i I]
LEIA 		[lL][eE][iI][aA]
SE 		[sS][\e E]
ENTAO 		[\e E][nN][tT][aA][oO]
SENAO 		[sS][\e E][nN][aA][oO]
FIMSE 		[fF][iI][mM][sS][\e E]
ESCOLHA 	[eE][sS][cC][oO][lL][hH][aA]
FIMESCOLHA 	[fF][iI][mM][eE][sS][cC][oO][lL][hH][aA]
CASO 		[cC][aA][sS][oO]
INTERROMPA 	[iI][nN][tT][eE][rR][rR][oO][mM][pP][Aa] 
OUTROCASO 	[oO][Uu][tT][rR][oO][Cc][aA][sS][oO]
AND 		[\e E]
OR  		[oO][uU]
XOR		[xX][oO][uU]
COMENTARIO 	[\/]{2}.*
DIVISAO 	[\/]{1}
DIVISAOINTEIRA 	[\\]{1}
MOD 		[mM][oO][dD]
VARIAVEL 	[a-zA-Z]+[a-zA-Z0-9\_]*
ATRIBUI 	\<\-
NUMINTEIRO 	[0-9]+
NUMREAL 	{NUMINTEIRO}\.{NUMINTEIRO}
REPITA 		[rR][eE][pP][iI][tT][aA]
PARA		[Pp][Aa][Rr][Aa]
FIMPARA		[Ff][Ii][Mm][Pp][Aa][Rr][Aa]
ENQUANTO	[Ee][Nn][Qq][Uu][Aa][Nn][Tt][Oo]
FIMENQUANTO	[Ff][Ii][Mm][Ee][Nn][Qq][Uu][Aa][Nn][Tt][Oo]
FACA		[Ff][Aa][Cc][Aa]
PASSO		[Pp][Aa][Ss][Ss][Oo]
ATE 		[aA][tT][e]
PROCEDIMENTO 	[pP][rR][oO][cC][eE][dD][iI][mM][eE][nN][tT][oO]
FIMPROCEDIMENTO [fF][iI][mM][pP][rR][oO][cC][eE][dD][iI][mM][eE][nN][tT][oO]
FUNCAO		[fF][uU][nN][cC][aA][oO]
FIMFUNCAO	[Ff][Ii][mM][fF][uU][nN][cC][aA][oO]
RETORNE		[Rr][eE][tT][oO][rR][nN][eE]
COMPR		[Cc][Oo][Mm][Pp][Rr]
VETOR 		[vV][eE][tT][oO][rR]
DE		[dD][eE]
CARACTERE	[cC][aA][Rr][Aa][Cc][Tt][Ee][Rr][Ee]?
COPIA		[cC][oO][pP][iI][aA]
MAIUSC		[mM][aA][iI][uU][Ss][Cc]

ESPACOVAZIO 	[ \t\r]+

QUEBRA		[\n]+

%%


{ESPACOVAZIO} 		{}

{QUEBRA}		{yylineno++;}
{ALGORITMO} 		return T_ALGORITMO;
{FIMALGORITMO} 		return T_FIMALGORITMO;
{INICIO} 		return T_INICIO;
{ESCREVAL} 		return T_ESCREVAL;
{STRING} 		return T_STRING;
{ESCREVA} 		return T_ESCREVA;
{DIVISAO} 		return T_DIVISAO;
{COMENTARIO}		return T_COMENTARIO;
{AND} 			return T_AND;
{OR} 			return T_OR;
{XOR}			return T_XOR;
{VAR} 			return T_VAR;
{RAIZQ} 		return T_RAIZQ;
{INTEIRO} 		return T_INTEIRO;
{REAL} 			return T_REAL;
{PI} 			return T_PI;
{LEIA} 			return T_LEIA;
{SE} 			return T_SE;
{INTERROMPA} 		return T_INTERROMPA;
{SENAO} 		return T_SENAO;
{ENTAO} 		return T_ENTAO;
{FIMSE} 		return T_FIMSE;
{ESCOLHA} 		return T_ESCOLHA;
{CASO} 			return T_CASO;
{OUTROCASO} 		return T_OUTROCASO;
{FIMESCOLHA} 		return T_FIMESCOLHA;
{NUMREAL} 		return T_NUMREAL;
{NUMINTEIRO} 		return T_NUMINTEIRO;
{ATRIBUI} 		return T_ATRIBUI;
{REPITA} 		return T_REPITA;
{PARA}			return T_PARA;
{FIMPARA}		return T_FIMPARA;
{ENQUANTO}		return T_ENQUANTO;
{FIMENQUANTO}		return T_FIMENQUANTO;
{FACA}			return T_FACA;
{PASSO}			return T_PASSO;
{ATE} 			return T_ATE;
{LOGICO} 		return T_LOGICO;
{VERDADEIRO} 		return T_LOGICO_VERDADEIRO;
{FALSO} 		return T_LOGICO_FALSO;
{PROCEDIMENTO} 		return T_PROCEDIMENTO;
{FIMPROCEDIMENTO}	return T_FIMPROCEDIMENTO;
{FUNCAO}		return T_FUNCAO;
{FIMFUNCAO}		return T_FIMFUNCAO;
{RETORNE}		return T_RETORNE;
{DIVISAOINTEIRA}	return T_DIVISAOINTEIRA;
{MOD} 			return T_MOD;
{DE}			return T_DE;
{CARACTERE}		return T_CARACTERE;
{COPIA}			return T_COPIA;
{MAIUSC}		return T_MAIUSC;
{COMPR}			return T_COMPR;
{VETOR}			return T_VETOR;
{VARIAVEL} 		return T_IDENTIFICADOR;
":" 			return T_DECLARAVAR;
"+" 			return T_SOMA;
"-" 			return T_SUBTRACAO;
"*" 			return T_MULT;
"<>" 			return T_DIFERENTE;
"^" 			return T_POTENCIA;
"<" 			return T_MENORQUE;
"<=" 			return T_MENORIGUALQUE;
">" 			return T_MAIORQUE;
">=" 			return T_MAIORIGUALQUE;
"=" 			return T_IGUAL;
"\["			return T_ABRECOLCHETE;
"\]"			return T_FECHACOLCHETE;
"(" 			return T_ABRE_PARENT;
")" 			return T_FECHA_PARENT;
"," 			return T_SEPARADOR;
"\.\."			return T_PONTOPONTO;

. 			{return T_INVALIDO;}

%%
