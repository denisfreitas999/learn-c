#include <stdio.h>
#include <stdlib.h>

int main (){

    //break -> simplesmente interrompe o nosso ciclo
    //continue -> interrompe nosso laço

    for(int x = 0; x <= 100; ++x){

        if (x == 20)
        {
            continue;
        }

        if (x == 80)
        {
            break;
        }
        
        printf("%i\n", x); 
        
        
    }

    return 0;

}