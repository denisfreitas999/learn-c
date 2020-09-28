#include <stdio.h>
#include <stdlib.h>

int main(){

    //int i = 10 + 10 - 50; // Quando a precedência é a mesma, o C executa as operações da esquerda para direita. Soma e subtração possuem o mesmo
                         //  nível de precedência, salve engano, não sejam utilizados os parênteses.    


    /*  
        Associação da esquerda para a direita.
        1) ()
        2) *, /, %
        3) +, -
        4) <, <=, >, >=
        5) ==, !=

        Associação da direita para esquerda.
        1) --, ++  Operadores de incremento/decremento (unários)
        2) =, +=, -=, *=, /=, %= Operadores de atribuição
        ex: a = b = c = 1;   logo a = (b = (c = 1));
    */

    //=================== Precedência ====================
    /*                       Funcões
           1                   ()
            2                - ,++ ,-- , !
             3               *, / , %
              4              + , -
               5             <, <=, >, >=
                6            ==, !=
                 7           ?: (ternário)  
    */

   float a, b, c;
   a = 15;
   b = 10;
   c = 5;

   float x = 0;

   x = a * b / c;
   printf ("Expressao: a * b / c = %f\n", x);
   x = a / b * c;
   printf ("Expressao: a / b * c = %f\n", x);

    return 0;
}