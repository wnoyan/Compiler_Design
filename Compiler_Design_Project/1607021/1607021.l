char [a-zA-Z]
digit [0-9]
special [$_@]
space " "
newline "\n"
Datatype "integer"|"double"|"char"|"void"
Operator "Assign"|"Plus"|"Minus"|"Divide"|"Multiply"
Relational_Operator "GT"|"LT"|"GE"|"LE"|"And"|"Or"|"EQU"|"NEQU"

%{
	#include "1607021.tab.h"
	#include <string.h>
	#include <stdio.h>
	int yyparse();
	int yyerror();
	int yylex();
%}


%%
"~".*".h" 						{ /*This is single line comment*/ }
"//".*    						{ /*This is single line comment*/ }
"##".*"##"    						{ /*This is multiple line comment*/ }

{space}|{newline}				{}
";" 							{ return SM; }
"," 							{ return CM; }

{digit}+ 						{
									yylval.val = atoi(yytext);
									return NUM;
								}					

"method_main" 					{ return MAIN; }

"method_PrintVariable" 			{ return PRINTVAR; }
"method_PrintString" 			{ return PRINTSTR; }
"method_PrintNewLine" 			{ return PRINTLN; }

"integer" 						{ return INT; }
"double" 						{ return DOUBLE; }
"char" 							{ return CHAR; }

"(" 							{ return PB; }
")" 							{ return PE; }

"{" 							{ return BB; }
"}" 							{ return BE; }

"Assign" 						{ return ASGN; }
"Plus" 							{ return PLUS; }
"Minus" 						{ return MINUS; }
"Multiply" 						{ return MULT; }
"Divide" 						{ return DIV; }

"LT" 							{ return LT; }
"GT" 							{ return GT; }
"LE" 							{ return LE; }
"GE" 							{ return GE; }
"EQU" 							{ return EQU; }
"NEQU" 							{ return NEQU; }

"ElseIf" 						{ return ELSEIF; }
"If" 							{ return IF; }
"Else" 							{ return ELSE; }

"For" 							{ return FOR; }
"INC" 							{ return INC; }
"..." 							{ return TO; }

"exp"							{ return EXP; }
"gcd"							{ return GCD; }
"max"							{ return MAX; }

"Switch" 						{ return SWITCH; }
"default" 						{ return DEFAULT; }
":" 							{ return COL; }

"\""(.)*"\"" 					{ 
									strcpy(yylval.text,yytext);
								    return STR;
								}


"method_"({char}|{digit}|{special})+ 	{ return FUNCTION; }

"var_"({char}|{digit}|{special})+ 		{   
											strcpy(yylval.text,yytext);
											return ID;
										}

. {}
%%
