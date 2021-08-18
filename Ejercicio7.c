#include <stdio.h>
#include <stdlib.h>
//g)((?|b)ab*)*
void edo0();
void edo1();
void edo2();
void edo3();
int i=-1;
char cadena[30];
int main (){
	printf("Dame la cadena\n");
	fflush(stdin);
	gets(cadena);
	edo0();
	return 0;
}
void edo0(){
	i++;
	if (cadena[i]=='a')
		edo2();
	else if (cadena[i]=='b')
		edo1();
	else if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else
		printf("Cadena no valida\n");
}
void edo1(){
	i++;
	if (cadena[i]=='a')
		edo2();
	else
		printf("Cadena no valida\n");
}
void edo2(){
	i++;
	if (cadena[i]=='a')
		edo2();
	else if (cadena[i]=='b')
		edo3();
	else if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else
		printf("Cadena no valida\n");
}
void edo3(){
	i++;
	if (cadena[i]=='b')
		edo3();
	else if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else
		printf("Cadena no valida\n");
}
