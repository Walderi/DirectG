




exponent [eE][+-]?{integer}
real {integer}("."{integer})?{exponent}??

%%

{white} { }
{real} { yylval=atof(yytext);
	return NUMBER;
}

"+" return PLUS;
"-" return MINUS;
"*" return TIMES;
"/" return DIVIDE;
"
