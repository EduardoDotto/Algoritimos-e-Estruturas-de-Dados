#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_05
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    float soma,aux;
    printf("Favor informar os 10 numeros que deseja somar:\n");
    for (i=1;i<=10;i++){
    printf("Favor o %dº numero para somar:\n",i);
    scanf("%f",&aux);
    soma+=aux;
    }
    printf("O valor total da soma é %.2f \n",soma);

}



