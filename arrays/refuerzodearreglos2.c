#include <stdio.h>


/*datos arreglo*/

    void DatosArreglo(int arreglo1[]);
	void llenararreglo(int arreglo1[] );
	void Sumadeelementos(int arreglo1[] );
	void Multiplicarelementos (int arreglo1[] ); 
	void sumaselementostres(int arreglo1[]);
	void multiplicarentre(int arreglo1[]);
int main(){
	
	int arreglo1[10],bucle=1, opcion;
	
	
	
	printf("este programa ejecuta un arreglo de 10 elementos");
	
	
	int i;
	
	for(i=0; i<10;i++){
		
	
	
	printf("llena los datos [%i]\n",i);	
	
	scanf("%d",&arreglo1[i]);
		
	}
	
	while(bucle){
		
		

		printf (" selecciona la opcion que quieres \n");
		printf (" 1)ingresar o modificar \n2) mostrar la suma de los elementos\n");
		printf (" 3)realizar la multiplicación de los elementos \n4) realizar la suma de los elementos divisibles entre 3 ");
		printf (" 5) multiplicar por cada 3 elementos del arreglo\n0) salir\n");
	
	scanf("%d",&opcion);
	
	
	switch(opcion){
		case 1:
			printf("1) ingresar o modificar elementos del arreglo\n");
			DatosArreglo(arreglo1);
   		    llenararreglo(arreglo1 );
			DatosArreglo(arreglo1);
	 break;
	    
	    
	    case 2:printf("2) mostrar la suma de los elementos \n");
	    	
				DatosArreglo(arreglo1);
				printf("\n");
				
			 Sumadeelementos(arreglo1);
	    	printf("\n");
	    	
	    break;
	    
	    
	    case 3:
	    	printf("3) realizar  la multiplicacion de los elementos \n");
	    	DatosArreglo(arreglo1);
	    	Multiplicarelementos(arreglo1);
	    break;
	    
	    case 4:
	    	
	    	printf("4) realizar la suma solo de los elementos divisibles entre 3\n ");
	    	
	    	 DatosArreglo(arreglo1);
	    	 sumaselementostres(arreglo1);
	    break;

	    case 5:
	    	
	    	printf("5)Multiplicar por 3 cada elemento del arreglo \n");
	    	DatosArreglo(arreglo1);
	    	multiplicarentre(arreglo1);
	    break;
	    
	    case 0:
	    	bucle=0;
	    break;
	    	    
	    default :
	    	printf("opcion no valida");
	    	break;
	    
	    
	}
	}
	
	
	return 0;
	
	}
	
	
	void DatosArreglo(int arreglo1[]){
		int i;
		for(i=0;i<10;i++){
			printf("posicion [%i]=%i\n",i,arreglo1[i]);
		}
		
		
		}
		
		void llenararreglo(int arreglo1[] ){
			int i;
			for(i=0; i<10;i++){
				printf("escribe el numero para el arreglo en la posicion [%i]\n", i);

scanf("%i",&arreglo1[i]);


			}
		} 
		
		
		
			void Sumadeelementos(int arreglo1[] )
			{
			int sumatoria=0;
			
			int i;
			for(i=0; i<10;i++){
				
				sumatoria += arreglo1 [i];
			}	
				printf("la suma de todos los elementos del arreglo es %i\n",sumatoria);
			}
			
			
		void Multiplicarelementos (int arreglo1[] )
		{
			int sumatoria=1;
			int i;
			for(i=0; i<10;i++)
			{
				
				sumatoria *= arreglo1 [i];
				
			}
			 printf("la multiplicacion de todos los elementos del arreglo es :%i\n ",sumatoria);
			
		}
		
		void sumaselementostres(int arreglo1[]){
		
		int sumatoria=0;
		int i;
		for(i=0;i<10;i++)
		{
			if(arreglo1[i]%3==0){
				sumatoria += arreglo1[i];
			}
			}	
			 printf("la suma total de los elementos divisibles entre 3 es :%i\n",sumatoria);
		}
		
		
			void multiplicarentre(int arreglo1[]){
			
			int i,muestra;
			for(i=0;i<10;i++){
				arreglo1[i]=arreglo1[i]*3;
			}
			
			for(muestra=0;muestra<10;muestra++){
				
				printf("el arrglo multiplicado por 3 en la posicion [%i]=%i\n",muestra,arreglo1[muestra]);
			}	
				
			}
