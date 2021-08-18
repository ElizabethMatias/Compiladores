#include <stdio.h>
#include <stdlib.h>
void edo1();
void edo2();
int i=-1;
char cadena[30];
int main (){
	
	printf("Dame la cadena\n");
	fflush(stdin);
	gets(cadena);
	edo1();
	return 0;
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
	if (cadena[i]=='b')
		edo2();
	else if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else
		printf("Cadena no valida\n");
}
