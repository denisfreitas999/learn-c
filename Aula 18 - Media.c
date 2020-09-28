#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("\t\t\t\t Media Escolar 1.0\n");
    printf("Digite sua primeira nota bimestral:\n");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota bimestral:\n");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota bimestral:\n");
    scanf("%f", &nota3);
    printf("Digite sua quarta nota bimestral:\n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Sua media anual eh: %f", media);


    if (media >= 7)
    {
        printf("Voce foi aprovado\n");
    }else
    {
        printf("Voce foi reprovado\n");
    }
    
    

    return 0;

}