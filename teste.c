#include <stdio.h>
#include <stdlib.h>

struct PilhaDinamica{
    int valor;
    struct PilhaDinamica *prox;
};

struct PilhaDinamica *topo;
int tamanhomaximo = 10;

int pilhavazia ()
{
    if (topo == NULL)
        return 1;
    else
        return 0;
}

void inserir (int valor)
{
    struct PilhaDinamica *novo;
    novo = (struct PilhaDinamica*) malloc (sizeof(struct PilhaDinamica));
    novo->valor = valor;
    novo->prox = topo;
    topo = novo;
}

void remover ()
{
    int removido;
    struct PilhaDinamica *aux;
    aux =  topo;
    removido = topo->valor;
    topo = topo->prox;
    printf("\nO valor %d foi removido da pilha\n\n", removido);
    free(aux);
}

void listar ()
{
    struct PilhaDinamica *aux;
    aux = topo;
    printf("\nOs valores inseridos na pilha sao: ");
    while(aux != NULL)
    {
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
    printf("\n\n");
}

void main()
{
    int opcao, valor, tamanhoatual;
    topo = NULL;
    opcao = 0;
    tamanhoatual = 0;

    while (opcao != 5)
    {
        printf("\nEscolha uma opcao:");
        printf("\n1 - Inserir um valor na pilha");
        printf("\n2 - Remover um valor da pilha");
        printf("\n3 - Mostrar o topo da pilha");
        printf("\n4 - Listar os elementos da pilha");
        printf("\n5 - Sair do programa");
        printf("\nOpcao escolhida: ");
        scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
            if (tamanhoatual < tamanhomaximo)
            {
                printf("\nQual valor sera inserido na pilha: ");
                scanf("%d",&valor);
                printf("\n\n");
                inserir(valor);
                tamanhoatual++;
            }
            else
                printf("\nPilha cheia - Nao foi possivel executar essa operacao\n\n");
            break;

        case 2:
            if (pilhavazia()== 0)
            {
                remover();
                tamanhoatual--;
            }
            else
                printf("\nPilha vazia - Nao foi possivel executar essa operacao\n\n");
            break;

        case 3:
            if (pilhavazia()== 0)
                printf("\nO valor no topo da pilha eh: %d\n\n", topo->valor);
            else
                printf("\nPilha vazia - Nao foi possivel executar essa operacao\n\n");
            break;

        case 4:
            if (pilhavazia()== 0)
                listar();
            else
                printf("\nPilha vazia - Nao foi possivel executar essa operacao\n\n");
            break;
        }
    }
}