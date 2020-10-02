#include <stdio.h>

int main(void){

    _Bool stringsIguais(char s1[], char s2[]);


    stringsIguais("casa", "cara");

    

    return 0;
}

_Bool stringsIguais(char s1[], char s2[]){

   int num1Caracteres = 0;
   int num2Caracteres = 0;

   while (s1[num1Caracteres] != '\0')
   {
       ++num1Caracteres;
   }
    
   while (s2[num2Caracteres] != '\0')
   {
       ++num2Caracteres;
   }
    
    if (num1Caracteres != num2Caracteres)
    {
        printf("As strings sao diferentes.\n");
    }else
    {
        
            for (int i = 0; i < num1Caracteres; i++)
            {
                if (s1[i] != s2[i])
                {
                    printf("As strings sao diferentes.\n");
                }
                
                
            }
            
    }
    
    

}


