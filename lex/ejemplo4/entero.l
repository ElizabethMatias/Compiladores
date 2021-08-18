%{ 
    #include <stdio.h>
%}
entero [0-9]
real ({entero}*\.{entero}*)
letra [A-Za-z]
id (_|{letra})(_|{letra}|{entero})*
%option noyywrap
%option yylineno
%%
{entero}* {printf("Entero reconocido %s\n",yytext);}
{real} {printf("Real reconocido %s\n",yytext);}
{id} {printf("Identificador reconocido %s\n",yytext);}
.* {printf("Palabra no reconocida %s\n",yytext);}
%%
main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}