#include <stdio.h>

int main()
{

int i, suma=0;


for(i=1; i<= 20; i++)
{
	if(i%2==0)
	{
		
		suma+=i;
		printf("la suma va en %i\n",suma);
	}
	
}
	printf("la suma final %i\n",suma);


	return 0;
}
