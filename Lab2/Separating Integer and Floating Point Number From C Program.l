DIGIT [0-9]
ID [a-z][a-z0-9]*

%%
{DIGIT}+		{printf("An Integer: %s (%d)\n", yytext, atoi(yytext));}
{DIGIT}*[.]{DIGIT}+	{printf("A Float: %s (%g)\n", yytext, atof(yytext));}
.
\n
%%

int yywrap()
{
	return 1;
}

int main()
{
	yyin = fopen("m.c", "r");
	yylex();

	return 0;
}