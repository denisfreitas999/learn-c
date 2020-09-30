#include <stdio.h>

int main (void){    

    int intVar = 9999999;
    int intVar2 = 10;
    double doubleVar = 100.123456789;

    //Formatação de variáveis inteiras 
    printf("Variavel inteira(%%d) = %d\n", intVar); // o "d" vem de decimais ,       números na base 10   
    printf("Variavel inteira(%%i) = %i\n", intVar); // o "i" vem de integer(inteiros),     números na base 10   
    printf("Variavel inteira(%%x) = %x\n", intVar); // o "x" vem de hexadecimais , números na base 16
    printf("Variavel inteira(%%o) = %o\n", intVar); // o "o" vem de números oitavos , números na base 8
    //É possível controlar a posição ao se printar uma variável vejamos abaixo
    printf("\n");
    //Formatação de variáveis inteiras 
    printf("Variavel inteira(%%d) = %7d\n", intVar2);//note que podemos colocar %"quantidade de casas" , entre a porcetagem e o d  
    printf("Variavel inteira(%%i) = %i\n", intVar);
    printf("\n");

    //Formatação de variáveis float e double
    printf("Variavel double(%%f) = %f\n", doubleVar); // Demonstra uma precisão com n casas decimais (nesse caso 6casas) e arredonda o valor.
    printf("Variavel double(%%e) = %e\n", doubleVar); // Notação científica.
    printf("Variavel double(%%g) = %g\n", doubleVar); // É tipo o %f, só que a precisão é menor e ele não arredonda o valor.
    printf("Variavel double(%%a) = %a\n", doubleVar); // 
    printf("\n");

    //É possível escolher o número de casas decimais do %f, veja como é fácil:
    printf("Variavel double(%%f) = %.2f\n", doubleVar); // % .numero_de_casas_decimais f


    return 0;
}   
