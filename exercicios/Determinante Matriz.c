#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void){

    int resultado = 1;

    int matriz [3][3] = {
                        {3,2,1},
                        {3,4,5},
                        {6,7,2}
                        };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                resultado *= matriz[i][j];
            }
            
        }
        
    }
    
    printf("O determinante da Matriz eh: %i", resultado);

    
    return 0;
}