%{
#include<stdio.h>
%}
%option yylineno
%option noyywrap
%%
(a|b)*a(a|b)(a|b) {printf("Cadena valida %s\n",yytext);}
.* {printf("Cadena no valida%s\n",yytext);}
%%

main(int argc, char *argv[]){
	
	if(argc >1){
		yyin = fopen(argv[1],"r");
	}else{
		printf("No se puede abrir el archivo");
	}
	yylex();
}