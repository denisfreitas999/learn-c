#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct PilhaDinamica
{
    int valor;
    struct PilhaDinamica *prox;        
}PilhaDinamica;

typedef struct Pilha{
    PilhaDinamica *topo;
}Pilha;

void Pilha_Inicia(Pilha *p){
    p->topo = NULL;
}

int Pilha_Vazia(Pilha *p){
    if(p->topo == NULL){
        printf("Pilha Vazia\n");
        return 1;
    }else{
        return 0;
    }
}

void Pilha_Empilha(Pilha *p, int valor){
    PilhaDinamica *novo = (PilhaDinamica*)malloc(sizeof(PilhaDinamica));
    novo->valor = valor;
    novo->prox = p->topo;
    p->topo = novo; 
}

void Pilha_Desempilha(Pilha *p){
    if(Pilha_Vazia(p) == 0){
        PilhaDinamica *aux;
        int removido;
        aux = p->topo;
        removido = p->topo->valor;
        p->topo = p->topo->prox;
        printf("%i\n", removido);
        free(aux);
    }
}

void Pilha_Topo(Pilha *p){
    printf("%i\n", p->topo->valor);
}

void Pilha_Imprime(Pilha *p){
    PilhaDinamica *aux;
    aux = p->topo;
    while (aux != NULL)
    {           
        printf("%i ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
    free(aux);
}

int main(void){
    
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    Pilha_Inicia(p);
    Pilha_Empilha(p, 1);
    Pilha_Empilha(p, 2);
    Pilha_Empilha(p, 3);
    Pilha_Imprime(p);
    Pilha_Empilha(p, 4);
    Pilha_Imprime(p);
    //printf("%i", Pilha_Vazia(p));
    //Pilha_Desempilha(p);
    //Pilha_Imprime(p);
    //Pilha_Desempilha(p);
    //Pilha_Imprime(p);
    //Pilha_Desempilha(p);
    //Pilha_Desempilha(p);
    //Pilha_Desempilha(p);
    //Pilha_Desempilha(p);
    Pilha_Topo(p);


    return 0;
}