#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <conio.h>

int main (void){
// Faça um programa que preencha uma matriz 10 × 3 com as notas de dez alunos em três provas. O
//programa deverá mostrar um relatório com o número dos alunos (número da linha) e a prova em que
//cada aluno obteve menor nota. Ao final do relatório, deverá mostrar quantos alunos tiveram menor
//nota em cada uma das provas: na prova 1, na prova 2 e na prova 3.

    float matriz[10][3] = {{1,2,5},
                           {10,6,9},
                           {5,4,3},
                           {9,6,2},
                           {3,4,5},
                           {10,9,8},
                           {7,6,0.5},
                           {0,3,5},
                           {1.5,8,9},
                           {9,8,7}};
    float menor, menor1, menor2, menor3, menor4, menor5, menor6, menor7, menor8, menor9;
    menor = menor1 = menor2 = menor3 = menor4 = menor5 = menor6 = menor7 = menor8 = menor9 = 10;
    

    /*
    printf("Insira as notas dos 10 alunos, digitando as 3 notas sequenciais de cada aluno por vez: \n");
   
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
        
    }
    */
        for (int i = 0; i < 10; i++)
    {   
        switch (i)
        {
        case 0 :
            for (int j = 0; j < 3; j++)
        {
            if (menor >= matriz[i][j])
            {
                menor = matriz[i][j];
            }
            
        }
        printf("Numero do aluno: %i ; Menor nota deste aluno: %f\n", i, menor);
            break;
        case 1 :
            for (int j = 0; j < 3; j++)
        {
            if (menor1 >= matriz[i][j])
            {
                menor1 = matriz[i][j];
            }
            
        }
        printf("Numero do aluno: %i ; Menor nota deste aluno: %f\n", i, menor1);
            break;

        case 2 :
            for (int j = 0; j < 3; j++)
        {
            if (menor2 >= matriz[i][j])
            {
                menor2 = matriz[i][j];
            }
            
        }
        printf("Numero do aluno: %i ; Menor nota deste aluno: %f\n", i, menor2);
            break;
        
        case 3 :
            for (int j = 0; j < 3; j++)
        {
            if (menor3 >= matriz[i][j])
            {
                menor3 = matriz[i][j];
            }
            
        }
        printf("Numero do aluno: %i ; Menor nota deste aluno: %f\n", i, menor3);
            break;

        case 4 :
            for (int j = 0; j < 3; j++)
        {
            if (menor4 >= matriz[i][j])
            {
                menor4 = matriz[i][j];
            }
            
        }
        printf("Numero do aluno: %i ; Menor nota deste aluno: %f\n", i, menor4);
            break;

        case 5 :
            for (int j = 0; j < 3; j++)
        {
            if (menor5 >= matriz[i][j])
            {
                menor5 = matriz[i][j];
            }
            
        }
        printf("Numero do aluno: %i ; Menor nota deste aluno: %f\n", i, menor5);
            break;
        
        case 6 :
            for (int j = 0; j < 3; j++)
        {
            if (menor6 >= matriz[i][j])
            {
                menor6 = matriz[i][j];
            }
            
        }
        printf("Numero do aluno: %i ; Menor nota deste aluno: %f\n", i, menor6);
            break;

        case 7 :
            for (int j = 0; j < 3; j++)
        {
            if (menor7 >= matriz[i][j])
            {
                menor7 = matriz[i][j];
            }
            
        }
        printf("Numero do aluno: %i ; Menor nota deste aluno: %f\n", i, menor7);
            break;
        
        case 8 :
            for (int j = 0; j < 3; j++)
        {
            if (menor8 >= matriz[i][j])
            {
                menor8 = matriz[i][j];
            }
            
        }
        printf("Numero do aluno: %i ; Menor nota deste aluno: %f\n", i, menor8);
            break;
         
         case 9 :
            for (int j = 0; j < 3; j++)
        {
            if (menor9 >= matriz[i][j])
            {
                menor9 = matriz[i][j];
            }
            
        }
        printf("Numero do aluno: %i ; Menor nota deste aluno: %f\n", i, menor9);
            break;


        default:
            break;
        }
        
   
    }
    
    return 0;
}