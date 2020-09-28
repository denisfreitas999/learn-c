#include <stdio.h>

int main (void){

    int vetor[5] = {1,2,3,4,5}; // Se não for declarado valores nas chaves o sistema disponbilizará valores aleatórios alocados no sistema nas respectivas posições, para criar um vetor nulo basta colocar o zero entre as chaves {0}

    //printf("%i\n", vetor[0]); // Serve para printar apenas a posição desejada do vetor.
    
    for (int i = 0; i < 5; ++i)
    {
        printf("%i\n", vetor[i]);
    }
    
    

}