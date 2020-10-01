#include <stdio.h>

int main(void){

    struct horario{
        int horas;
        int minutos;
        int segundos;
    };

    struct horario vetor[5];

    //====== Formas de atribuir valores as variáveis =====

    vetor[0].horas = 10;
    vetor[0].minutos = 20;
    vetor[0].segundos = 30;

    printf("%i:%i:%i\n", vetor[0].horas,vetor[0].minutos,vetor[0].segundos);

    struct horario teste[5] = 
    {{10,20,30}, {40,50,60}, {70,80,90}, {100,110,120}, {130,140,150}};

    for (int i = 0; i < 5; i++)
    {
        printf("%i:%i:%i\n", teste[i].horas,teste[i].minutos,teste[i].segundos);
    }
    

    return 0;
}