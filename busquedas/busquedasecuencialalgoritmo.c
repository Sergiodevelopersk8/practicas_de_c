#include <stdio.h>

/*

Hacer una lista de 10 numeros luego pedirle al usuario que digite un numero  
con una busqueda secuencial determinar si el numero existe en la lista o no 
e indicar en que posicion se encuentra  

*/


int main(){
	
	
	int a[10]={2,4,6,8,0,1,3,5,7,9};
	int i,dato;
	
	char band='F';

printf("Escribe un numero\n");

scanf("%i",&dato);


/*Busqueda secuencial*/

i=0;

while((band=='F')&&(i<10)){
	
	if(a[i]==dato){
		
		band='V';

	}
	i++;
}	

if(band=='F'){
	printf ("el numero no existe en la lista \n");
}
else if(band=='V'){
	printf("el numero existe en la posicion  %i ",i-1);
}
	
	return 0;
}
