%%
[+]?[0-9]+	{printf("Positive Integer!\n");}
[-][0-9]+	{printf("Negative Integer!\n");}
%%

int yywrap(){
	return 1;
}

int main(){
	printf("Positive and Negative Integer Detection!\n");
	yylex();

	return 0;
}