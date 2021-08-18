#include <stdio.h>
#include <stdlib.h>
//b)aaa*(ba)+
void edo0();
void edo1();
void edo2();
void edo3();
void edo4();
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
		edo1();
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
	else
		printf("Cadena no valida\n");
}
void edo3(){
	i++;
	if (cadena[i]=='a')
		edo4();
	else if (cadena[i]=='b')
		edo3();
	else
		printf("Cadena no valida\n");
}
void edo4(){
	i++;
	if (cadena[i]=='b')
		edo3();
	else if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else
		printf("Cadena no valida\n");
}
