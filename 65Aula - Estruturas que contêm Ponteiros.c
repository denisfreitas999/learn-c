#include <stdio.h>

int main (void){

    struct horario{

        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    struct horario hoje;

    int hora =  200;
    int minuto = 300;
    int segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("%i:%i:%i\n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);

    return 0;
}