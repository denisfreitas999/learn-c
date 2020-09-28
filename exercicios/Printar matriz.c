#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void){

    int matriz [2][2] = {
                        {1,2},
                        {3,4}
                        };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i\n", matriz[i][j]);
        }
        
    }
    

    
    return 0;
}