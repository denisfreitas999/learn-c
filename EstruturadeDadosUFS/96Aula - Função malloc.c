#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *p = (int *) malloc(sizeof(int));  // malloc = memory allocation, retorna um ponteiro do tipo void* genérico. por isso usamos o
                                           // o type casting para definir o dado a ser utilizado
                                           // o malloc não remove o "lixo", da memória solicitada para a alocação dos dados.
                                           // se não houver espaço suficiente para armazenar os dados solicitados, a função malloc
                                           // retornará NULL, ou seja, um ponteiro que aponta para lugar nenhum.


    if(p == NULL){
        printf("malloc não funcionou");
    }

    *p = 1000;

    printf("%i\n", *p);
    return 0;
}