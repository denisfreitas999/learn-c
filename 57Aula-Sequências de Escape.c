#include <stdio.h>

int main (void){

    printf("Aula sobre\nsequencias de escape\0 qualquer coisa\a");

    /*

    \a = Alarme sonoro do sistema
    \b = move o cursor uma posição a esquerda
    \n = pula para a próxima linha
    \t = tecla tab
    \r = volta para o início da linha
    \0 = Caractere nulo, ou zero geralmente estabelecido como fim de string
    \" = corresponde ao caractere "
    \' = corresponde ao caractere '

    */
    getchar();

    return 0;

}