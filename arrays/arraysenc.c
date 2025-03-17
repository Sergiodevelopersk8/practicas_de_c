#include <stdio.h>

/*arrays*/

int main (){
	
int i;
float a[5];	

for(i=0;i<5;i++){
	
	printf("\n %i digite un numero \n",i+1);
	scanf("%f",&a[i]);
}


printf("\n\n"); 


for(i=0;i<5;i++){
	
	
	printf("%.2f\n",a[i]);
}


/*
int a [5]={1,2,3,4,5};

int i;

for(i=0; i<5; i++){
printf("%i, " ,a[i]);
//imprime lo que este en la posicion 0
}
*/

	
	
	
	return 0;
}
