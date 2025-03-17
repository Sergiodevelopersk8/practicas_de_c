#include <stdio.h>

int main (){
	
	int numero,i,varones=0,mujeres=0;
	
	char alumnos[30];
	
	printf("escribe el total de alumnos de la clase \n");
	scanf("%i",&numero);
	
	for(i=1;i<=numero ;i++){
		
		fflush(stdin);/*limpia la entrada*/
		printf("\n %i) digite el sexo del alumn@: ",i);
		gets(alumnos);
		
		
		if(strcmp(alumnos,"masculino")==0){
			
			varones++;
		}
		
		else if(strcmp(alumnos,"femenino")==0)
		
		{
			mujeres++;
		}
	}
	
	printf("\nel total de varones es %i",varones);
	printf("\nel total de mujeres  es %i",mujeres);
	
	return 0;
}
