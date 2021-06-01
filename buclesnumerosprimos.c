#include <stdio.h>

int main()
{

int n,cont=0,i;
printf("Escribe un numero\n");
scanf("%i",&n);

for(i=1; i<= n; i++)
{
	if(n%i==0)
	{
		
		cont++;
	}
	
}


	if(cont>2)
	{
		printf("el numero %i no es primo\n",n);
	}
	else{
		
		printf("el numero %i  es primo\n",n);
	}

	return 0;
}
