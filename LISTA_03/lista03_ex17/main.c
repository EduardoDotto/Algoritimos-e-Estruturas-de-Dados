#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //EXERCICIO 17
    int i=1;
    float total=0,prato=1,bebida=1;;
    printf("=========================================================================\n");
    printf("RESTAURANTE BIOPARK!\n");
    printf("IMFORME O CONSUMIDO\n");
    printf("=========================================================================\n");
        while (prato!=0 && bebida !=0){
        printf("FAVOR INFORMAR O PESO DO PRATO DA PESSOA %d EM KG\n",i);
        scanf("%f",&prato);
        printf("FAVOR INFORMAR O GASTO COM BEBIDAS PESSOA %d\n",i);
        scanf("%f",&bebida);
        total=total+bebida+prato*23.59;
        i++;
        }

     printf("=========================================================================\n");
     printf("=========================================================================\n");
     printf("O TOTAL DA CONTA CONSUMIDA POR %d PESSOAS DEU R$ %.2f\n",i-2,total);
}
