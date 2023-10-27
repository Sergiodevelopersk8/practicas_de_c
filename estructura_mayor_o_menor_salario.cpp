#include <stdio.h>

struct empleado
{
	char nombre[20];
	char sexo[20];
	float salario; 
}empleados[100];


int main(){
	
	int n,i,pmay,pmen;
	float mayor=0.0, menor=999999;
	
	printf("escribe cuantos empleados hay en la empresa \n");
	scanf("%i",&n);
	
	for(i=0; i<n;i++)
	{
		fflush(stdin);
		printf("escribe el nombre del emplead@ %i:\n",i+1);
		gets(empleados[i].nombre);
		printf("escribe el sexo del emplead@ %i:\n",i+1);
		gets(empleados[i].sexo);
		printf("escribe el salario %i:\n",i+1);
		scanf("%f",&empleados[i].salario);
		
	}
	
	for(i=0;i<n;i++)
	{
		if(empleados[i].salario>mayor){
			mayor=empleados[i].salario;
			pmay=i;
		}
		if(empleados[i].salario<menor){
			menor=empleados[i].salario;
			pmen=i;
		}
	}
	
	printf("\n\n");
	printf("datos del empleado con el mejor salario\n");
	printf("\t Nombre: %s \n",empleados[pmay].nombre);
	printf("\t Sexo: %s \n",empleados[pmay].sexo);
		printf("\tSalario: %.2F\n",empleados[pmay].salario);
		
		
			printf("\n\n");
	printf("datos del empleado con el peor salario\n");
	printf("\t Nombre: %s \n",empleados[pmen].nombre);
	printf("\t Sexo: %s \n",empleados[pmen].sexo);
		printf("\tSalario: %.2F\n",empleados[pmen].salario);
		
	
		return 0;

}
