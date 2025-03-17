#include <stdio.h>

//crear la estructura asignatura
//agrregar a la estructura alumno un arreglo de asignatura 
//inicializar alumnos (2) con susu respectivas materias (3)
// permitir al usuario ver las materias
//permitir al usuario modificar 
//permitir al usuario crear alumnos con susu materias desde cero 

#include <string.h>


typedef struct Asignatura{
	
	char materia[30];
	
}Asignatura;


typedef struct Alumno{
	
	Asignatura Asignaturas[5];
}Alumno;



void ImprimirMaterias(Alumno AlumnoImpresion);
void SustituirMateria(Alumno *AlumnoModificacion, int indice);




int main ()
{
	Alumno Nuevo;
	char Alumnonuevo[20];
	//	char Materia0[20];
		/*	char Materia1[20];
				char Materia2[20];*/
	
	 Alumno Sergio,Kiernan;
	 
	 strcpy(Sergio.Asignaturas[0].materia,"Matematicas");

	 strcpy(Sergio.Asignaturas[1].materia,"Quimica");
	 
	 strcpy(Sergio.Asignaturas[2].materia,"Programacion");
	 
	 
	 strcpy(Kiernan.Asignaturas[0].materia,"Literatura");
	 
	 strcpy(Kiernan.Asignaturas[1].materia,"Gastronomia");
	 
	 
	 strcpy(Kiernan.Asignaturas[2].materia,"Teatro");
	 
	 int bucle=1;
	 
	 printf ("este programa permite ver modificar y crear alumno\n");	
	 while(bucle){
	 
	 printf("1) ver materias\n2) modificar materias\n3) agregar alumno\n");
	 
	 int opcion,alumno;
	 scanf("%d",&opcion);
	 
	 switch (opcion)
	 {
	 	
	 	case 1:
	 		 printf ("Seleccionaste  ver materia\n");	
	 		  printf ("De que alumno quieres ver las materias\n");
			    printf ("1) Sergio\n2) Kiernan\n3) %s",Alumnonuevo);	
	 	
	 	
	 	scanf("%d",&alumno);
	 	switch(alumno)
		 {
		 	
		 	case 1:
		 	
		 	printf("Seleccionaste a Sergio\n");
		 //	printf("Sus materias son: \n1) %s\n2) %s\n3) %s\n",Sergio.Asignaturas[0].materia,Sergio.Asignaturas[1].materia,Sergio.Asignaturas[2].materia);
		 	
		 	
 ImprimirMaterias(Sergio);
		 	
		 	
		 	//break de alumno sergio y sus materias
			 break;
			 
			 case 2:
		
			printf("Seleccionaste a Kiernan\n");
		 
 ImprimirMaterias(Kiernan);	
		 	//break de alumna Kiernan y sus materias
			 break;
		 	
		 }
	 
	 //break de caso 1 ver materias de alumnos
	    break;
	    
	    case 2:
	    	printf("Seleccionaste modificar materias\n");
	   		printf("De que alumno quieres modificar sus materias\n");
	   		printf("1)Sergio\n2) Kiernan\n3)");
	   		scanf("%d",&alumno);
		 
		 switch(alumno)
		 {
		 	
		 case 1:
		 	printf("Seleccionaste a Sergio\n");
		 
            ImprimirMaterias(Sergio);
		 
		 	printf("selecciona el numero de materia que quieres modificar\n");
		 	printf(" ");
		 	
		 	scanf("%d",&opcion);
		 	
		 	switch(opcion)
		 	{
		 		
		 		case 1:
		 			
		 	SustituirMateria(&Sergio,0);
		 		
			 //break de la opcion de modificacion materia 0 de sergio
			 break;
			 
			 	case 2:
		 			
		 	
		 	SustituirMateria(&Sergio,1);
		 		
			 //break de la opcion de modificacion materia 1 de sergio
			 break;
			 
			 	case 3:
		 			
		 	
		 	SustituirMateria(&Sergio,2);
		 		
			 //break de la opcion de modificacion materia 2 de sergio
			 break;
			 
			 
			 
			 	
		 		
		 		
		 		
			 }
		 	
		 //break de caso 1 modificar materias de sergio
		 break;	
		 	
		 	
		 
		 case 2:
		 	printf("Seleccionaste a Kiernan\n");
		 
             ImprimirMaterias(Kiernan);
		 
		 	printf("selecciona el numero de la materia que quieres modificar\n");
		 	
		 	scanf("%d",&opcion);
		 	switch(opcion)
		 	{
		 		case 1:
		 			
		 	
		 		SustituirMateria(&Kiernan,0);
			 //break de la opcion de modificacion materia 0 de Kiernan
			 break;
			 
			 	case 2:
		
		 		SustituirMateria(&Kiernan,1);
				 	
			 //break de la opcion de modificacion materia 1 de kiernan
			 break;
			 
			 	case 3:
		 			
		 
		 		SustituirMateria(&Kiernan,2);
			 //break de la opcion de modificacion materia 2 de Kiernan
			 break;
			 
			 }
		 //break de caso 1 modificar materias de Kiernan
		 break;	
		 	
		 }
		 
		 
		
		
	 //break de caso 2 modificar materias de alumnos	
	    break;
	    
	    case 3:
	    printf("seleccionaste crear alumno nuevon\n");
	     printf("Escribe su nombre del alumno nuevon\n");
	     scanf("%s",Alumnonuevo);
	    
		printf("escribe el nombre de las tres materias para el alumno %s\n",Alumnonuevo);
		
		 scanf("%s",Nuevo.Asignaturas[0].materia);
		 
		 scanf("%s",Nuevo.Asignaturas[1].materia);
		 
		 scanf("%s",Nuevo.Asignaturas[2].materia);
		 
		 
		printf(" el alumno %s tiene estas materias\n",Alumnonuevo);
		
 ImprimirMaterias(Nuevo);
		
		//break de agregar alumno nuevo	
	    break;
	    
	    
	    case 4:
	    	bucle=0;
	    	break;
	    
	    default:
	    	printf("ingrese un numero no mames perro");
	    	break;
	 	
	 	
	 	
	 	
	 }
}
	 
return 0;	
}

void ImprimirMaterias(Alumno AlumnoImpresion)
{
	
		 	printf("Sus materias son: \n1) %s\n2) %s\n3) %s\n",AlumnoImpresion.Asignaturas[0].materia,AlumnoImpresion.Asignaturas[1].materia,AlumnoImpresion.Asignaturas[2].materia);
}

void SustituirMateria(Alumno *AlumnoModificacion, int indice)
{
			printf("Escribe el nombre de la nueva materia\n");
		 		char MateriaNueva[20];
		 		scanf("%s",MateriaNueva);
		 		strcpy(AlumnoModificacion->Asignaturas[indice].materia,MateriaNueva);
	
}


