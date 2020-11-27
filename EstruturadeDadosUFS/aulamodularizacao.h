//Arquivo aulamodularizacao.h
typedef struct ponto Ponto;

//Cria um novo ponto
Ponto *pto_cria(float x, float y); //fopen

//Libera um ponto
void pto_libera(Ponto *p); //fclose

//Acessa os valores de "x" e "y" de um ponto 
void pto_acessa(Ponto *p, float x, float y);

//Atribui os valores "x" e "y" a um ponto
void pto_atribui(Ponto *p, float x, float y);

//Calcula a distância entre dois pontos
float pto_distancia(Ponto *p1, Ponto *p2);