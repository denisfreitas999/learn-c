#include <stdio.h>

int main (void){

    char linha[100];
    char caractere;
    int i = 0;

    do
    {
        caractere = getchar();
        linha[i] =  caractere;
        ++i;

    } while (caractere != '\n'); // Quando o usuário pressiona ENTER é adicionado o caractere '\n' no Terminal

    linha[i - 1] = '\0'; // Substitui o caractere '\n', adicionando assim o caractere nulo a expressão.
    
    printf("%s\n", linha);

    return 0;
}

