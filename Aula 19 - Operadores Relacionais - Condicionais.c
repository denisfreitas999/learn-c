    #include <stdio.h>
    #include <stdlib.h>

    int main(){

        int iJ, iI, idade;
        iJ = 17;
        iI = 60;
        idade = 0;

        printf("Por favor digite a sua idade\n");
        scanf("%i", &idade);

        if (idade <= iJ)
        {
            printf("A pessoa eh jovem");
        }else if( idade > iJ && idade < iI)
        {
            printf("A pessoa eh adulta");
        }else
        {
            printf("A pessoa eh idosa");
        }
        

        return 0;

    }