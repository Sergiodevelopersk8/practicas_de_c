#include <stdio.h>

/*int main (){
	
	int matriz[2][3]={1,2,3,11,12,13};
	int filas,columnas,i;
	
	for(filas=0;filas<2;filas++){
		
		for(columnas=0;columnas<3;columnas++){
			printf("%i",matriz[filas][columnas]);
		}
		printf("\n");
	}
	
	return 0;
}*/


/*
int main (){
	
	float matriz[2][3];
	int j,i;
	
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			printf("escribe un numero matriz [%i][%i]: ",i+1,j+1); 
			scanf("%f",&matriz[i][j]);
		}
		printf("\n");
	}
	
	fflush(stdin);
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%.2f",matriz[i][j]);
		}
	}
	printf("\n");
	return 0;
}
*/

int main (){
	
	char matriz[2][3]={'a','b','c','d','e','f'};
	int i,j;
	
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			printf("%c ",matriz[i][j]); 
			/*scanf("%f",&matriz[i][j]);*/
		}
		printf("\n");
	}
	

	return 0;
}
