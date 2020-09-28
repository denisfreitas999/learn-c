#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char c;

    printf("Digite um caracter em letra minuscula:\n");
    scanf("%c", &c);

    if (c >='a')
    {
        printf("Segue a letra que voce digitou em maiuscula: %c", toupper(c) );
    }
    

    return 0;

}