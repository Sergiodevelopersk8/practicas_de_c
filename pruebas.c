/***********************************************************************************************************/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fecha {
    int dia;
    char mes[20];
    int year;
};

struct contacto {
    char nombre[20];
    int tel;
    struct fecha cumple;
};

int main() {
    struct contacto amigo[2];
    int i = 0;
	for( i = 0; i < 2; i++ ){
printf("Ingrese los datos de contacto\nNombre: ", i + 1);
    fflush(stdin);
    gets(amigo[i].nombre);
    printf("Telefono : ");
    scanf("%d", &amigo[i].tel);
    printf("Fecha de nacimiento \nDia: ");
    scanf("%d", &amigo[i].cumple.dia);
    printf("Mes: ");
    fflush(stdin);
    gets(amigo[i].cumple.mes);
    printf("Año: ");
    scanf("%d", &amigo[i].cumple.year);
    
	}
    
	for(i = 0; i < 2; i++)
	{
	printf("\nLos datos ingresados son\n");
    puts(amigo[i].nombre);
	printf("Telefono %d\n", amigo[i].tel);
    printf("Fecha de nacimiento %d de %s de %d\n", amigo[i].cumple.dia, amigo[i].cumple.mes, amigo[i].cumple.year);
    	
	}
	printf("\n");
    return 0;
}










