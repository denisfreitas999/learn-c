#include <stdio.h>
#include <stdlib.h>

int main () {

    //int x = 0;

    //scanf("%i", &x);
    /*
    if (x==0)
    {
        x = 10;
    }else
    {
        x = 20;
    }
    */

   //x = (x==0) ? (x = 10) : (x = 20);

   //printf("%i", x);
    
   int num1, num2;

   printf("Informe um numero: \n");
   scanf("%i", &num1);

   //if (num1 < 0)
   //{
   //    num2 = 0;
  // }else
  // {
  //     num2 = num1;
  // }
   
    num2 = (num1 < 0) ? (num2 = 0) : (num2 = num1);

   printf("O valor de num2 eh: %i \n", num2);
   

    
    
    

    return 0;
}