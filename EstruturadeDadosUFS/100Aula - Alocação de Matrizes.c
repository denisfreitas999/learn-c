#include <stdio.h>
#include <stdlib.h>

int main(void){

    /*
    Alocação de um arrays multidimensionais:
    Para alocar um array com mais de 1 dimensão
    precisamos utilizar o conceito de "ponteiro para ponteiro"
    */

    //Ponteiro (1 nivel): Cria um vetor.
    int *p = (int *) malloc(5*sizeof(int));
    //Ponteiro para ponteiro (2 nivel): Cria uma matriz.
    int **m;
    //Ponteiro para ponteiro (3 nivel): Cria uma matriz tridimensional, array com 3 dimensões
    int ***d;

    /*
    Em um ponteiro para ponteiro, cada nível do ponteiro permite criar uma nova dimensão no array.
    int* -> permite criar um array de int
    int**-> permite criar um array de int*
    */

   int **p; // 2 "*" = 2º nível = 2 dimensões
   int i, j, N = 2;
   //cria um array de ponteiros (int*)
   p = (int**) malloc(N * sizeof(int*));
   for ( i = 0; i < N; i++)
   {
       /* Cria um array de int */
       p[i] = (int *) malloc(N * sizeof(int));
       for ( j = 0; j < N; j++)
       {
           /* lê a matriz de inteiros  */
           scanf("%i", &p[i][j]);
       }
       
   }
    //liberando a memória das colunas primeiramente
   for ( i = 0; i < N; i++)
   {
       free(p[i]);
   }
   //por fim liberamos a memória das linhas
   free(p);

   // O primeiro malloc cria as linhas da matriz
   // O segundo malloc cria as colunas da matriz

    return 0;
}