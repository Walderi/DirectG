%{
/*Validador de Portugol*/
extern int yywrap() { }
%}

ALGORITMO algoritmo
FIMALGORITMO fimalgoritmo
INICIO inicio
ESCREVAL escreval
STRING \".*\"
ESCREVA escreva
VAR var
INTEIRO inteiro
REAL [r]eal
PI [p][\i]
LEIA leia
SE [s][\e]
ENTAO [\e]ntao
SENAO [s][\e]nao
FIMSE fims[\e]
ESCOLHA escolha
FIMESCOLHA fimescolha
CASO caso
OUTROCASO outrocaso
AND [\e]
OR  [ou]
COMENTARIO [\/\/].*+
VARIAVEL [a-zA-Z]+[0-9]*
ATRIBUI \<\-
NUMINTEIRO [0-9]+
DIVISAO [\/]

 
%%

\n (yylineno++);
{ALGORITMO} printf("%s - T_ALGORITMO\n", yytext);
{FIMALGORITMO} printf("%s - T_FIMALGORITMO\n", yytext);
{INICIO} printf("%s - T_INICIO\n", yytext);
{ESCREVAL} printf("%s - T_ESCREVAL\n", yytext);
{STRING}  printf("%s - T_STRING\n", yytext);
{ESCREVA} printf("%s - T_ESCREVA\n", yytext);
{COMENTARIO} printf("%s - T_COMENTARIO\n", yytext);
"(" printf("%s - T_ABRE_PARENT\n", yytext);
")" printf("%s - T_FECHA_PARENT\n", yytext);
"," printf("%s - T_VIRGULA\n", yytext);
{AND} printf("%s - T_AND\n", yytext);
{OR}  printf("%s - T_OR\n", yytext);
{VAR} printf("%s - T_VAR\n", yytext);
{INTEIRO} printf("%s - T_INTEIRO\n", yytext);
{REAL} printf("%s - T_REAL\n", yytext);
{PI} printf("%s - T_PI\n", yytext);
{LEIA} printf("%s - T_LEIA\n", yytext);
{SE} printf("%s - T_SE\n", yytext);
{SENAO} printf("%s - T_SENAO\n", yytext);
{ENTAO} printf("%s - T_ENTAO\n", yytext);
{FIMSE} printf("%s - T_FIMSE\n", yytext);
{ESCOLHA} ("%s - T_ESCOLHA\n", yytext);
{CASO} printf("%s - T_CASO\n", yytext);
{OUTROCASO} printf("%s - T_OUTROCASO\n", yytext);
{FIMESCOLHA} printf("%s - T_FIMESCOLHA\n", yytext);
{VARIAVEL} printf("%s - T_VARIAVEL\n", yytext);
{NUMINTEIRO} printf("%s - T_NUMINTEIRO\n", yytext);
{ATRIBUI} printf("%s - T_ATRIBUI\n", yytext);
{DIVISAO} printf("%s - T_DIVISAO\n", yytext);
":" printf("%s - T_DECLARAVAR\n", yytext);
"+" printf("%s - T_SOMA\n", yytext);
"*" printf("%s - T_MULT\n", yytext);
"^" printf("%s - T_POTENCIA\n", yytext);
"<" printf("%s - T_MENORQUE\n", yytext);
"<=" printf("%s - T_MENORIGUALQUE\n", yytext);
">" printf("%s - T_MAIORQUE\n", yytext);
">=" printf("%s - T_MAIORIGUALQUE\n", yytext);
. printf("%s - T_DESCONHECIDO. Localizado na linha: %d \n", yytext,yylineno);

%%

main (int argc, char *argv[])
{
	yyin = fopen (argv[1], "r");

	if(yylex())
		fprintf(stderr, "\nCorrija e tente de novo!\n\n");
	else
		fprintf(stderr, "\nAew! Escreveu ok o código...\n\n");
	
	fclose(yyin);
	
	return 0;	
}
