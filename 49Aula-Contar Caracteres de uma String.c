#include <stdio.h>

int main (void){

    int tamanhoString(char string[]);
    char stringUsuario[20];

    printf("Digite uma palavra(string) : \n");
    scanf("%s", stringUsuario);

    printf("%i", tamanhoString(stringUsuario));



    return 0;
}

int tamanhoString(char string[]){
    int numCaracteres = 0;

    while (string[numCaracteres] != '\0') //o caractere nulo ocupa a última posição de qualquer string.
    {
        ++numCaracteres; // o ciclo while só trás o número de caracteres da string, sem o nulo
    }
    ++numCaracteres; //Adicação do caractere nulo, não esqueça que ele é contabilizado em C.
    return numCaracteres;
}