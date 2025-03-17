/*En un supermercado por la cuarentena quieren disminuir
los precios al 15% para ayudar a las personas y que no se queden los productos en la tienda
debes dar el precio y el programa debe dar el precio con descuento */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
float precio,descuento,compraDescuento;

printf("Dame el precio del producto\n");
scanf("%f",&precio);

descuento=precio*0.15;
compraDescuento=precio-descuento;

printf("el precio del producto con el descuento es %.2f\nEl total decuento es %.2f", compraDescuento,descuento);

system("pause");
    return 0;
}