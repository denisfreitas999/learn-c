#include <stdio.h>

int main (void) {

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    
    depois = &agora;

    (*depois).hora = 20; // primeira opção para utilizar o ponteiro com estruturas
    depois->minuto = 30;// segunda opção para utilizar o ponteiro com estruturas
    depois->segundo = 50;

    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + (depois->segundo);
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto - depois->segundo;

    printf("%i:%i:%i", antes.hora, antes.minuto, antes.segundo);

    return 0;

}