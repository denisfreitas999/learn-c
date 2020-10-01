#include <stdio.h>
#include <string.h>


int main(){

    // Strings são conjuntos de caracteres, em C uma string é formada através de armazenamento
    // de caracteres em vetores. Existe uma biblioteca própria para manipulação de strings em c
    // ela pode ser incluida utilizando o #include <string.h>

    char teste[] = {'b','r','a','s','i','l'};

    for (int i = 0; i < 6; i++)
    {
        printf("%c", teste[i]);
    }
    printf("\n");
    

    return 0;
}