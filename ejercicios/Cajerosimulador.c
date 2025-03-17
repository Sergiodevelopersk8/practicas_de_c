/*simulación de un cajero*/

#include <stdio.h>

int main(){
	
	int opcion;
	float agregar,retirar,saldo=3000; 
	
	printf("Cajero Merino \n");
	
	printf("selecione una opcion \n ");
	
	printf("\n1 Depositar dinero\n");
	
	printf("\n2 Retirar saldo\n");
	
	printf("\n3 salir\n" );
	scanf("%i",&opcion);
	
	
	switch(opcion){
		case 1:printf("Cuanto dinero quiere depositar \n");
		scanf("%f",&agregar);
//	saldo += agregar;

saldo = saldo + agregar;
		printf("su saldo actual es de %f",saldo);
		break;
		
		case 2 : printf("cuanto desea retirar \n");
		scanf("%f",&retirar);
		
		if(retirar <= saldo){
			
			
		printf("retirando espere ");
		saldo -= retirar;
		
		printf("su saldo actual es de %f",saldo);
		
		}
		
		else{
			

		printf("saldo insuficiente");
		
		printf("su saldo actual es de %f",saldo);
		
		}
		break;
		
		case 3: 
		printf("adios");
	}
	
	return 0;
}
