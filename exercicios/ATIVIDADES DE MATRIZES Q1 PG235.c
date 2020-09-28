#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>

int main (void){
// Faça um programa que preencha uma matriz M (2 x 2), calcule e mostre a matriz R, resultante da
// multiplicação dos elementos de M pelo seu maior elemento. Página 235, Questão 1.

    int matriz[2][2] = {0};
    int valor = 0;

    printf("Digite os elementos de sua matriz 2x2: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
        
    }
    
    /*
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i\n", matriz[i][j]);
        }
        
    }
    */

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (valor <= matriz[i][j])
            {
                valor = matriz[i][j];
            }
            
            
        }
        
    }
    
    //printf("O maior valor eh: %i", valor);
    printf("----------------\n");

        for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i\n", matriz[i][j] * valor);
            
        }
        
    }
    
    
    return 0;
}