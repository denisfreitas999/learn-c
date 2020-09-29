#include <stdio.h>

int main (void){

        //não printa a palavra corretamente
    //char palavra [6] = {'B','r','a','s','i','l'};    
    //char palavra [] = {'B','r','a','s','i','l'};    

         //printa a palavra corretamente
    //char palavra [7] = {"Brasil"};  
    //char palavra [] = {"Brasil"};
    //char palavra [] = "Brasil";

        // Acontece que nos três casos de baixo o compilador coloca automáticamente o caractere nulo \0 no último espaço do array.
        //  A barra invertida em c por sí só não representa um caractere, por isso \0 é um caractere apenas.

        //char palavra [7] = {"Brasil\0"};  
        //char palavra [] = {"Brasil\0"};
        //char palavra [] = "Brasil\0";

        
    printf("%s\n", palavra);

    return 0;
}