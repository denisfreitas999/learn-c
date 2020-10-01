#include <stdio.h>

int main (void){

    void concatenarStrings(char string1[], int tamanhoString1, 
                           char string2[], int tamanhoString2, char string3[]);
    char palavra1[] = {'p','a','o',' '}; // Espaços também são considerados caracteres.
    char palavra2[] = {'m','o','r','t','a','d','e','l','a'};
    char novaPalavra[13];

    concatenarStrings(palavra1, 4, palavra2, 9, novaPalavra);

    for (int i = 0; i < 13; i++)
    {
        printf("%c", novaPalavra[i]);
    }
    
    printf("\n");



    return 0;
}
void concatenarStrings(char string1[], int tamanhoString1, 
                       char string2[], int tamanhoString2, 
                       char string3[]){

    for (int i = 0; i < tamanhoString1; i++)
    {
        string3[i] = string1[i];
    }
    
    for (int j = 0; j < tamanhoString2; j++)
    {
        string3[j + tamanhoString1] = string2[j];
    
    }
}
