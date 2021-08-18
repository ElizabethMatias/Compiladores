%{ 
    //ba(a|b)*c+
    #include <stdio.h>
%}

cad "ba"
selec [ab]

%option noyywrap
%option yylineno

%%
{cad}{selec}*c+ {printf("cadena reconocida %s \n", yytext);}
.* {printf("cadena no reconocida %s\n", yytext);}
%%

main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}
