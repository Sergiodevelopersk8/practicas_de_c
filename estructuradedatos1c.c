#include <stdio.h>




struct persona{
	
	char nombre[20];
	int edad;
}
persona1={"jorge",19},
persona2={"Ricardo",18};


int main(){

printf("\nsu nombre es: %s ",persona1.nombre);
printf("\nla edad es:  %i ", persona1.edad);	

printf("\nsu nombre es: %s ",persona2.nombre);
printf("\nla edad es:  %i ", persona2.edad);	
	
		
	
	
	
	return 0;
}
