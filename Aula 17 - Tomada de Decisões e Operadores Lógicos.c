#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){

    int i = 10;
    int num1;

    printf("%i\n", i!=5);
    printf("%i\n", i==5);
    printf("%i\n", !(i==10));

    printf("Digite um numero != de 5: \n");
    scanf("%i", &num1);

    if (num1==5)
    {
        printf("TRUE\n");
    }else
    {
        printf("FALSE\n");
    }
    
    

    
    //if (5!=5) // dois sinais de igual (==) é uma comparação positiva , um sinal de igual é uma atribuição , exclamação e sinal de igual (!=) comparação negativa
    //{
        /* code */
    //}else
    //{
        /* code */
    //}
    
    /*
    1) true -> 1
    2) false -> 0
    OBS: o sinal de ! representa a negação de argumentos. ! = NOT
    */

    return 0;

}