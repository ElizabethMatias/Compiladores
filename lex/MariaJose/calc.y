%{
#include <stdio.h>
void yyerror(char *s);
%}

%union {
	float f;
}

%token <f> NUM
%type <f> E T F

%%

S : E 				{printf("%f\n", $1);}
  ;

E : E '+' T 		{$$ = $1 + $3;}
  | E '-' T 		{$$ = $1 - $3;}
  | T
  ;

T : T '*' F 		{$$ = $1 * $3;}
  | T '/' F 		{$$ = $1 / $3;}
  | F 				{$$ = $1;}
  ;

F : '(' E ')' 		{$$ = $2;}
  | '-' F 			{$$ = -$2;}
  | NUM 			{$$ = $1;}
  ;

%%

void yyerror(char *s){
	printf("Instruccion invalida para el lenguaje\n");
}

int main(void){
	return yyparse();
}