#include <stdio.h>

int main(void){

    void funcaoPrint(int x, int vetor[]);
    int x = 10;
    int vetor[3]= {10};

    funcaoPrint(x, vetor);

    printf("Variavel int na funcao principal = %i \n", x);

    printf("Vetor na funcao principal = %i \n", vetor[1]);

    return 0;    
}

void funcaoPrint(int x, int vetor[]){
    x = x + 10;
    vetor[1] = 20;

    printf("Variavel int na funcao principal = %i \n", x);

    printf("Vetor na funcao principal = %i \n", vetor[1]);
}

// Considerações:
// As variáveis do tipo "char, double e int" de funções externas não alteram o valor principal
// declarado de uma mesma variavel no escopo main. Com vetore e matrizes isso é diferente,
// uma vez alterado o valor de determinada posição de um vetor/matriz numa função externa
// ao escopo principal, este valor será endereçado a variavel do escopo main, substituindo o
// valor inicialmente declarado. Depende muito da posição em que é declarada a função no
// bloco de códigos.