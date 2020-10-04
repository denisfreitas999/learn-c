#include <stdio.h>

int main(void){

    int x = 10;
    int w = 20;
    double y = 20.50;
    char z = 'a';

    // primeira forma de declaração de ponteiros
    int *pX;
    pX = &x;  
    // segunda forma de declaração de ponteiros
    int *pW = &w;
    double *pY = &y;
    char *pZ = &z;

    double soma   = *pX + *pY;

    printf("Endereco x = %i --- Valor x = %i\n", pX, *pX);
    printf("Endereco y = %i --- Valor y = %f\n", pY, *pY);
    printf("Endereco z = %i --- Valor z = %c\n", pZ, *pZ);
    printf("soma %f\n", soma);


    return 0;
}