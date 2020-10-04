#include <stdio.h>

int main(void){

    int x = 1;
    int y = 0;

    y = ++x; // pré-incremento: nesse caso a variável x recebe +uma unidade e então y recebe o valor
             // de x, logo o printf da expressão é x = 2 e y =2

    x = x + 1;
    y = x;

    y = x++; // pós-incremento: Nesse caso o y recebe o valor de x, e depois é incrementado uma 
             // unidade a x, logo o printf da expressão é y = 1 e x = 2

    y = x;
    x = x + 1; 

    printf("x = %i\n", x);

    printf("y = %i\n", y);

    return 0;
}