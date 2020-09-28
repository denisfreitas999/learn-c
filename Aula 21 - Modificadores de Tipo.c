#include <stdio.h>
#include <stdlib.h>

int main () {

    /*
    Inicialmente, vamos rever os 5 tipos primitivos da linguagem C:
    1) char
    2) int
    3) float
    4) double
    5) void

    A seguir, nós temos os 4 modificadores de tipo disponíveis:
    signed - números com sinal (positivos e negativos)
    unsigned - números sem sinais
    long - aumentar a capacidade de armazenamento
    short - diminuir a capacidade de armazenamento
    */
   int i = 10;
   unsigned short int u;
   printf("%i -> variavel u\n", sizeof(u));
   printf("%i -> variavel i\n", sizeof(i));

    return 0;

}