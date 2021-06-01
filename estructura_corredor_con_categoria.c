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

struct corredor{
	char nombre[30];
	int edad;
	char sexo[20];
	char club[20];
}corredor1;

char categoria [20];




int main ()
{


printf("Escribe tu nombre\n");
gets(corredor1.nombre);	


printf("Escribe tu edad\n");
scanf("%i",&corredor1.edad);
fflush(stdin);

printf("escribe tu sexo\n");
gets(corredor1.sexo);

printf("Escribe tu club\n");
gets(corredor1.club);
	
if(corredor1.edad<=18)
{
printf("tu categoria es juvenil\n");
strcpy(categoria,"juvenil");
	
}	
else if(corredor1.edad<=40 && corredor1.edad>18)
{
printf("tu categoria es seinor\n");
strcpy(categoria,"seinor");

}

else if(corredor1.edad>40)
{
	
printf(" Tu categoria es veterano\n");

strcpy(categoria,"veterano");	
	
}


printf("\t*** Datos del corredor ***\n");
printf("\t*** categoria: %s\n",categoria);
printf("\t*** Nombre: %s\n",corredor1.nombre);
printf("\t*** Edad: %i\n",corredor1.edad);
printf("\t*** sexo: %s\n",corredor1.sexo);
printf("\t*** club: %s\n\n",corredor1.club);

system("pause");

return 0;	
}
}
