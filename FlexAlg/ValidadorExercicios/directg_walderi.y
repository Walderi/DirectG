%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
%}

%token T_ALGORITMO T_FIMALGORITMO
%token T_INICIO T_ESCREVAL T_ESCREVA
%token T_STRING
%token T_COMENTARIO
%token T_ABRE_PARENT T_FECHA_PARENT
%token T_VIRGULA
%token T_AND T_OR T_E T_OU
%token T_VAR
%token T_INTEIRO T_REAL T_CARACTERE
%token T_PI
%token T_LEIA
%token T_INTERROMPA
%token T_SENAO T_ENTAO T_FIMSE T_SE
%token T_ESCOLHA T_CASO T_OUTROCASO T_FIMESCOLHA
%token T_NUMINTEIRO
%token T_NUMREAL
%token T_ATRIBUI
%token T_DECLARAVAR
%token T_ESPACO

%token T_SOMA T_DIVISAO T_SUBTRACAO T_MULT T_POTENCIA
%token T_DIFERENTE T_MENORQUE T_MENORIGUALQUE T_MAIORQUE T_MAIORIGUALQUE T_IGUAL
%token T_REPITA T_ATE
%token T_TIPO_LOGICO T_LOGICO_VERDADEIRO T_LOGICO_FALSO
%token T_PROCEDIMENTO
%token T_DIVISAOINTEIRA
%token T_RESTO
%token T_VARIAVEL
%token T_RAIZQ
%token T_DOISPONTOS
%token T_ENQUANTO T_FIMENQUANTO
%token T_PARA T_DE T_ATE T_PASSO T_FACA T_FIMPARA

%left T_SOMA T_SUBTRACAO
%left T_MULT T_DIVISAO
%right T_POTENCIA T_RAIZQ

%start Input

%%

Input:
	
	| Input Bloco
;

Bloco: 
	T_ALGORITMO Nome Codigo T_FIMALGORITMO	
;

Nome:
    T_STRING
;

Codigo:
	DeclaraVariavel T_INICIO Rotinas 
	| Comentarios Codigo	
;

DeclaraVariavel:
	| T_VAR
	| T_VAR Variaveis T_DOISPONTOS Tipo
;

Variaveis:
	Variavel
	| Variavel T_VIRGULA Variaveis 
;

VariavelInt:
	T_NUMINTEIRO
	|T_VARIAVEL
;

Variavel:
	T_VARIAVEL
;

Tipo:
	T_INTEIRO
	| T_REAL
	| T_CARACTERE
;

Rotinas:
	 Comentarios
	| Rotina
	| Comentarios Rotinas 
;

Rotina:
	| T_STRING Rotina
	| Escreval Rotina
	| Escreva Rotina
	| Leia Rotina
	| Atribuicao Rotina
	| Enquanto Rotina
	| Escolha Rotina
	| Repita Rotina
	| Para Rotina
;	

Comentarios:
	Comentario
	| Comentario Comentarios
;

Comentario:
	T_COMENTARIO
;

Atribuicao:
	 Variavel T_ATRIBUI T_STRING
	| Variavel T_ATRIBUI Expression
;

Expression:
	Number 
	| Variavel 
	| Expression T_SOMA Expression  
	| Expression T_SUBTRACAO Expression   
	| Expression T_MULT Expression   
	| Expression T_DIVISAO Expression   
	| T_SUBTRACAO Expression   
	| Expression T_POTENCIA Expression   
	| T_ABRE_PARENT Expression T_FECHA_PARENT  
    	| Raiz 
;
FuncaoExistente:
	Comprimento
	| Copia
;

Comprimento:
	T_COMPR T_ABRE_PARENT T_VARIAVEL T_FECHA_PARENT
;

Raiz: 
	T_RAIZQ T_ABRE_PARENT Expression T_FECHA_PARENT
;

Number:
	T_NUMINTEIRO
	| T_NUMREAL
;

Conteudo:
	| T_STRING
	| Expression
	| Conteudo T_VIRGULA Expression T_DOISPONTOS T_NUMINTEIRO
	| Conteudo T_VIRGULA Expression T_DOISPONTOS T_NUMINTEIRO T_DOISPONTOS T_NUMINTEIRO
;
ParametroFUNC:
	T_ABRE_PARENT Conteudo T_FECHA_PARENT
	
;

Escreva:
	T_ESCREVA ParametroFUNC
;

Escreval:
	T_ESCREVAL ParametroFUNC	
;

Leia:
	T_LEIA T_ABRE_PARENT T_VARIAVEL T_FECHA_PARENT
;

Relacional:
	T_IGUAL
	| T_DIFERENTE
	| T_MENORQUE
	| T_MENORIGUALQUE
	| T_MAIORQUE
	| T_MAIORIGUALQUE 
;
ExpressaoRelacional:
	Expression Relacional Expression	
;

ExpressaoLogica:
	T_E
	|T_OU
	|T_NAO
;

Condicao:
	ExpressaoRelacional
	| ExpressaoRelacional ExpressaoLogica Condicao
	| T_LOGICO
;

Enquanto:
	T_ENQUANTO T_ABRE_PARENT Condicao T_FECHA_PARENT Rotinas T_FIMENQUANTO
;

Para:
	T_PARA Variavel T_DE VariavelInt T_ATE VariavelInt T_FACA Rotinas T_FIMPARA
	| T_PARA Variavel T_DE VariavelInt T_ATE VariavelVnt T_PASSO T_NUMINTEIRO T_FACA Rotinas T_FIMPARA
;

Escolha:
	T_ESCOLHA T_VARIAVEL Caso T_FIMESCOLHA	
;

Selecao:
	ExpressaoRelacional
	| T_VARIAVEL
	| T_STRING
	| Number
;

Selecoes:
	Selecao
	|Selecao T_VIRGULA Selecoes
;

Caso:
	T_CASO Selecoes Rotinas T_OUTROCASO Rotinas
	|T_CASO Selecoes Rotinas Caso T_OUTROCASO Rotinas 
 
;

Repita:
	T_REPITA Rotinas T_ATE T_ABRE_PARENT Condicao T_FECHA_PARENT
;
%%

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
