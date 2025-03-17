/*aumento para empleados */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
char nombre[40];
int salario=0;
float aumentosalario=0.f;
printf("inserte su nombre por favor\n");
gets(nombre);


printf("Inserte su salario\n");
scanf("%i",salario);

aumentosalario=(salario*.1)+salario;

printf("empleado %s tu salario es de %.2f\n",nombre,aumentosalario);



system("pause");
    return 0;
}