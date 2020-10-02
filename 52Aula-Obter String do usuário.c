#include <stdio.h>

int main (void){

    char nome[20];
    char sobrenome[30];

    printf("Insira seu nome e sobrenome: \n");
    scanf("%s %s", &nome, &sobrenome); //Limitações da captura de informações compostas utilizando-se do %s

    printf("%s %s", nome, sobrenome); // resolução das limitações ocorre na aula 54.

    return 0;
}