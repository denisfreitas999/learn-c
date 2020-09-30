#include <stdio.h>

int main(){

    int x = 16;
    int y = 3;

    float resultado = x / y;
    printf("%f\n", resultado); 
     // resultado esperado: 5.333333 , resultado printado: 5.000000
    // O c é uma liguagem fortemente tipada em minha concepção, pois mesmo declarando a divisão
    // de 2 inteiros com resto diferente de 0, ele nos trás somente o valor inteiro a divisão.
    // Isso acontece pois as variáveis foram primeiramente declaradas como variáveis inteiras,
    // e por isso ao ser executado a divisão, mesmo que declarada como float, ele nos trás 
    // somente a parte inteira como resultado.

    // Para corrigir esse tipo de coisa, podemos utilizar o recurso de CASTING, que força a expressão
    // a retornar determinado tipo de valor. Ao colocar parênteses e o tipo na frente da expressão
    // a variável a seguir recebe esse tipo informado, fazendo assim a manutenção da expressão.
    float resultado1 = (float) x / y;
    printf("%f\n", resultado1);

    

    return 0;
}