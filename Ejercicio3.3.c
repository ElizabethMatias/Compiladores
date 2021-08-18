//L|(X{1-3}|XL)?(V?I{1-3}?|IV|IX)?)
#include <stdio.h>
#include <stdlib.h>
void edo0();void edo1();void edo2();void edo3();
void edo4();void edo5();void edo6();void edo7();
void edo8();
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
	if (cadena[i]=='L')
		edo8();
	else if (cadena[i]=='X')
		edo1();
	else if (cadena[i]=='V')
		edo4();
	else if (cadena[i]=='I')
		edo5();
	else
		printf("Cadena no valida\n");
}
void edo1(){//viene de X
	i++;
	if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else if (cadena[i]=='X')
		edo2();
	else if (cadena[i]=='L')
		edo3();
	else if (cadena[i]=='V')
		edo4();
	else if (cadena[i]=='I')
		edo5();
	else
		printf("Cadena no valida\n");
}
void edo2(){//viene de XX
	i++;
	if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else if (cadena[i]=='X')
		edo3();
	else if (cadena[i]=='V')
		edo4();
	else if (cadena[i]=='I')
		edo5();
	else
		printf("Cadena no valida\n");
}
void edo3(){//Viene de XL
	i++;
	if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else if (cadena[i]=='V')
		edo4();
	else if (cadena[i]=='I')
		edo5();
	else
		printf("Cadena no valida\n");
}
void edo4(){//[0 al 9] viene de V
	i++;
	if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else if (cadena[i]=='I')
		edo6();
	else
		printf("Cadena no valida\n");
}
void edo5(){//viene de I
	i++;
	if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else if (cadena[i]=='I')
		edo7();
	else if (cadena[i]=='X'||cadena[i]=='V')
		edo8();
	else
		printf("Cadena no valida\n");
}
void edo6(){//viene de VII
	i++;
	if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else if (cadena[i]=='I')
		edo6();
	else
		printf("Cadena no valida\n");
}
void edo7(){//{viene de II
	i++;
	if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else if (cadena[i]=='I')
		edo8();
	else
		printf("Cadena no valida\n");
}
void edo8(){//Fin de cadena
	i++;
	if (cadena[i]=='\0')
		printf("Cadena valida\n");
	else
		printf("Cadena no valida\n");
}

