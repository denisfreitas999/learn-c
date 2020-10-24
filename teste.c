#include <stdio.h>
#include <stdlib.h>

int main (void){

    //======== INSERTION SORT ==============

    //DETERMINAR A FUNÇÃO DE CRESCIMENTO TEMPORAL PARA O MÉTODO DE ORDENAÇÃO INSERTION SORT PARA "n" ELEMENTOS DO  
    //VETOR "v";

    //CONSIDERAR: 
    //VETOR CRESCENTE (TAMANHO VARIÁVEL) COMO MELHOR CASO;
    //VETOR DESCRESCENTE (TAMANHO VARIÁVEL) COMO PIOR CASO;
    //[90,12,18,83,24,71,67,35,58,40] COMO CASO MÉDIO.

    int n;
    int v[10]={2,8,6,9,5,3,1,4,7};

    for (int i = 1; i < 10; i++)
    {
        int j = i - 1;
        while ((j >= 0) && (v[i] < v[j]))
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = v[i];
        printf("%i ", v[i]);
    }
    

    return 0;
}