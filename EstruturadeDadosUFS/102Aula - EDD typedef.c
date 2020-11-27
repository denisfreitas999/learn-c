#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// O typedef é a criação de um novo tipo e não uma variável
typedef struct 
{
    char nome[20];
    int dia, mes, ano;
}tRegistro;

tRegistro Pessoa; // Aqui foi criado uma variável pessoa do tipo tRegistro

const char NomePessoa[20] = "Denisson Freitas";

int main (void){

    strcpy(Pessoa.nome, NomePessoa);
    Pessoa.dia = 1;
    Pessoa.mes = 7;
    Pessoa.ano = 1997;
    printf("O nome da pessoa eh: %s , nascida em %i/%i/%i\n", Pessoa.nome, Pessoa.dia, Pessoa.mes, Pessoa.ano);

    return 0;
}