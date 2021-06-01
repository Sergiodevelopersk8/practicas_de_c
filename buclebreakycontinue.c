#include <stdio.h>

int main(){
	
	int multiplo;
	printf("escribe el numero que sera ignorado\n");
	scanf("%i",&multiplo);
	int i;
	for( i=0; i<100; i++){
		if(i==multiplo)
		continue;
		printf("\n%i",i);
	}
	
	printf("\n\n");
	
	/*el ciclo esta definido hasta 99*/
	
	for( i=0; i<100; i++){
		if(i==24)
		break;
		printf("\n%i",i);
	}
	
	
	return 0;
}
