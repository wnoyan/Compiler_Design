%%
[+-]?[0-9]+[.][0-9]+|[+-]?[.][0-9]+|[1-9]+[e][+-][0-9]+	printf("Floating Value!\n");
%%

int yywrap(){
	return 1;
}

int main(){
	yylex();
	printf("Floating Value Recognition!\n");

	return 0;
}