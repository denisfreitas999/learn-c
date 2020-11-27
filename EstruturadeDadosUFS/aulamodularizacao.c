//Arquivo aulamodularizacao.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "aulamodularizacao.h" // Importando uma biblioteca criada por mim

//Definição dos tipos de dados

struct ponto{
    float x;
    float y;
};

//Aloca e retorna um ponto com coordenadas "x" e "y"
Ponto *pto_cria(float x, float y){
    Ponto *p = (Ponto*)malloc(sizeof(Ponto));
    if (p != NULL)
    {
        p->x = x;
        p->y = y;
    }
    return p;
}
//Libera a memória alocada para um ponto

void pto_libera(Ponto *p){
    free(p);
}

//Recupera, por referência, o valor de um ponto

//void pto_acessa(Ponto *p, float *x, float *y){
//   *x = p->x;
//    *y = p->y;
//}

//Atribui um ponto as coordenadas "x" e "y"
void pto_atribui(Ponto *p, float x, float y){
    p->x = x;
    p->y = y;
}

//Calcula a distância entre dois pontos 
float pto_distancia(Ponto *p1, Ponto *p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}

int main(void){
    Ponto *p, *q;
    //Ponto r; ERRO
    p = pto_cria(10,21);
    q = pto_cria(7,25);
    //q->x = 2; //ERRO
    float d;
    d = pto_distancia(p,q);
    printf("Distancia entre pontos: %f\n", d);
    pto_libera(q);
    pto_libera(p);

    return 0;
}