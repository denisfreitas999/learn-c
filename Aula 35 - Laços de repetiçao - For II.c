#include <stdio.h>
#include <stdlib.h>

int main (){
        /*
        for(parte1; parte2; parte3){
            parte1 = inicialização
            parte2 = condição
            parte3 = atualização    
        }
        */

       for (int a = 0, b = 10; (a <= 10) && (b >= 0) ; ++a, --b)
       {
           printf("%i", a);
           printf(" - ");
           printf("%i\n", b); 
       }
       


}