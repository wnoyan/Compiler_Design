%{
int nchar, nword, nline;
%}

%%
\n		{ nline++; nchar++; }
[^ \t\n]+	{ nword++, nchar += yyleng; }
.		{ nchar++; }
%%

int yywrap(){
	return 1;
}

int main(){
	yylex();
	printf("%d\t %d\t %d\n", nchar, nword, nline);

	return 0;
}