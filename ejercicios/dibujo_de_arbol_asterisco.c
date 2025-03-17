#include <stdio.h>

//dibujo de arbol con bucle c

int main ()
{
	
int i, numfilas, j;

printf("Digite el numero de filas\n");
scanf("%i",&numfilas);


for(i=0;i<numfilas;i++)
{

for(j=0;j<=i;j++)
{
	printf("*");
}	
printf("\n");
}	


return 0;	
}
