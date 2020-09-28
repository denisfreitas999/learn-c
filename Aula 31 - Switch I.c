#include <stdio.h>
#include <stdlib.h>

    int main(){
        
        int i = 0;
        printf("Digite um valor de 0 a 9: \n");
        scanf("%i", &i);

        switch (i)
        {
        case 0:
            printf("A opcao digitada foi 'zero' ");
            break;
        case 1:
            printf("A opcao digitada foi 'um' ");
            break;
        case 2:
            printf("A opcao digitada foi 'dois' ");
            break;
        case 3:
            printf("A opcao digitada foi 'tres' ");
            break;
        case 4:
            printf("A opcao digitada foi 'quatro' ");
            break;
        case 5:
            printf("A opcao digitada foi 'cinco' ");
            break;
        case 6:
            printf("A opcao digitada foi 'seis' ");
            break;
        case 7:
            printf("A opcao digitada foi 'sete' ");
            break;
        case 8:
            printf("A opcao digitada foi 'oito' ");
            break;
        case 9:
            printf("A opcao digitada foi 'nove' ");
            break;           
        default: 
            // A instrução default é executada quando:
            //(1) Nenhum item seja satisfatório;
            //(2) Não haja o argumento break.
            printf("Valor digitado nao correspondente");
            break;
        }

        return 0;
    }