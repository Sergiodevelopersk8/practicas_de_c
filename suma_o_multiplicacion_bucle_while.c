#include <stdio.h>

/*
hacer  un bucle do..while para imprimir
*/

int main ()
{
	
int i=1,numero,suma,mult=1;

printf("Digite el numero: ");
scanf("%i",&numero);


if(numero>10)
{
	
	
while(i<=10)

	{
		mult =mult*i;
	i++;
	}
	printf("\n la multiplicacion es: %i ",mult);
	
}

else
{
	while(i<=10)
	{
		suma=suma+i;
		i++;
	}
	
	printf("\n la suma es: %i",suma);
}


return 0;	
}
