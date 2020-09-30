#include <stdio.h>

int main(void) {

    //================= 1ª forma de declação de estruturas =======================
    struct horario{
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;

    agora.horas = 10;
    agora.minutos = 20;
    agora.segundos = 30;

 


    printf("%i:%i:%i\n", agora.horas,
                       agora.minutos,
                       agora.segundos);
    
    //================= Outras formas de declação de estruturas =======================
    /*
     struct horario1{
        int horas;
        int minutos;
        int segundos;
    }agora1,var2,var3,va4,etc;  //poderia declarar mais de uma variável da estrutura
    */

    /*
    struct horario1{
        int horas;
        int minutos;
        int segundos;
    }agora1 = {18, 57, 30}; // As variáveis podem ser declaradas em sequência.
    */

    /*
    agora1.horas = 18;
    agora1.minutos = 57;
    agora1.segundos = 30;
    */

    struct horario1{
        int horas;
        int minutos;
        int segundos;
    };

   // struct horario1 agora1 = {19,11,57};


   struct horario1 agora1 = {.segundos = 10, .minutos = 20, .horas = 30}; // é possível também mudar
                                                                          // a posição dos valores
                                                                          // das variáveis na hora
                                                                          // da declaração.


    printf("%i:%i:%i\n", agora1.horas,
                       agora1.minutos,
                       agora1.segundos);



    return 0;
}