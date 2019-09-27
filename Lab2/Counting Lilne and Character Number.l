%{
int nline=0, nchar=0;
%}

%%
\n	{ ++nline; ++nchar; }
.	{ ++nchar; }
%%

int yywrap()
{
	return 1;
}

int main()
{
	yyin = fopen("m.c", "r");
	yylex();
	
	printf("No. of lines %d and No. of characters %d\n", nline, nchar);

	return 0;
}