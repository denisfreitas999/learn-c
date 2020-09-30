#include <stdio.h>

int main(void){
    /*
    int recebeValor = 0;

    int valorAbsoluto = 0;

    printf("Digite um numero inteiro: \n");
    scanf("%i", &recebeValor);

    if (recebeValor < 0)
    {
        valorAbsoluto = recebeValor * -1;

    }else
    {
        valorAbsoluto = recebeValor;
    }
    
    printf("O valor Absoluto do inteiro digitado eh: %i", valorAbsoluto);
    
    */

   //conteúdo da aula

    float somaDeDigitos(float num1, float num2);

    printf ("A soma Absoluta eh: %f", somaDeDigitos(1.5,1.5));

    return 0;
}

float somaDeDigitos(float num1, float num2){

    float valorAbsoluto (float x);

    num1 = (num1 < 0) ? (valorAbsoluto(num1)) : (num1);
    num2 = (num2 < 0) ? (valorAbsoluto(num2)) : (num2);
    float somaDeDigitos = (num1 + num2);

    return somaDeDigitos;

}

float valorAbsoluto (float x){

    x = (x < 0) ? (x*= -1) : (x);
    
    return x;
}