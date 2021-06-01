#include <stdio.h>

/*
Hacer una estructura llamada corredor,
en la cual tendran los siguientes miembros:
Nombre . edad.sexo,club,pedir datos al usuario para un corredor ,
y asignarle una categoria de competición 
juvenil <= 18
señor <= 40 años 
veterano > 40
popsterior mente imprimir todos los datos del corredor

*/

struct promedio{
float nota1;
float nota2;
float nota3;

};

struct alumnos{
	char nombre[30];
	int edad;
	char sexo[20];
struct promedio prom;
}alumno1;


char categoria [20];




int main ()
{

float promedio=0;

printf("Escribe tu nombre\n");
gets(alumno1.nombre);
	
printf("escribe tu sexo\n");
gets(alumno1.sexo);


printf("Escribe tu edad\n");
scanf("%i",&alumno1.edad);

printf("Escribe tus tres calificaciones\n");
scanf("%f %f %f",&alumno1.prom.nota1, &alumno1.prom.nota2,&alumno1.prom.nota3);
fflush(stdin);

promedio=(alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3)/3;






printf("\t*** Datos del alumno ***\n");
printf("\t*** categoria: %s\n",categoria);
printf("\t*** Nombre: %s\n",alumno1.nombre);
printf("\t*** Edad: %i\n",alumno1.edad);
printf("\t*** sexo: %s\n",alumno1.sexo);
printf("\t*** promedio de calificaciones alumno: %.2f \n",promedio);

system("pause");

return 0;	
}

