#include <stdio.h>
#include <stdlib.h>

int main () {

    //scanf("tipo_de_entrada", &variavel_que_recebera_o_valor);

    int num1, num2;
    printf("Por gentileza, digite dois numeros inteiros:\n");
    scanf("%i %i", &num1, &num2);
    printf("O primeiro numero digitado foi: %i\n", num1);
    printf("O segundo numero digitado foi: %i\n", num2);
    return 0;

}