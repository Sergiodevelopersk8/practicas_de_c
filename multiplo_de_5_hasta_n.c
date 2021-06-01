#include <stdio.h>

/*
hacer  un bucle do..while para imprimir
*/

int main ()
{
	
int i=1,n;

printf("Digite el total de elementos: ");
scanf("%i",&n);

while (i<=n)
{
	
if(i%5==0)
{
	printf("%i\n",i);
}
	i++;
	
}


return 0;	
}
