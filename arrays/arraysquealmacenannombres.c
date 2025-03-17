#include <stdio.h>

#define TAM 20
int main (){
	
	char aux[TAM],nombre1[TAM],nombre2[TAM];
	
		printf("digite su nombre1 ");
	gets(nombre1);

		printf("digite su nombre2 ");
	gets(nombre2);
	
	strcpy(aux,nombre1);
	strcpy(nombre1,nombre2);
	strcpy(nombre2,aux);
	
	printf("\n el primer nombre es : %s",nombre2);
	printf("\n el segundo nombre  es : %s",nombre1);
	
	
	return 0;
}
