#include <stdio.h>

/*
Escribe  un programa en el cual se solicite al usuario llenar un arreglo de 10 elementos

(unicamente 0´s y 1´s) Una vez que el usarios llene el arreglo con el numero binario

podra seleccionar entre alguna codificación 


a) binario puro 

b)punto fijo (6 bit entero y 4 bit decimal)

c) complemento de 2

el programa realizara la conversión y como salida mostrara el resultado en representación decimal
 

*/

void binariopuro(int arreglo[]);

void puntofijo(int arreglo[]);

void complementoa2(int arreglo[]);

int main(){
	
	

int arreglo[10];
int opcion;


printf("Este programa hara una converción de binario a tres tipos de codificacion \n ");
printf("primero llenar el arreglo de 10 elementos \n\t solo usa cero y uno (0 1)\n ");

int i;
for(i=0;i<10;i++)
{
	printf("escribe el elemento [%i] del arreglo \n",i);
	scanf("%d",&arreglo[i]);


}

printf("el arreglo queda de esta manra \n");

int a;

for(a=0;a<10;a++){
	
	
	printf("%d \n",arreglo[a]);

}

printf("\nEscoge la opcion que deseas\n1)Binario puro\n2) Punto fijo (6 bit entero  y 4 bits decimal )\n3 ");

scanf("%i",&opcion);


switch(opcion){
	case 1:
		
		printf("BINARIO PURO\n\n");
		
		binariopuro(arreglo);
		
	break;
	
	
	case 2:
		
	printf("SELECCIONASTE PUNTO FIJO\n\n");	
		
		puntofijo(arreglo);
	break;
	
	case 3:
		
		printf("SELECCIONASTE COMPLEMENTO A2\n\n");
		
		complementoa2(arreglo);
		
	break;
	
	
}




return 0;
}




void binariopuro(int arreglo[]){

int i,valor=512,summa=0;

for(i=0; i<10; i++){
	
	if(arreglo[i]==1){
		summa +=valor;
		
	}
	valor /=2;
	
}

	printf("El valor en decimal es : %i\n",summa);
	
}

void puntofijo(int arreglo[]){
	
	int i, a,suma=32,valor=32;
	
	float sumadecimal=0,valordecimal = 0.5;
	
	/*parte entera*/
	
	for(i=0; i<6 ;i++){
		if(arreglo[i]==1){
			suma += valor;
		}
		valor/=2;
	}
	
	//parte decimal
	
	for(a=6;a<10;a++){
		
		if(arreglo[a]==1){
			sumadecimal +=valordecimal;
		}
		valordecimal /=2;
	}
	
	
	printf("el valor del punto fijo es %.4f\n",suma+sumadecimal);
	
}

void complementoa2(int arreglo[]){
	
	int posicion;
	
	for(posicion=0; posicion<10; posicion++){
		
		if(arreglo [posicion]==1){
			
			arreglo[posicion]=0;
			
			
		}
		
		else{
			arreglo[posicion]=1;
		}
	}
	
	posicion=9;
	
	while(arreglo[posicion]==1){
		
		arreglo[posicion]=0;
		posicion--;
		
		if(arreglo[posicion]==0){
			arreglo[posicion]=1;
			break;
		}
	}
	int imprecion;
	if(arreglo[posicion]==0){
		arreglo[posicion]=1;
		for(imprecion=0;imprecion<10; imprecion++){
			printf("[%i]\n",arreglo[imprecion]);
		}
		
	}
	
	
	
	
}

