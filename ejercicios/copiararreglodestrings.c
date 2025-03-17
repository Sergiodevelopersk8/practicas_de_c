#include <stdio.h>
#include <string.h>


#define tamanio 15
int main (){
	
	char nombre1[tamanio],nombre2[tamanio];
	printf("escribe tu nombre \n");

gets(nombre1);/*almacena su nombre */	


/*nombre2= nombre1 */

strcpy(nombre2,nombre1);/*funcion para copiar un array*/
printf("tu nombre es :%s",nombre2);

	
	return 0;
}
