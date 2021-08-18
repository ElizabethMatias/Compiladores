%{ 
    //e)(aa)*(b|a)(bab)*
    #include <stdio.h>
%}

cad1 "aa"
cad2 "bab"
selec [ab]

%option noyywrap
%option yylineno

%%
{cad1}*{selec}{cad2}* {printf("cadena reconocida %s \n", yytext);}
.* {printf("cadena no reconocida %s\n", yytext);}
%%

main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}
