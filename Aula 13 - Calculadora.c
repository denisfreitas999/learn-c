#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1, num2, soma, subtracao, multiplicacao, divisao;

     printf("Digite dois numeros:\n");
     scanf("%i %i", &num1, &num2);

     soma = num1 + num2;
     subtracao = num1 - num2;
     multiplicacao = num1 * num2;
     divisao = num1 / num2;

     printf("A soma eh: %i\n", soma);
     printf("A subtracao eh: %i\n", subtracao);
     printf("A multiplicacao eh: %i\n", multiplicacao);
     printf("A divisao eh: %i\n", divisao);

    return 0;

}