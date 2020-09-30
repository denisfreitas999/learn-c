#include <stdio.h>

int main(void){

    // Definição da estrutura do tipo horário:
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    // Declaração da estrutura do tipo horário de nome agora:
    struct horario agora;

    // Inicialização dos membros das variáveis da estrutura:
    agora.horas = 15;
    agora.minutos = 43;
    agora.segundos = 30;
    
    printf("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);

    return 0;
}