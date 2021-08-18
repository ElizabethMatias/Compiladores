%{ 
    //L|(X{1-3}|XL)?(V?I{1-3}?|IV|IX))?
    #include <stdio.h>
%}

%option noyywrap
%option yylineno

%%

(L|(X{1,3}|XL)?(V?I{1,3}?|IV|IX)?) {printf("cadena reconocida %s \n", yytext);}
.* {printf("cadena no reconocida %s\n", yytext);}

%%

main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}
