#include <stdio.h>

int main (void){

    float notas[5] = {0};
    float total, media = 0;

    printf("Insira 5 notas: \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &notas[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        //total = notas [i] + total;
        total += notas [i];
    }

    media = (total / 5);

    printf("A media eh: %f", media);

    /*
    printf("As notas digitadas foram:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", notas[i]);
    }
    */

    return 0;
}