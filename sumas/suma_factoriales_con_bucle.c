#include <stdio.h>

/*

suma de factoriales

*/

int main ()
{
	
int i,factorial=1,suma=0,n;

printf("Digite la cantidad de factorial a sumar: ");
scanf("%i",&n);

for(i=1;i<=n;i++)
{
factorial *= i;
suma += factorial;

}

printf("La suma es: %i",suma);

return 0;	
}
