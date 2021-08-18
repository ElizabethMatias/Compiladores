%{ 
    //(A-Z)(a-z)+
    #include <stdio.h>
%}

mayuscula [A-Z]
minuscula [a-z]

%option noyywrap
%option yylineno

%%
{mayuscula}{minuscula}+ {printf("cadena reconocida %s \n", yytext);}
.* {printf("cadena no reconocida %s\n", yytext);}
%%

main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}
