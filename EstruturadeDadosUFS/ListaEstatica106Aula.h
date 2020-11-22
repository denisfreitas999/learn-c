//Arquivo ListaEstatica106Aula.h
#define MAX 100

struct aluno{
    int matricula;
    char nome[30];
    float nota1,nota2,nota3;
};
typedef struct lista Lista;

//Cria uma lista
Lista* cria_lista();

//Libera uma lista
void libera_lista(Lista* li);

//Saber o tamanho da lista
int tamanho_lista(Lista* li);

//Saber se a lista está cheia
int lista_cheia(Lista* li);

//Saber se a lista está vazia
int lista_vazia(Lista* li);

//Inserir elemento no final da lista
int insere_lista_final(Lista* li, struct aluno al);

//Inserir elemento no inicio da lista
int insere_lista_inicio(Lista* li, struct aluno al);

//Inserir elemento  de forma ordenada na lista , ordenação levando em conta a matrícula do aluno
int insere_lista_ordenada(Lista* li, struct aluno al);

//Imprime elemento da lista
int imprime_lista_elemento(Lista* li, int x);

//Imprime toda a lista
int imprime_lista(Lista* li);

//Remove o último elemento da lista
int remove_lista_final(Lista* li);

//Remove o primeiro elemento da lista
int remove_lista_primeiro(Lista* li);

//Remove um elemento ordenado da lista, ordenação levando em conta a matrícula do aluno
int remove_lista_ordenada(Lista* li, int matricula);

//Consultar dados pela matrícula
int consulta_lista_matricula(Lista* li, int matricula);