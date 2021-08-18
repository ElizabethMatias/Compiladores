#include <stdio.h>
#include <stdlib.h>
//d)(123*4567+)?
void edo0();
void edo1();
void edo2();
void edo3();
void edo4();
void edo5();
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
	if (cadena[i]=='1')
		edo1();
	else if(cadena[i]=='\0')
		printf("Cadena valida\n");
	else
		printf("Cadena no valida\n");
}
void edo1(){
	i++;
	if (cadena[i]=='2')
		edo2();
	else
		printf("Cadena no valida\n");
}
void edo2(){
	i++;
	if (cadena[i]=='3')
		edo2();
	else if (cadena[i]=='4')
		edo3();
	else
		printf("Cadena no valida\n");
}
void edo3(){
	i++;
	if (cadena[i]=='5')
		edo4();
	else
		printf("Cadena no valida\n");
}
void edo4(){
	i++;
	if (cadena[i]=='6')
		edo5();
	else
		printf("Cadena no valida\n");
}
void edo5(){
	i++;
	if (cadena[i]=='7')
		edo6();
	else
		printf("Cadena no valida\n");
}
void edo6(){
	i++;
	if (cadena[i]=='7')
		edo6();
	else if(cadena[i]=='\0')
		printf("Cadena valida\n");
	else
		printf("Cadena no valida\n");
}
