#include <stdlib.h>
#include <stdlib.h>
#include <ctype.h>

int main (){

    /*
    faça(){

    }
    enquanto(true);
    */

    int contador = 0;
    char c;
    do
    {       contador +=1;
            printf("digite 0 para sair do loopping\n");
            printf("quantidade de vezes %i\n", contador);
            c = getchar();
    } while ( c != '0');
    

    return 0;
}