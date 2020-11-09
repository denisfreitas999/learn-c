#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *p = (int *) malloc(sizeof(int)); 

    *p = 1000;

    printf("%i\n", *p);

    free(p); // A função free desaloca a memória requerida pelo programa, mas ele não remove o valor armazenado na memória desalocada


    printf("%i\n", *p);

    return 0;
}