%%
.*	printf("Character Found!\n");
%%

int yywrap(){
	return 1;
}

int main(){
	yylex();
	printf("My First Flex Program!\n");

	return 0;
}