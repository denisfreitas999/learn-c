#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NUMERODEDEFINICOES 7

struct dicionario
{
    char palavra[20]; // 19 caracteres diponíveis para o usuário 1 reservado para o caractere nulo
    char definicao[50]; // 49 caracteres diponíveis para o usuário 1 reservado para o caractere nulo

};

bool compararStrings(const char palavra1[], const char palavra2[]){

    int i = 0;
    while ((palavra1[i] == palavra2[i]) && (palavra1[i] != '\0') && (palavra2[i] != '\0'))
    {
        ++i;
    }

    if ((palavra1[i] == '\0') && (palavra2[i] == '\0'))
    {
        return true; // para usar o true tem que utilizar a biblioteca <stdbool.h>
    }else
    {
        return false;
    }
}

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras){

    bool compararStrings(const char palavra1[], const char palavra2[]);

    int i = 0;

    while (i < numDePalavras)
    {
        if (compararStrings(procurar, lingua[i].palavra))
        {
            return i;
        }else
        {
           ++i;
        }     
    }
    return -1;
}

int main (void){

    int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras);

    //const int NUMERODEDEFINICOES = 7;
    char palavra[20] = {'\0'};
    int resultadoPesquisa;

    const struct dicionario portugues[NUMERODEDEFINICOES] = 
    {   {"pao","comida de farinha"},
        {"mortadela","comida de carne"},
        {"feijao","comida brasileira"},
        {"tropeiro","tipo de feijao"},
        {"queijo","derivado do leite"},
        {"macarronada","tipo de massa"},
        {"pizza","tipico da Italia"}
    };

    printf("Digite uma palavra: \n");

    scanf("%s", palavra);

    resultadoPesquisa = procurarStrings(portugues, palavra, NUMERODEDEFINICOES);

    if (resultadoPesquisa != -1)
    {
        printf("%s\n", portugues[resultadoPesquisa].definicao);
    }else
    {
        printf("Palavra nao encontrada.");
    }
    
    

    return 0;
}