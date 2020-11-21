#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

typedef struct {
    int Item[MAXTAM];
    int Topo;
} TPilha;

void  TPilha_Inicia(TPilha *p){
    p->Topo = -1;
}

int TPilha_Vazia(TPilha *p){
    if(p->Topo == -1){
        return 1;
    }else{
        return 0;
    }
}

int TPilha_Cheia(TPilha *p){
    if(p->Topo == MAXTAM - 1){
        return 1;
    }else
    {
        return 0;
    }
    
}

void TPilha_Insere (TPilha *p, int valor){
    if(TPilha_Cheia(p) == 1){
        printf("Pilha Cheia\n");
    }else
    {
        p->Topo++;
        p->Item[p->Topo] = valor;
    }
    
}

int TPilha_Retira (TPilha *p){
    if(TPilha_Vazia(p) == 1){
        printf("Pilha Vazia\n");
    }else
    {
        int valor = p->Item[p->Topo];
        p->Topo--;
        return valor;
    }
    
}

int TPilha_Topo (TPilha *p){
    if(TPilha_Vazia(p) == 1){
        printf("Pilha Vazia\n");
    }else
    {
        return p->Item[p->Topo];
    }
}

void TPilha_Imprime (TPilha *p){
    if (TPilha_Vazia(p) == 1)
    {
        printf("Pilha Vazia\n");
    }else
    {   
        int temp = p->Topo;
        for (int i = -1; i < temp; i++){
            printf("%i ", p->Item[p->Topo]);
            p->Topo--;
        } 
    }
    
    
     
}

int main(void){
    
    TPilha *p = (TPilha*)malloc(sizeof(TPilha));
    TPilha_Inicia(p);

    TPilha_Insere(p, 1);
    TPilha_Insere(p, 2);
    TPilha_Insere(p, 3);

    int aux;
    aux = TPilha_Retira(p);
    printf("Saiu: %i\n", aux);

    TPilha_Imprime(p);
    

    return 0;
}