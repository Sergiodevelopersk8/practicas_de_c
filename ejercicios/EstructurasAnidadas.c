//Estructuras Anidadas

#include <stdio.h>

struct infoDireccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};
struct empleado{
    char nombre[30];
    struct infoDireccion dirEmpleado;
    double salario;
}empleados[2];

int main() {

    for (int i = 0; i < 2; i++){

        fflush(stdin);

        printf("%i) Escribe su Nombre: ",i+1);
        gets(empleados[i].nombre);
        printf("%i) Escribe su Direccion: ",i+1);
        gets(empleados[i].dirEmpleado.direccion);
        printf("%i) Escribe el nombre de tu Ciudad: ",i+1);
        gets(empleados[i].dirEmpleado.ciudad);
        printf("%i) Escribe tu Provincia: ",i+1);
        gets(empleados[i].dirEmpleado.provincia);
        printf("%i) Escribe tu Salario: ",i+1);
        scanf("%lf",&empleados[i].salario);
        printf("\n");
    }

    for (int i = 0; i < 2; i++){
        printf("\n\nDatos del empleado numero %i: ",i+1);
        printf("\nNombre %s ",empleados[i].nombre);
        printf("\nDireccion: %s ",empleados[i].dirEmpleado.direccion);
        printf("\nCiudad: %s ",empleados[i].dirEmpleado.ciudad);
        printf("\nProvincia: %s ",empleados[i].dirEmpleado.provincia);
        printf("\nSalario: %.2lf",empleados[i].salario);
        printf("\n");
    }
    return 0;
}