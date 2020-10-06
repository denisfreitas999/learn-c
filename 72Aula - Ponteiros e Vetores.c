#include <stdio.h>

int main (void){

    int vetor[3] = {1,2,3};

    int *ponteiro = &vetor[0];

    printf("%p\n", ponteiro); // %p usado para printar endereço de memória

    ponteiro = &vetor[1];

    printf("%p\n", ponteiro);

    ponteiro = &vetor[2];

    printf("%p\n", ponteiro);

    //================================================================
    int *ponteiro1 = &vetor[0];
    ++ponteiro1;
    ++ponteiro1;
    printf("%i\n", *ponteiro1);
    

    return 0; 
}