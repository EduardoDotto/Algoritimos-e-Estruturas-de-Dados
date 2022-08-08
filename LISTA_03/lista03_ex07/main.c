#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_07
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,j=0,idade=0,aux=0;
    float media;
    printf("Favor informar a idade de 20 pessoas:\n");
    for (i=1;i<=20;i++){
    printf("Favor a %dº idade:\n",i);
    scanf("%d",&aux);
    if (aux>=18)
        j++;
    }
    printf("%d Pessoas são maiores de idade. \n",j);

}
