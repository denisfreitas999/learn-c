#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(){

    float num1, num2, resultado;
    char op = '0';

    do
    {
        num1 = num2 = resultado = 0; // resetar as variáveis
        //imprimir  as opções  da nossa calculadora
        printf(" (1) somar\n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");
        printf(" (0) Sair do Programa\n");

        printf("Informe a operacao desejada:\n");
        op = getche(); // getchar() O usuário precisa pressionar Enter para continuar o fluxo do programa e o getche viabiliza um processo continuo sem necessidade de pressionar Enter.
        printf("\n");
        
        if(op!='0'){
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            if (op=='1')
            {
                resultado = num1 + num2;               
            }else if (op=='2')
            {
                resultado = num1 - num2;
            }else if (op=='3')
            {
                resultado = num1 * num2;
            }else if (op=='4')
            {
                resultado = num1 / num2;
            }else
            {
                printf("Opcao invalida, digite uma das opcoes listadas\n");
            }           
                     
        }     
        printf("O resultado eh: %f\n", resultado);
        //system("pause"); //para o programa
        printf("Pressione uma tecla para realizar uma nova operacao: \n");
        getch();
        system("cls");//limpa a tela
    } while (op !='0');
    
    return 0;
}