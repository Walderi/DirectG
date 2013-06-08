%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int erros;
%}

%token T_ALGORITMO T_FIMALGORITMO
%token T_INICIO T_ESCREVAL T_ESCREVA
%token T_STRING
%token T_COMENTARIO
%token T_ABRE_PARENT T_FECHA_PARENT
%token T_ABRECOLCHETE T_FECHACOLCHETE
%token T_VIRGULA
%token T_AND T_OR T_NOT
%token T_VAR
%token T_INTEIRO T_REAL T_CARACTERE T_LOGICO
%token T_PI
%token T_LEIA
%token T_ESCOLHA T_CASO T_OUTROCASO T_FIMESCOLHA
%token T_NUMINTEIRO
%token T_NUMREAL
%token T_ATRIBUI
%token T_DECLARAVAR
%token T_ESPACO
%token T_PONTOPONTO

%token T_SOMA T_DIVISAO T_SUBTRACAO T_MULT T_POTENCIA T_MOD
%token T_DIFERENTE T_MENORQUE T_MENORIGUALQUE T_MAIORQUE T_MAIORIGUALQUE T_IGUAL
%token T_REPITA T_ATE
%token T_TIPO_LOGICO T_LOGICO_VERDADEIRO T_LOGICO_FALSO
%token T_DIVISAOINTEIRA
%token T_RESTO
%token T_VARIAVEL
%token T_RAIZQ T_COPIA T_COMPR T_MAIUSC
%token T_DOISPONTOS
%token T_ENQUANTO T_FIMENQUANTO
%token T_PROCEDIMENTO T_FIMPROCEDIMENTO
%token T_FUNCAO T_FIMFUNCAO
%token T_SE T_ENTAO T_SENAO T_FIMSE
%token T_INTERROMPA
%token T_PARA T_DE T_PASSO T_FACA T_FIMPARA
%token T_VETOR

%left T_SOMA T_SUBTRACAO
%left T_MULT T_DIVISAO T_MOD
%right T_POTENCIA T_RAIZQ

%start Input

%%

Input:
	
	| Input Bloco
;

Bloco: 
	T_ALGORITMO nome codigo T_FIMALGORITMO	
;

nome:
    T_STRING
;

inicio:
	T_INICIO
	| error { erros++; yyerror("Procurou inicio e nao achou!", yylineno, yytext);
	} 
;

codigo:
	declaravariavel inicio rotinas 
	| comentarios codigo	
;

declaravariavel:
	| T_VAR
	| T_VAR variaveis T_DOISPONTOS tipo
	| T_VAR variaveis T_DOISPONTOS vetor
	| error { erros++; yyerror("Erro de declaracao de variaveis", yylineno, yytext); }
;

variaveis:
	variavel
	| variavel T_VIRGULA variaveis 
;

VariavelInt:
	T_NUMINTEIRO
	|T_VARIAVEL
;

variavel:
	T_VARIAVEL
;

tipo:
	T_INTEIRO
	| T_REAL
	| T_CARACTERE
	| T_VETOR T_DE tipo
	| error {erros++; yyerror("tipo de variavel inexistente!", yylineno, yytext);}
;

vetor: 
	T_VETOR T_ABRECOLCHETE T_NUMINTEIRO T_PONTOPONTO T_NUMINTEIRO T_FECHACOLCHETE T_DE tipo
;

rotinas:
	 comentarios
	| rotina
	| comentarios rotinas 
;

rotina:
	| T_STRING rotina
	| Escreval rotina
	| Escreva rotina
	| Leia rotina
	| Atribuicao rotina
	| Enquanto rotina
	| Escolha rotina
	| Repita rotina
	| Para rotina
	| se rotina
	| T_INTERROMPA rotina
	| funcoes rotina
;

se:
	T_SE Condicao T_ENTAO rotinas T_FIMSE
	| T_SE Condicao T_ENTAO rotinas T_SENAO rotinas T_FIMSE
;

procedimento:
	T_PROCEDIMENTO T_VARIAVEL T_ABRE_PARENT parametros T_FECHA_PARENT declaravariavel T_INICIO rotinas T_FIMPROCEDIMENTO
	| T_PROCEDIMENTO T_VARIAVEL T_ABRE_PARENT parametros T_ATRIBUI tipo declaravariavel T_INICIO rotinas T_FIMPROCEDIMENTO
;

funcoes:
	funcao
	procedimento
	FuncaoExistente
;

funcao:
	T_FUNCAO T_VARIAVEL T_ABRE_PARENT parametros T_FECHA_PARENT T_ATRIBUI tipo declaravariavel T_INICIO rotinas T_FIMFUNCAO
;

parametros:
	variaveis T_ATRIBUI tipo
	| parametros T_VIRGULA variaveis T_ATRIBUI tipo
;	

comentarios:
	comentario
	| comentario comentarios
;

comentario:
	T_COMENTARIO
;

Atribuicao:
	 variavel T_ATRIBUI T_STRING
	| variavel T_ATRIBUI Expression
;

Expression:
	number 
	| variavel 
	| Expression T_SOMA Expression  
	| Expression T_SUBTRACAO Expression   
	| Expression T_MULT Expression   
	| Expression T_DIVISAO Expression
	| Expression T_MOD Expression   
	| T_SUBTRACAO Expression   
	| Expression T_POTENCIA Expression   
	| T_ABRE_PARENT Expression T_FECHA_PARENT  
    	| raiz 
;

FuncaoExistente:
	comprimento
	| copia
	| maiusc
;

comprimento:
	T_COMPR T_ABRE_PARENT T_VARIAVEL T_FECHA_PARENT
;

copia:
	T_COPIA T_ABRE_PARENT T_VARIAVEL T_VIRGULA T_NUMINTEIRO T_VIRGULA T_NUMINTEIRO T_FECHA_PARENT
;

maiusc:
	T_MAIUSC T_ABRE_PARENT T_VARIAVEL T_FECHA_PARENT
;

raiz: 
	T_RAIZQ T_ABRE_PARENT Expression T_FECHA_PARENT
;

number:
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
	T_AND
	|T_OR
	|T_NOT
;

Condicao:
	ExpressaoRelacional
	| ExpressaoRelacional ExpressaoLogica Condicao
	| T_LOGICO
;

Enquanto:
	T_ENQUANTO T_ABRE_PARENT Condicao T_FECHA_PARENT rotinas T_FIMENQUANTO
;

Para:
	T_PARA variavel T_DE VariavelInt T_ATE VariavelInt T_FACA rotinas T_FIMPARA
	| T_PARA variavel T_DE VariavelInt T_ATE VariavelInt T_PASSO T_NUMINTEIRO T_FACA rotinas T_FIMPARA
;

Escolha:
	T_ESCOLHA T_VARIAVEL Caso T_FIMESCOLHA	
;

Selecao:
	ExpressaoRelacional
	| T_VARIAVEL
	| T_STRING
	| number
;

Selecoes:
	Selecao
	|Selecao T_VIRGULA Selecoes
;

Caso:
	T_CASO Selecoes rotinas T_OUTROCASO rotinas
	|T_CASO Selecoes rotinas Caso T_OUTROCASO rotinas 
 
;

Repita:
	T_REPITA rotinas T_ATE T_ABRE_PARENT Condicao T_FECHA_PARENT
;


%%

extern int 	yylineno;
extern char 	*yytext;

int yyerror(char *s, int line, char *msg) {
	printf("Erro %s na Linha %d\n", s, line);
	printf("Mensagem: %s\n", msg);
	return 0;
}

int main(int argc, char *argv[] ) {
	extern FILE *yyin;
	
	if(argc > 1 && (yyin = fopen(argv[1], "r")) == NULL) {
		perror(av[1]);
		return 1;		
	}

	yyparse();

	if ( erros == 0)
		printf("Sucesso\n");

	return 0;
}
