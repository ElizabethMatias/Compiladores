%{ 
    //((0-1)(0-9)|2(0-3):(0-5)(0-9)
    #include <stdio.h>
%}

Rango1 [0-9]
Rango2 [0-1]
Rango3 [0-5]
Rango4 [0-3]

%option noyywrap
%option yylineno

%%
({Rango2}{Rango1}|2{Rango4}):{Rango3}{Rango1} {printf("cadena reconocida %s \n", yytext);}
.* {printf("cadena no reconocida %s\n", yytext);}
%%

main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}
