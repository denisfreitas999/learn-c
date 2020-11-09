#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *p; 
    p = (int *) calloc(5, sizeof(int)); // Calloc(1º argumento: nº de elementos requeridos, 2º argumento: nº de bytes de cada elemento)
                                         // inicializa os endereços de memória com default.
    
    *p = 10;
    *(p+1) = 20;
    *(p+2) = 30;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Endereco de p%i = %p | Valor de p%i = %i\n", i, &p[i], i, p[i]);
    }
    

    printf("%i\n", *p);
    printf("%i\n", *(p+1));
    printf("%i\n", p[2]);


    return 0;
}