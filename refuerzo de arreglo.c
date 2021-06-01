#include <stdio.h>

int main (){
	

int arr[2][3][5]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60};
int l,m,n;

for(l=0; l<2;l++){
	for(m=0;m<3;m++){
		for(n=0;n<5;n++){
			
			printf("Arreglos [%d][%d][%d]: %d\n", l,m,n,arr[l][m][n]);
			
		}
	}
}




	
	return 0;
}
