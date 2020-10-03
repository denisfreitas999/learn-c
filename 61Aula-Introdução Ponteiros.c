#include <stdio.h>

int main(void){

    int x;
    x = 10;

    printf("%i\n", &x); //O & comercial aponta para o endereço de memória que está contida ou que está para ser armazenada o valor da 
                      //variável ou constante.

    // ============ Criação de ponteiro ============

    int *ponteiro;
    ponteiro = &x; // O *ponteiro aponta para o valor no endereço de memória e o ponteiro (sem o asterísco), aponta para o endereço de 
                  // memória.

    printf("%i\n", *ponteiro);

    int w = 20;
    int y = w;

    w = 30;

    printf("%i  -  %i\n", w, y);

    //==================== verificação com ponteiros =================

    int k = 10;
    int *ponteiro1;
    ponteiro1 = &k;

    int z = 20;
    *ponteiro1 = z;

    printf("%i ----- %i\n", k, z);
    
    return 0;
}