#include <stdio.h>

//Factorial de un numero

int main ()
{
	
int i, numero, factorial=1;

printf("Digite el numero para hallar el factorial\n");
scanf("%i",&numero);


for(i=1;i<=numero;i++)
{

factorial *=i;	
}	


printf("\n El factorial del numero dado es: %i",factorial);




return 0;	
}
