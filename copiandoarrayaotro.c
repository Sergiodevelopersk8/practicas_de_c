#include <stdio.h>

int main(){
	
	
	int array1[5]={2,5,6,4,8};
	
	
	int array2[5];
	
	
	
	printf("copiando arrays.....\n");
	
	copiandoArray(array1,array2,5);
	
	return 0;
}


void copiandoArray(int a[], int b[],int tamanio){
	
	int i;
	
	for(i=0; i<tamanio;i++){
		
		b[i]=a[i];
	}
	
	for(i=0;i<tamanio;i++){
		printf("%i , ",b[i]);
	}
}
