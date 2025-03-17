#include <stdio.h>

int main(){

/*datos*/
int x [8];
	
/*esto la suma de valores */

int total =0;
int i;

for (i=0;i<8;i++){
	
	printf("\nDatos %d: ",(i+1));
	
	scanf("%d",&x[i]);
	
	total+=x[i];
}

float promedio= total/8;

/*imprimimos el resultado con un digito 1 decimal */

printf("\n\nEl promedio de los valores  es : %.2f ",promedio);




	
	
	
	
	return 0;
}
