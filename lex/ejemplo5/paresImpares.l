%{ 
    //Cadenas donde a par b impar
    #include <stdio.h>
%}
%option noyywrap
%option yylineno
%%
b?((aa)+|(bb)+|(abab)+|(baba)+|(abba)+|(baab)+|((b|a)((ab)|(ba))(a|b))|b?)b? {printf("Cadena reconocida %s\n",yytext);}
.* {printf("Cadena no reconocida %s\n",yytext);}
%%

main(int argc, char *argv[]){
    if (argc >1)
        yyin=fopen(argv[1],"r");
    else 
        printf("ERROR\n");
    yylex();
}