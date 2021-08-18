%{ 
    //d)(123*4567+)?
    #include <stdio.h>
%}

con1 "12"
con2 "456"

%option noyywrap
%option yylineno

%%
{con1}3*{con2}7+ {printf("cadena reconocida %s \n", yytext);}
.* {printf("cadena no reconocida %s\n", yytext);}
%%

main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}
