#include <stdio.h>

/*

suma de numeros pares de 1 hasta n 

*/

int main ()
{
	
int i,cont=0,suma=0,n;

printf("Digite la cantidad de elementos: ");
scanf("%i",&n);

for(i=1;i<=n;i++)
{
	if(i % 2 == 0)
	{
		suma +=i;
		cont++;
	}
}


printf("\n La suma es: %i",suma);

printf("\n La cantidad de numeros es: %i",cont);

return 0;	
}
