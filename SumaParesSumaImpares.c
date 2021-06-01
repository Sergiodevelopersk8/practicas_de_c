// Sumar 1-2+3-4...

/*
impares (+)
pares (-)

suma_pares = -2 -4 -6 ...
suma_impares = 1 + 3 + 5...

suma = suma_pares + suma_impares

1-2+3-4+5-6
-1+3-4+5-6
2-4+5-6
-2+5-6
3-6
-3
4 - 7 = -3
-4 - 8 = -12
5 - 9 = -4
-5 - 10 = -15

*/

#include<stdio.h>

int main(){

	int i = 1, suma = 0,suma_pares = 0,suma_impares = 0,n,ne;
	
	printf("Digite el total de elementos de la serie: ");scanf("%i",&n);
	
	while(i<=n){
		if(i%2 == 0){
			ne = i * (-1); //* 1-1=0   -5-5=-10
			suma_pares += ne;
		}else{
			suma_impares += i;
		}
		i++;	
	}
	
	suma = suma_pares + suma_impares;
	
	printf("\n La suma total es: %i",suma);	
	
	return 0;
}
