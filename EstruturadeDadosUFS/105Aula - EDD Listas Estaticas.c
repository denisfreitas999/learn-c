#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct aluno{
    int matricula;
    char nome[30];
    float nota1,nota2,nota3;
};

typedef struct lista{
    int qtd; //Quantidade de posições ocupadas na minha lista
    struct aluno dados[MAX]; //Vetor que aloca 100 alunos com os dados da estrutura Aluno
}Lista;

Lista* cria_lista(){
    Lista *li;
    li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL){ // Verifica se a alocação funcionou;
        li->qtd = 0;
        return li;
    }
}

void libera_lista(Lista* li){
    free(li);
}

int main(void){
    Lista *li;
    li = cria_lista();
    
    libera_lista(li);
    return 0;
}