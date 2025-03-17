#include <stdio.h>

/*

suma de primeros numeros

*/

int main ()
{
	
int i=1,suma=0,n;

printf("Digite la cantidad de numeros a sumar: ");
scanf("%i",&n);

while(i<=n)
{
	
	suma += i;
	i++;
}

printf("La suma es: %i",suma);

return 0;	
}
