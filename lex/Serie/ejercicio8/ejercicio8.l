%{ 
    //h)	(a|b)*ab(a|b)+(a|b)
    #include <stdio.h>
%}

selec [ab]
conca "ab"

%option noyywrap
%option yylineno

%%
{selec}*{conca}{selec}+{selec} {printf("cadena reconocida %s \n", yytext);}
.* {printf("cadena no reconocida %s\n", yytext);}
%%

main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}
