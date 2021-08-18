%{
#include <stdio.h>
%}
%option noyywrap
%option yylineno
%%
a(a|b)*b {printf("Cadena valida %s\n",yytext);}
.* {printf("Cadena no valida %s\n",yytext);}
%%
main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}