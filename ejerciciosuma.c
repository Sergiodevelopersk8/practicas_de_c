#include <stdio.h>




int main() {

int numero = 0;
float prom = 0;
float x = 0;
int i ;
	printf("Cuantos numeros deseas ingresar :  ");
scanf("%d", &numero);
for(i = 0; i < numero; i++){
printf("Ingrese  del numero %d: ", i + 1);
scanf("%f", &x);
prom += x;
}
if( numero != 0 ){
	prom /= numero;
	printf("El promedio de los numeros %f \n", prom );
	printf("\n");

}
  getchar();
  return 0;
}

