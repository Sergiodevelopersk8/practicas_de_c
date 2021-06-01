#include <stdio.h>


/*hacer un array de 10 numeros desordenados 
luego ordenarlos con el metodo burbuja despues pedir 
un dato a buscar y utilizar la busqueda binaria para determinar 
si existen o no

*/


int main(){
	
	int a[10] = {1,3,5,7,9,2,4,6,8,10};
	int i,j,aux,dato,inf,sup,mitad;
	char band='F';
	
	//metodo burbuja
	
	for(i=0; i<10;i++){
		for(j=0;j<10;j++){
			if(a[j]>a[j+1]){
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
			}
		}
	}
	
	for(i=0;i<10;i++){
		
		printf("%i ",a[i]);
	}
	
	printf("\n escribe un numero: ");
	scanf("%i",&dato);
	
	
	/*Busqueda binaria*/
	
	inf=0;
	sup=10;
	
	while(inf <= sup){
		mitad = (inf+sup)/2;
		
		if(a[mitad] == dato){
			band = 'V';
			break;
		}
		
		 if(a[mitad] > dato){
		 	sup = mitad;
		 	mitad = (inf+sup)/2;
		 }
		 
		 if(a[mitad]< dato){
		 	inf = mitad;
		 	mitad=(inf+sup)/2;
		 }
	}
	
	if(band=='F'){
		printf("el numero no existe\n");
		
	}
	else if(band=='V'){
		printf("El numero existe en la posicion %i",mitad);
	}
	return 0;
}
