/*exprecion condicional operador'?'*/
/*sintaxis
 
 condicion ? exprecion1:exprecion2

*/
#include <stdio.h>

int main(){
	

int numeros;
puts("ingrese un numero\n");
scanf("%i",&numeros);
(numeros%2==0) ? printf("el numero es par\n") : printf("el numero es inpar");	

/*
     el ? sirve como if y la derivacion del else es : los dos puntos 
(numeros%==0) ? printf("el numero es par\n") : printf("el numero es inpar");	
*/

	
	return 0;
}
