#include <stdio.h>

int main(){
	
/*	int hola [2][3]={1,2,3,4,5,6};
	
	printf("hola[1][2]=%d\n",hola[1][2]);*/
	
	
	/*	int hola [2][2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
	
	printf("hola[1][2]=%d\n",hola[1][2]);*/
	
	
			int hola [2][2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
	

int i,j,k;


for(i=0;i<2;i++){
	for(j=0; j<2;j++){
		for(k=0; k<3; k++){
			printf("%d 	",hola[i][j][k]);
		}
		
		printf("\n");
		
	}
	
	printf("\n");
}
	
	
	return 0;
}
