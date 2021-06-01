#include <stdio.h>


int main (){
	
	int matriz [50][50],filas,columnas,i,j;
	
	
	printf("escribe el numeros de filas: \n");
	scanf("%i",&filas);
	printf("escribe el numero de columnas \n");
	scanf("%i",&columnas );
	printf("\n\n");
	
	for(i=0;i<filas; i++){
		
		for(j=0;j<columnas;j++){
			
			printf("Escribe el numero de la posicion [%i][%i]",i+1,j+1);
			
			scanf("%i",&matriz[i][j]);
		}
	}
	
	
	
	for(i=0;i<filas;i++){
		
		for(j=0;j<columnas;j++){
			printf("%i ",matriz[i][j]);
		}
		
		printf("\n");  
	}
	
	return 0;
}
