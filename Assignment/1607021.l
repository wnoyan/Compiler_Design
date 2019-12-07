keyword		"number"|"method"|"loop"|"print"|"if"|"elif"|"else"

operator 	"assign"|"<="|"+"|"=="|"!="

punctuation 	"`"|":"|";"

mf 		.*\n*

%{
   #include<string.h>

   int key = 0;
   int key_array[7] = {0,0,0,0,0,0,0};
   char key_str[10][10];

   int var = 0;
   char var_str[10][10];

   int oper = 0;
   int oper_array[5] = {0,0,0,0,0};
   char oper_str[10][10];

   int punc = 0;
   int punc_array[3] = {0,0,0};
   char punc_str[10][10];
%}

%%
[-][-].*	{printf("Single Line Comment Found: %s\n", yytext);}

"~".*		{	yytext[0]=' ';
			printf("Library Found%s\n", yytext);}

"$"{mf}*"$"	{printf("Single Line Comment Found: --main function\n");}

"(".*")" {printf("Function Found\n", yytext);}

{keyword} {if(strcmp("number",yytext)==0)
           {
               if(key_array[0]!=1)
               {
               	key++;
               	key_array[0]=1;
		strcpy(key_str[0], "number");
               }
           }
           else if(strcmp("method",yytext)==0)
           {
               if(key_array[1]!=1)
               {
               	key++;
               	key_array[1]=1;
		strcpy(key_str[1], "method");
               }
           }
           else if(strcmp("loop",yytext)==0)
           {
               if(key_array[2]!=1)
               {
               	key++;
               	key_array[2]=1;
		strcpy(key_str[2], "loop");
               }
           }
           else if(strcmp("print",yytext)==0)
           {
               if(key_array[3]!=1)
               {
               	key++;
               	key_array[3]=1;
		strcpy(key_str[3], "print");
		
               }
           }
           else if(strcmp("if",yytext)==0)
           {
               if(key_array[4]!=1)
               {
               	key++;
               	key_array[4]=1;
		strcpy(key_str[4], "if");
               }
           }
           else if(strcmp("elif",yytext)==0)
           {
               if(key_array[5]!=1)
               {
               	key++;
               	key_array[5]=1;
		strcpy(key_str[5], "elif");
               }
           }
           else if(strcmp("else",yytext)==0)
           {
               if(key_array[6]!=1)
               {
               	key++;
               	key_array[6]=1;
		strcpy(key_str[6], "else");
               }
           }
          }

{operator} {if(strcmp("assign",yytext)==0)
            {
               if(oper_array[0]!=1)
               {
               	oper++;
               	oper_array[0]=1;
		strcpy(oper_str[0], "assign");
               }
            }
	    else if(strcmp("<=",yytext)==0)
            {
               if(oper_array[1]!=1)
               {
               	oper++;
               	oper_array[1]=1;
		strcpy(oper_str[1], "<=");
               }
            }
            else if(strcmp("+",yytext)==0)
            {
               if(oper_array[2]!=1)
               {
               	oper++;
               	oper_array[2]=1;
		strcpy(oper_str[2], "+");
               }
            }
            else if(strcmp("==",yytext)==0)
            {
               if(oper_array[3]!=1)
               {
               	oper++;
               	oper_array[3]=1;
		strcpy(oper_str[3], "==");
               }
            }
            else if(strcmp("!=",yytext)==0)
            {
               if(oper_array[4]!=1)
               {
               	oper++;
               	oper_array[4]=1;
		strcpy(oper_str[4], "!=");
               }
            }
	   }

{punctuation} {if(strcmp("`",yytext)==0)
               {
                 if(punc_array[0]!=1)
                  {
               	   punc++;
               	   punc_array[0]=1;
		   strcpy(punc_str[0], "`");
                  }
               }
	       else if(strcmp(":",yytext)==0)
               {
                 if(punc_array[1]!=1)
                  {
               	   punc++;
               	   punc_array[1]=1;
		   strcpy(punc_str[1], ":");
                  }
               }
               else if(strcmp(";",yytext)==0)
               {
                 if(punc_array[2]!=1)
                  {
               	   punc++;
               	   punc_array[2]=1;
		   strcpy(punc_str[2], ";");
                  }
               }
	      }

^[a - z A - Z _][a - z A - Z 0 - 9 _]*	{ strcpy(var_str[var], yytext); var++; }

\n+ 
.
%%

int yywrap()
{
    return 1;
}

int main()
{
	yyin = freopen( "input.c", "r" ,stdin);

	yyout = freopen( "output.txt","w",stdout);

	yylex();

    	printf("\n\n------------------------------------\n\n");

	int i = 0;	

    	printf("Keywords: %d\n", key);
        for(i = 0; i < key; i++){
          if(key_array[i] == 1){
            printf("%s\n", key_str[i]);
          }
        }
	
	printf("\n\nOperators: %d\n", oper);
        for(i = 0; i < oper; i++){
          if(oper_array[i] == 1){
            printf("%s\n", oper_str[i]);
          }
        }

	printf("\n\nPunctuations: %d\n", punc);
        for(i = 0; i < punc; i++){
          if(punc_array[i] == 1){
            printf("%s\n", punc_str[i]);
          }
        }

        printf("\n\nVariables: %d\n",var);
        for(i = 0; i < var; i++){
            printf("%s\n", var_str[i]);
        }

	return 0;
}