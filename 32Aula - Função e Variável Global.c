#include <stdio.h>

int gVariavelGlobal = 2;    

int main() {

    void teste (void);
    printf("Global = %i\n", gVariavelGlobal);
    teste();
    teste();
    teste();

    return 0;
}

void teste (void){

    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica  *= 2;

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica  *= 2;

    printf("Local automatica: %i\n", variavelLocalAutomatica); 
    printf("Local estatica: %i\n", variavelLocalEstatica);
    printf("Global = %i\n", gVariavelGlobal); 

}