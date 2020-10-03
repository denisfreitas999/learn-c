#include <stdio.h>

int main (void){

    printf("Aula sobre o system pause\n");

    system("pause"); // Quando você salva o executável do doss e quer passar para alguém, é interessante
                    // utilizar o system("pause"), o problema é que o comand
                    // só funcionará em máquinas com windows no doss.
                    //
    getchar(); // Então seria mais interessante utilizar o getchar(); ao invés do system pause
              // pois ele funcionará em sistemas linux, macOS e windows normalmente, além de consumir
              // menos memória, e dar um "pause" no programa, é um comando da própria linguagem em C.
              
}