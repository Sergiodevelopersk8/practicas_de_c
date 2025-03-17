#include <stdio.h>

#define TAM 50
int main (){
	
	int i,numero[TAM],pares[TAM],impares[TAM];
	int n;
	
/*	srand(time(Null));*/
	
	for(i=0;i<TAM;i++){
		numero[i]=rand()% + (1000+1);
	}
	
	
	printf("Pares:\n\n");
	
	for(i=0;i<TAM;i++){
		
		if(numero[i]%2==0){
			printf("%i.\n",numero[i]);
			
		}
	}
	
	printf("\nImpares:\n\n");
	
	for(i=0;i<TAM;i++){
		
		if(numero[i]%2!=0){
			printf("%i.\n",numero[i]);
			
		}
	}
	
	return 0;
}
