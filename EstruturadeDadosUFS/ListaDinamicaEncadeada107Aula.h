//Arquivo ListaDinamicaEncadeada107Aula.h
struct aluno
{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
};

typedef struct elemento* Lista; // Criação do ponteiro lista

//Cria a lista
Lista* cria_lista();

//Libera a lista 
void libera_lista(Lista* li);

//Tamanho da lista
int tamanho_lista(Lista* li);

//Verifica se a lista está cheia :: OBS! A lista só ficará cheia, quando acabar a memória disponível para a alocação, pois se trata de 
//uma lista com alocação dinâmica.
int lista_cheia(Lista* li);

//Verifica se a lista está vazia
int lista_vazia(Lista* li);

//Insere um elemento no início da lista
int insere_lista_inicio(Lista* li, struct aluno al);

//Insere um elemento no final da lista
int insere_lista_final(Lista* li, struct aluno al);

//Insere um elemento de forma ordenada
int insere_lista_ordenada(Lista* li, struct aluno al);

//Remove o primeiro elemento da lista
int remove_lista_inicio(Lista* li);

//Remove o último elemento da lista
int remove_lista_ultimo(Lista* li);

//Remove o aluno buscando sua matricula
int remove_lista_matricula(Lista* li, int matricula_aluno);

//Imprime toda a lista
int imprime_lista(Lista* li);
