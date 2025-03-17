#include <stdio.h>


void copiandoarray(int a[],int b[],int tamano);


int main (){
	
int arrayuno[5]={2,3,4,5,6};

int arraydos[5];


printf("copiando  array uno al dos\n");


copiandoarray(arrayuno,arraydos,5);	
	
	
	return 0;
}


void copiandoarray(int a[],int b[],int tamano){
	
	
	int i;
	for(i=0;i<tamano;i++){
		
		b[i]= a[i];
		
	}
	
	
	for(i=0;i<tamano;i++){
		printf ("%i",b[i]);
	}
	
}





