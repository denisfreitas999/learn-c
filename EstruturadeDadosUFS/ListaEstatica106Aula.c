//Arquivo ListaEstatica106Aula.c
#include <stdio.h>
#include <stdio.h>
#include "ListaEstatica106Aula.h"
#include <string.h>

struct lista
{
    int qtd;
    struct aluno dados [MAX];
};

Lista* cria_lista(){
    Lista *li;
    li = (Lista*)malloc(sizeof(struct lista));
    if(li != NULL){
        li->qtd = 0;
        return li;
    }else{
        printf("ERRO NA ALOCACAO CRIA_LISTA!");
    }
}

void libera_lista(Lista* li){
    free(li);
}

int tamanho_lista(Lista* li){
    if(li == NULL){
        return -1;
    }else
    {
        return li->qtd;
    }
}

int lista_cheia(Lista* li){
    if(li == NULL){
        return -1;
    }
    if(li->qtd == MAX){
        printf("Lista Cheia\n");
        return 1;
    }else
    {
        return 0;
    }
}

int lista_vazia(Lista* li){
    if(li == NULL){
        return -1;
    }
    if (li->qtd == 0)
    {   
        printf("Lista Vazia\n");
        return 1;
    }else
    {
        return 0;
    }
}

int insere_lista_final(Lista* li, struct aluno al){
    if(li == NULL){
        return 0;
    }
    if(lista_cheia(li) == 1){
        return 0;
    }
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}

int insere_lista_inicio(Lista* li, struct aluno al){
    if (li == NULL)
    {
        return 0;
    }
    if (lista_cheia(li) == 1)
    {
        return 0;
    }
    for (int i = li->qtd-1; i >= 0; i--)
    {
        li->dados[i+1] = li->dados[i];
    }
    li->dados[0] = al;
    li->qtd++;
    return 1;
}

int insere_lista_ordenada(Lista* li, struct aluno al){ 
    if(li == NULL){
        return 0;
    }
    if(lista_cheia(li) == 1){
        return 0;
    }
    int k,i = 0;
    while (i < li->qtd && li->dados[i].matricula < al.matricula)
    {
        i++;
    }
    for ( k = li->qtd-1; k >= i; k--)  {
        li->dados[k+1] = li->dados[k];
    }
    li->dados[i] = al;
    li->qtd++;
    return 1;
}

int imprime_lista_elemento(Lista* li, int x){
    if (lista_vazia(li) == 1)
    {
        return 0;
    }
    printf("Matricula: %i\n", li->dados[x].matricula);
    printf("Nome: %s\n", li->dados[x].nome);
    printf("Nota 1: %.1f\n", li->dados[x].nota1);
    printf("Nota 2: %.1f\n", li->dados[x].nota2);
    printf("Nota 3: %.1f\n", li->dados[x].nota3);
    return 1;
}

int imprime_lista(Lista* li){
    if (lista_vazia(li) == 1)
    {
        return 0;
    }    
    for (int x = 0; x < li->qtd; x++)
    {
        printf("Matricula: %i\n", li->dados[x].matricula);
        printf("Nome: %s\n", li->dados[x].nome);
        printf("Nota 1: %.1f\n", li->dados[x].nota1);
        printf("Nota 2: %.1f\n", li->dados[x].nota2);
        printf("Nota 3: %.1f\n", li->dados[x].nota3);
        printf("\n");
    }
    return 1;

}

int remove_lista_final(Lista* li){
    if(li == NULL){
        return 0;
    }
    if (lista_vazia(li) == 1)
    {
        return 0;
    }
    li->qtd--;
    return 1;
}

int remove_lista_primeiro(Lista* li){
    if (li == NULL)
    {
        return 0;
    }
    if (lista_vazia(li) == 1){
        return 0;
    }
    for (int i = 0; i < li->qtd-1; i++)
    {
        li->dados[i] = li->dados[i+1];
    }
    li->qtd--;
    return 1;
}

int remove_lista_ordenada(Lista* li, int matricula){
    if (li == NULL)
    {
        return 0;
    }
    if (lista_vazia(li) == 1)
    {
        return 0;
    }
    int k, i = 0;
    while( i < li->qtd && li->dados[i].matricula != matricula){
        ++i;
    }
    if (i == li->qtd)
    {
        printf("Matricula nao encontrada\n");
        return 0;
    }
    for (k = i; k < li->qtd-1; k++)
    {
        li->dados[k] = li->dados[k+1];
    }
    li->qtd--;
    return 1;
}

int consulta_lista_matricula(Lista* li, int matricula){
    if (lista_vazia(li) == 1)
    {
        return 0;
    }
    if (li == NULL)
    {
        return 0;
    }
    int i = 0;
    while (i < li->qtd && li->dados[i].matricula != matricula)
    {
        i++;
    }
    if (i == li->qtd)
    {
        printf("Matricula nao encontrada\n");
        return 0;
    }
    
    printf("Nome: %s\n", li->dados[i].nome);
    printf("Nota 1: %.1f\n", li->dados[i].nota1);
    printf("Nota 2: %.1f\n", li->dados[i].nota2);
    printf("Nota 3: %.1f\n", li->dados[i].nota3);
    return 1;
}

int main(void){
    Lista *li;
    li = cria_lista();
    
    struct aluno dados_alunos1;
    dados_alunos1.matricula = 201210192;
    strcpy (dados_alunos1.nome, "Denisson Freitas");
    dados_alunos1.nota1 = 10;
    dados_alunos1.nota2 = 9;
    dados_alunos1.nota3 = 8;
    int y = insere_lista_inicio(li, dados_alunos1);
 
  
    struct aluno dados_alunos3;
    dados_alunos3.matricula = 201210193;
    strcpy (dados_alunos3.nome, "Nidivaldo Alves");
    dados_alunos3.nota1 = 8;
    dados_alunos3.nota2 = 10;
    dados_alunos3.nota3 = 9;
    int z = insere_lista_inicio(li, dados_alunos3);

    struct aluno dados_alunos2;
    dados_alunos2.matricula = 201210194;
    strcpy (dados_alunos2.nome, "Angela Maria");
    dados_alunos2.nota1 = 9;
    dados_alunos2.nota2 = 8;
    dados_alunos2.nota3 = 10;
    int x = insere_lista_final(li, dados_alunos2);

    struct aluno dados_alunos4;
    dados_alunos4.matricula = 201210195;
    strcpy (dados_alunos4.nome, "Benjamin Freitas");
    dados_alunos4.nota1 = 9;
    dados_alunos4.nota2 = 8;
    dados_alunos4.nota3 = 10;
    int w = insere_lista_ordenada(li, dados_alunos4);
    

   // printf("%i\n", tamanho_lista(li));

    //imprime_lista_elemento(li, 3);
    //printf("\n");

    imprime_lista(li);

    printf("===================================================\n");
    remove_lista_final(li);
    imprime_lista(li);

    printf("===================================================\n");
    remove_lista_primeiro(li);
    imprime_lista(li);

    printf("===================================================\n");
    remove_lista_ordenada(li, 201210192);
    imprime_lista(li);
    printf("===================================================\n");

    consulta_lista_matricula(li, 201210194);

    libera_lista(li);
    return 0;
}

