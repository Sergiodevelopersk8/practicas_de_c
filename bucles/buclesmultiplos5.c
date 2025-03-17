#include <stdio.h>

int main(){
	
int n,i;

printf("escribe el numero hasta que quieres\n");
scanf("%i",&n);

i=0;
while(i<=n){
	
	if(i%5==0){
		printf("%i es un multiplo de 5\n");
	}
	i++;
}	
	

return 0;
}
