%{
	#include<math.h>
%}

DIGIT	[0-9]
ID	[a-z][a-z0-9]*

%%
{DIGIT}+		{printf("An Integer: %s (%d)\n", yytext, atoi(yytext));}

{DIGIT}+[.]{DIGIT}*	{printf("An Float: %s (%g)\n", yytext, atof(yytext));}

if|then|begin|end|procedure|function	printf("A Keyword: %s\n", yytext);

{ID}			{printf("An Identifier: %s\n", yytext);}

[ \t\n]+
.			printf("Unrecongnized Character: %s\n", yytext);
%%

int yywrap(){
	return 1;
}

int main(){
	printf("\nAll in One!\n");
	yylex();

	return 0;
}