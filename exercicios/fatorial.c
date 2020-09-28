#include <stdio.h>
#include <stdlib.h>

int main (){

    int fatorial, resultado = 1;

    printf("Digite o fatorial desejado: \n");
    scanf("%i", &fatorial);

    for (int i = 1; i <= fatorial; i++)
    {
        resultado *= i;
    }
    
    printf("O resultado do fatorial desejado eh: %i", resultado);

    return 0;
}