#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*
    Faça um programa que preencha:
    um vetor com oito posições, contendo nomes de lojas;
    outro vetor com quatro posições, com nomes de produtos;
    uma matriz com os preços de todos os produtos em cada loja.
    O programa deverá mostrar todas as relações (nome do produto — nome da loja) em que o preço não
    ultrapasse R$ 120,00 
    */

int main () {
    
    
    char * vetPosLojas[8] = {"Americanas", "Bompreco", "Gbarbosa", "Magazine", "TodoDia", "Acai", "Extra", "Le_Biscuit"};

    char * vetPosProd[4] = {"detergente","desinfetante", "esponja", "pneu"};

    char * matrizPreco [8][4] =  {0};

    //teste de impressão:
    /*
    for (int i = 0; i < 8; i++)    
    {
        printf("%s\n", vetPosLojas[i]);


    }
    

       for (int j = 0; j < 4 ; j++)    
    {
        printf("%s\n", vetPosProd[j]);
    }
    */
   
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           matrizPreco[i][j] = strcat( vetPosLojas[i], vetPosProd[j]);
           printf("%s", matrizPreco[i][j]);
        
        }
        
    }
    


    return 0;
}