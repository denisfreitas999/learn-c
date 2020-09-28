#include <stdio.h>
#include <stdlib.h>

int main (){

    float resultado;
    resultado = 0;

    float vetor [4] = {0};
    float matriz[4][4] = {0};

    for (int i = 0; i < 4; i++)
    {
        printf("Digite as notas do %i aluno:\n", i+1);
        for (int j = 0; j < 4; j++)
        {
                scanf("%f", &matriz[i][j]);
        }
        
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
                resultado += matriz[i][j];   
        }
        //printf("A media do %i aluno foi: %f\n", i+1, resultado/4);

        vetor[i] = resultado/4;
        printf("A media do aluno %i foi: %f\n", i+1, vetor[i]);
        
        resultado = 0;
   
    }


    return 0;
}