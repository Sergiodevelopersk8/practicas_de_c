#include <stdio.h>

int main()
{
	int sumapar=0,sumaimpar=0,n,i,negativo,sumageneral=0;
printf("hasta que numero quieres que sumar\n");
scanf("%i",&n);

 i=1;
while(i<=n)
{
if(i%2==0)
{
	negativo=i * (-1);
	sumapar += negativo;
}
else
{
	
	sumaimpar +=i;
}

	i++;
}	
	sumageneral = sumaimpar + sumapar;
	printf("el resultado de la suma es de %i",sumageneral);
	
	return 0;
}
