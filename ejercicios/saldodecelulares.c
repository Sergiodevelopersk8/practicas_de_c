/*calcular tarifas de saldos en celulares
y poner precios 

1000 a 1500 premium
500 a 999 Intermedio
100 a 499 basica
*/

#define Tarifa1 "Premiun"

#define Tarifa2 "Intermedio"

#define Tarifa3 "Basica"

#include <stdio.h>

int main(){
	
	
	float precio;	

	printf("digite el monto que esta dispuesto a pagar en su plan\n");
	scanf("%f",&precio);

if(precio<500 && precio>99){
	

	printf(" la tarifa apta es  %s",Tarifa3);
}
else if(precio>=500 && precio<1000){

	printf(" la tarifa apta es  %s",Tarifa2);


}

else if(precio>=1000 && precio<=1500){


	printf(" la tarifa apta es  %s",Tarifa1);

}

	
	return 0;
}
