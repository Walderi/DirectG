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
LEIA leia
COMENTARIO [\/\/].*
VARIAVEL [a-zA-Z]+
ATRIBUI \<\-
%%

{ALGORITMO} printf("%s - T_ALGORITMO\n", yytext);
{FIMALGORITMO} printf("%s - T_FIMALGORITMO\n", yytext);
{INICIO} printf("%s - T_INICIO\n", yytext);
{ESCREVAL} printf("%s - T_ESCREVAL\n", yytext);
{STRING}  printf("%s - T_STRING\n", yytext);
{ESCREVA} printf("%s - T_ESCREVA\n", yytext);
{COMENTARIO} printf("%s - T_COMENTARIO\n", yytext);
"(" printf("%s - T_ABRE PARENT\n", yytext);
")" printf("%s - T_FECHA PARENT\n", yytext);
"," printf("%s - T_VIRGULA\n", yytext);
{VAR} printf("%s - T_VAR\n", yytext);
{INTEIRO} printf("%s - T_INTEIRO\n", yytext);
{REAL} printf("%s - T_REAL\n", yytext);
{LEIA} printf("%s - T_LEIA\n", yytext);
{VARIAVEL} printf("%s - T_VARIAVEL\n", yytext);
":" printf("%s - T_DECLARAVAR\n", yytext);
{ATRIBUI} printf("%s - T_ATRIBUI\n", yytext);
"+" printf("%s - T_SOMA\n", yytext);

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
