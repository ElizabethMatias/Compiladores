#include <stdio.h>
#include <stdlib.h>
void edo0();
void edo1();
void edo2();
void edo3();
void edo4();
void edo5();
char cadena[20];
int contador=-1;
int main (){
	int contador2=0;
	FILE *archivo=fopen("vocales.txt","r");
	while (feof(archivo)==NULL){
		cadena[contador2]=fgetc(archivo);
		if(cadena[contador2]==' '||cadena[contador2]=='\n'||cadena[contador2]=='\0'||cadena[contador2]=='\t'){
			edo0();
		}
		contador2++;
	}
	fclose(archivo);
}
void edo0(){
	contador++;
	if (cadena[contador]=='a')
		edo1();
	else if(cadena[contador]=='e'||cadena[contador]=='i'||cadena[contador]=='o'||cadena[contador]=='u'||cadena[contador]==' '||cadena[contador]=='\0')
		printf("Cadena no valida\n");
	else
		edo0();
}
void edo1(){
	contador++;
	if (cadena[contador]=='e')
		edo2();
	else if(cadena[contador]=='i'||cadena[contador]=='o'||cadena[contador]=='u'||cadena[contador]==' '||cadena[contador]=='\0')
		printf("Cadena no valida\n");
	else
		edo1();
}
void edo2(){
	contador++;
	if (cadena[contador]=='i')
		edo3();
	else if(cadena[contador]=='a'||cadena[contador]=='o'||cadena[contador]=='u'||cadena[contador]==' '||cadena[contador]=='\0')
		printf("Cadena no valida\n");
	else
		edo2();
}
void edo3(){
	contador++;
	if (cadena[contador]=='o')
		edo4();
	else if(cadena[contador]=='a'||cadena[contador]=='e'||cadena[contador]=='u'||cadena[contador]==' '||cadena[contador]=='\0')
		printf("Cadena no valida\n");
	else
		edo3();
}
void edo4(){
	contador++;
	if (cadena[contador]=='u')
		edo5();
	else if(cadena[contador]=='a'||cadena[contador]=='e'||cadena[contador]=='i'||cadena[contador]==' '||cadena[contador]=='\0')
		printf("Cadena no valida\n");
	else
		edo4();
}
void edo5(){
	contador++;
	if(cadena[contador]=='a'||cadena[contador]=='e'||cadena[contador]=='i'||cadena[contador]=='o')
		printf("Cadena no valida\n");
	else if(cadena[contador]==' '||cadena[contador]=='\0')
		printf("Cadena Valida");
	else
		edo5();
}
