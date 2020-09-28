#include <stdio.h>

int main (void){

    float calcularAreaQuadrado(float x, float y);

   printf("%f", calcularAreaQuadrado(10.5, 5.75) );


    return 0;
}

float calcularAreaQuadrado(float x, float y){
        float area;
        area = x * y;

     return area;
}