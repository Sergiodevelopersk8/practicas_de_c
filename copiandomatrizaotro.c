#include <stdio.h>

int main(){
	
	
	int matriz1[2][2]={{2,5,},{6,4}};
	
	
	int matriz2[2][2],i,j;
	
	for(i=0;i<2;i++){
		
		for(j=0;j<2;j++){
			matriz2[i][j]=matriz1[i][j];
		}
		
	}
	
		for(i=0;i<2;i++){
		
		for(j=0;j<2;j++){
			printf("%i ",matriz2[i][j]);
		}
		printf("\n ");
	}
	
	
	

	
	return 0;
}
