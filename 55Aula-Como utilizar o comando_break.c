#include <stdio.h>

int main(void){

    for (int i = 1; i <= 20; i++)
    {
        if (i % 3 == 0 && i % 9 == 0)
        {
            printf("%i divisivel por 3 e 9\n", i);
            break; // O break é utilizado para para o programa quando determinada finalidade é alcaçada.
        }else
        {
            printf("%i nao eh\n", i);
        }
        
        
    }
    
    getchar();
    return 0;
}

