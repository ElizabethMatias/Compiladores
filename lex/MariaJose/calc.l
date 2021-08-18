%{
#include "y.tab.h" 
void yyerror(char *s);
int yylex();
%}

%%

[0-9]+(\.[0-9]+)?([eE][0-9]+)? 		{yylval.f = atof(yytext); return NUM;}
[-+()*/]							{return yytext[0];}
[ \t\f\n] 						{;}

%%
int yywrap(void) 	{return 1;}