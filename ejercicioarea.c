#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main (){
    float base,altura, area, lado;
   // printf("este programa calcula el area ingrese la base \nInserte la altura");
//scanf("%f %f",&base,&altura);
    //area=(base*altura)/2;

//printf("el area es %.2f",area);

printf("Area del cuadrado\ninserte el lado");
scanf("%f", &lado);
area=pow(lado,2);

printf("Area es %.2f", lado);
system("pause");


    return 0;
}