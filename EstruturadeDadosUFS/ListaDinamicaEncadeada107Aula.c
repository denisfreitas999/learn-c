//Arquivo ListaDinamicaEncadeada107Aula.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaDinamicaEncadeada107Aula.h"

struct elemento
{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Lista* cria_lista(){
    Lista* li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }else{
        printf("ERRO DE ALOCACAO DA LISTA : CRIA LISTA\n");
    }
    return li;
}

void libera_lista(Lista *li){
    if (li != NULL)
    {
        Elem *no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanho_lista(Lista *li){
    if (li == NULL)
    {   
        printf("ERRO DE ALOCACAO DA LISTA\n");
        return 0;
    }
    int cont = 0;
    Elem* no = *li; // variável auxiliar para não perder o início da lista.
    while (no != NULL)
    {
        cont++;
        no = no->prox;
    }
    return cont;
}

int lista_cheia(Lista* li){
    return 0;
}

int lista_vazia(Lista* li){
    if (li == NULL)  // verifica se a lista foi alocada corretamente, se não foi então li == NULL
    {   
        //printf("ERRO DE ALOCACAO DA LISTA\n");
        return 1;
    }
    if (*li == NULL) // verifica se a primeira posição da lista aponta pro NULL (nesse caso a lista foi alocada corretamente)
    {   
        //printf("Lista Vazia\n");
        return 1;
    }
    return 0;  
}

int insere_lista_inicio(Lista* li, struct aluno al){
    if (li == NULL) return 0;
    Elem* no = (Elem*)malloc(sizeof(Elem));
    if(no == NULL)  return 0;
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}

int insere_lista_final(Lista* li, struct aluno al){
    if (li == NULL) return 0;
    Elem* no = (Elem*)malloc(sizeof(Elem));
    if (no == NULL) return 0;
    no->dados = al;
    no->prox = NULL;
    if ((*li) == NULL) // Lista vazia :: insere no início
    {
        (*li) = no;
    }else{
        Elem *aux = *li;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return 1;
}

int insere_lista_ordenada(Lista* li, struct aluno al){
    if (li == NULL) return 0;
    Elem* no = (Elem*)malloc(sizeof(Elem));
    if (li == NULL) return 0;
    no->dados = al;
    if(lista_vazia(li) == 1) //Insere no início
    {
        no->prox = (*li);
        (*li) = no;
        return 1;
    }else{ // Procura aonde inserir
        Elem *anterior, *atual = *li;
        while (atual != NULL && atual->dados.matricula < al.matricula) //ordenação por matrícula
        {
            anterior = atual;
            atual = atual->prox;
        }
        if (atual == *li) //Insere no início
        { 
            no->prox = (*li);
            (*li) = no;
        }else
        {
            no->prox = anterior->prox;
            anterior->prox = no;
        }
        return 1;       
    }
}

int remove_lista_inicio(Lista* li){
    if (lista_vazia(li) == 1) return 0;
    if (*li == NULL) return 0;
    Elem* no = (*li);
    *li = no->prox;
    free(no);
    return 1;
}

int remove_lista_ultimo(Lista* li){
    if (li == NULL) return 0;
    if (lista_vazia(li) == 1) return 0;
    Elem* atual = *li;
    Elem* anterior;
    while(atual->prox != NULL){
        anterior = atual;
        atual = atual->prox;
    }
    if (atual == (*li)){
        *li = atual->prox;
    }else
    {
        anterior->prox = atual->prox;
    }
    free(atual);
    return 1;
}

int remove_lista_matricula(Lista* li, int matricula_aluno){
    if (li == NULL) return 0;
    if (lista_vazia(li) == 1) return 0;
    Elem* atual = (*li);
    Elem* anterior;
    while(atual != NULL && atual->dados.matricula != matricula_aluno){
        anterior = atual;
        atual = atual->prox;
    }
    if (atual == NULL) return 0; // não encontrado
    if (atual == (*li)){ //remove o primeiro
        *li = atual->prox;
    }else{
        anterior->prox = atual->prox;
    }
    free(atual);
    return 1;
}

int imprime_lista(Lista* li){
    if (li == NULL) return 0;
    if (lista_vazia(li) == 1) printf("Lista Vazia\n");
    Elem* no = *li;
    while (no != NULL)
    {
        printf("Matricula: %i\n", no->dados.matricula);
        printf("Nome: %s\n", no->dados.nome);
        printf("Nota 1: %.1f\n", no->dados.nota1);
        printf("Nota 2: %.1f\n", no->dados.nota2);
        printf("Nota 3: %.1f\n", no->dados.nota3);
        printf("\n");
        no = no->prox;
    }
    free(no);
    return 1;
}

int main(void){

    Lista *li; //ponteiro para ponteiro : consegue guardar dentro dele um endereço de um ponteiro
    li = cria_lista();


    int x = tamanho_lista(li);
    printf("%i\n", x);

    //int y = lista_cheia(li);
    //printf("%i\n", y);
    //lista_vazia(li);

    struct aluno dados_alunos1;
    dados_alunos1.matricula = 201210192;
    strcpy (dados_alunos1.nome, "Denisson Freitas");
    dados_alunos1.nota1 = 8;
    dados_alunos1.nota2 = 9;
    dados_alunos1.nota3 = 10;
    insere_lista_inicio(li, dados_alunos1);
    
    struct aluno dados_alunos2;
    dados_alunos2.matricula = 201210194;
    strcpy (dados_alunos2.nome, "Angela Maria");
    dados_alunos2.nota1 = 10;
    dados_alunos2.nota2 = 9;
    dados_alunos2.nota3 = 8;
    insere_lista_final(li, dados_alunos2);

    struct aluno dados_alunos3;
    dados_alunos3.matricula = 201210193;
    strcpy (dados_alunos3.nome, "Benjamin Freitas");
    dados_alunos3.nota1 = 8;
    dados_alunos3.nota2 = 10;
    dados_alunos3.nota3 = 9;

    insere_lista_ordenada(li, dados_alunos3);
    imprime_lista(li);
    int y = tamanho_lista(li);
    printf("O tamanho da lista eh: %i\n", y);

    printf("=========================================================\n");
    printf("\n");

    remove_lista_inicio(li);
    imprime_lista(li);
    int z = tamanho_lista(li);
    printf("O tamanho da lista eh: %i\n", z);

    printf("=========================================================\n");
    printf("\n");

    remove_lista_ultimo(li);
    imprime_lista(li);
    int w = tamanho_lista(li);
    printf("O tamanho da lista eh: %i\n", w);

    printf("=========================================================\n");
    printf("\n");

    remove_lista_ultimo(li);
    imprime_lista(li);
    int k = tamanho_lista(li);
    printf("O tamanho da lista eh: %i\n", k);

    printf("=========================================================\n");
    printf("\n");
    printf("cabou\n");
    printf("\n");
    printf("=========================================================\n");
    printf("\n");

    struct aluno dados_alunos4;
    dados_alunos4.matricula = 201210195;
    strcpy (dados_alunos4.nome, "Cristine Freitas");
    dados_alunos4.nota1 = 1;
    dados_alunos4.nota2 = 5;
    dados_alunos4.nota3 = 6;
    insere_lista_inicio(li, dados_alunos4);
    

    struct aluno dados_alunos5;
    dados_alunos5.matricula = 201210196;
    strcpy (dados_alunos5.nome, "Ka Freitas");
    dados_alunos5.nota1 = 8;
    dados_alunos5.nota2 = 10;
    dados_alunos5.nota3 = 9;
    insere_lista_final(li, dados_alunos5);

    imprime_lista(li);

    printf("\n");
    printf("=========================================================\n");
    printf("\n");

    remove_lista_matricula(li, 201210196);
    imprime_lista(li);

    libera_lista(li);
    return 0;
}