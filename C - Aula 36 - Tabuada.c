#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){

    int tabuada = 0;

    printf("Digite a tabuada que voce deseja: \n");
    scanf("%i", &tabuada);

    for (int i = 0; i <= 10 ; ++i)
    {
        printf("%i X %i = %i \n", tabuada , i , i * tabuada);
    }
    

    return 0;
}