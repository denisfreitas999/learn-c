#include <stdio.h>

    struct horario{
        int horas;
        int minutos;
        int segundos;
    };


int main(void){

    void recebeHorarios(struct horario vetor[5]);
    void printHorarios(struct horario vetor[5]);
    struct horario listaHorarios[5];

    printf("Digite 5 horarios no formato hh:mm:ss\n");

    recebeHorarios(listaHorarios);

    printHorarios(listaHorarios);
    


    return 0;
}

void recebeHorarios(struct horario vetor[5]){

    for (int i = 0; i < 5; i++)
    {
        scanf("%i %i %i", &vetor[i].horas, &vetor[i].minutos, &vetor[i].segundos);

    }
    

}

void printHorarios(struct horario vetor[5]){

    for (int i = 0; i < 5; i++)
    {
        printf("%i:%i:%i\n", vetor[i].horas, vetor[i].minutos, vetor[i].segundos);
    }
    

}