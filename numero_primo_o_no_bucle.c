#include <stdio.h>

/*
hacer  un bucle do..while para imprimir
*/

int main ()
{
	
int i=0,numero,cont=0;

printf("Digite el numero: ");
scanf("%i",&numero);

for(i = 1;i<= numero; i++)
{
	if(numero%i==0)
	{
		cont++;
	}
}


if(cont>2)
{
	printf("\n El numero es compuesto");
}

else
{
	printf("el numero es primo");
}
return 0;	
}
