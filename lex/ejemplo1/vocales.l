%{ 
    #include <stdio.h>
%}
c [^aeiou]
%option noyywrap
%option yylineno
%%
{c}*a+{c}*e+{c}*i+{c}*o+{c}*u+{c}* {printf("palabra reconocida %s \n",yytext);}
.* {printf("palabra no reconocida %s\n",yytext);}
%%
main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}