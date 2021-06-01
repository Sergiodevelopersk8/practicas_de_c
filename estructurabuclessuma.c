#include <stdio.h>

int main(){
	
	int cont,num,sum=0;
	
	printf("escribe hasta que numero quieres que se haga la suma\n");
scanf("%i",&num);
cont=1;

while(cont <= num)
{
	sum +=cont;
	cont++;
}	
	printf("la suma hasta el numero %i es de %i",num,sum);
	return 0;
}
