#include <stdio.h>

int main (void){

    int vetor[3] = {1,2,3};

    int *ponteiro = vetor; // Quando o ponteiro está apontando para um vetor, não se faz necessário
                           // utilizar o & comercial para indicar o endereço de memória.
                           // O ponteiro está apontando para o primeiro membro do vetor
    int *ponteiro2 = &vetor[1]; // Outra forma de fazer é indicar a posição desejada e utilizar o &


    printf("%i\n", *ponteiro);
    printf("%i\n", *ponteiro2);

    return 0; 
}