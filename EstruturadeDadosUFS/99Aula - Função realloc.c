#include <stdio.h>
#include <stdlib.h>

int main(void){

    /*
    Função realloc():
    Serve para alocar ou realocar memória durante a execução do programa.
    Ela faz o pedido de memória ao computador e retorna um ponteiro com o 
    endereço do início do espaço de memória alocado
    */
   void* realloc(void* ponteiro, unsigned int num); 
   /*
    Funcionamento:
    A função realloc() recebe como parâmetro:
    - Um ponteiro para o bloco de memória já alocado;
    - A quantidade de bytes a ser alocada.
    E retorna:
    Null - No caso de erro;
    - Ponteiro para a primeira posição do array
   */

    //============Exemplo==============
    //Cria um array com 50 inteiros (200 bytes)
    int *v = (int *) malloc(50 * sizeof(int));

    //Aumenta a memória alocada para 100 inteiros (400 bytes)
    v = (int *) realloc(v, 100 * sizeof(int));

    /*
    Se o ponteiro para o bloco de memória previamente alocado
    for NULL, a função realloc() irá alocar memória da mesma 
    forma que a função malloc().
    */
   int *p;
   //O comando abaixo:
   p = (int *) realloc(NULL, 50 * sizeof(int));
   //Equivale a:
   p = (int *) malloc(50 * sizeof(int));

   /*
    Se o mesmo tamanho de memória solicitado for igual
    a zero, realloc irá liberar a memória da mesma forma
    que a função free().
   */
    int *p = (int *) malloc(50 * sizeof(int));
    //O comando abaixo:
    int *p = (int *) realloc(p, 0);
    //Equivale a:
    free(p);

    //=================== CUIDADO !!!! ===================
    /*
    Se não houver memória suficiente para alocar a memória
    requisitada, a função realloc() retorna NULL, então
    para não perder os dados iniciais podemos fazer :
    */
   int *p = (int *) malloc(5*sizeof(int));
   int *p1 = (int *) realloc(p, 15*sizeof(int));
   if(p1 != NULL){
       p = p1;
   }
   free(p);
   free(p1);
   // Quando usamos o realloc, as novas posições alocadas vão vir com lixo de memória (igual ao malloc).
   
    return 0;
}