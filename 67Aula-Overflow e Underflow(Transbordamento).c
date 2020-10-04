#include <stdio.h>


int main(){

    // Uma short armazena um número inteiro pequeno, ocupando uma pequena quantidade de bits

    short x = 214783647;

    short y = -214783648;

    int z = 214783647; // Caso aconteça um Overflow na variável int, podemos utilizar o long int.

    int w = 2147836478; // o tipo int só suporta 9 casas decimais

    long int k = 1234567891; // o tipo log int suporta 10 casas decimais

    printf("%i\n", x);
    printf("%i\n", y);
    printf("%i\n", z);
    printf("%i\n", w);
    printf("%i\n", k);


    return 0;
}