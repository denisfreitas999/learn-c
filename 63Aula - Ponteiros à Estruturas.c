#include <stdio.h>

int main (void) {

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    
    depois = &agora;

    (*depois).hora = 20;
    depois->minuto = 30;
    depois->segundo = 40;

    printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);

    return 0;

}