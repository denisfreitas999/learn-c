#include <stdio.h>

struct x
{
    int a;
    int b;
    int c;
};

int main(void){

    struct x estrutura;
    int x;
    double y;
    int vetor[10];

    

    // O operador sizeof() informa o tamanho em bytes do tipo de dado

    printf("%li", sizeof(estrutura));

    

    return 0; 
}