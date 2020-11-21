#include <stdio.h>
#include <stdlib.h>

typedef struct Pilha
{
    int valor;
    struct PilhaDinamica *prox;
}PilhaDinamica;

PilhaDinamica *topo;


int Pilha_Vazia(){
    if(topo == NULL){
        return 1;
    }else
    {
        return 0;
    }  
}

void Pilha_Empilha(int valor){
    PilhaDinamica *novo;
    novo = (PilhaDinamica*)malloc(sizeof(PilhaDinamica));
    novo->valor = valor;
    novo->prox = topo;
    topo = novo;
}

void Pilha_Remove(){
    if (Pilha_Vazia() == 0)
    {
        int removido;
        PilhaDinamica *aux;
        aux = topo;
        removido = topo->valor;
        topo = topo->prox;
        free(aux);
    }else
    {
        printf("Pilha Vazia");
    }   
}

void Pilha_Imprime(){
    PilhaDinamica *aux;
    aux = topo;
    while (aux != NULL)
    {   
        printf("%i ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
    
}

void Pilha_Topo(){
    if (Pilha_Vazia() == 0)
    {
        printf("%i\n",topo->valor);
    }else
    {
        printf("Pilha Vazia\n");
    }  
}

int main (void){
    Pilha_Empilha(5);
    Pilha_Empilha(3);
    Pilha_Empilha(2);
    Pilha_Empilha(1);
    Pilha_Imprime();
    Pilha_Remove();
    Pilha_Imprime();
    Pilha_Topo();
    Pilha_Remove();
    Pilha_Imprime();
    Pilha_Topo();
    Pilha_Remove();
    Pilha_Remove();
    Pilha_Remove();
    Pilha_Imprime();
    return 0;
}