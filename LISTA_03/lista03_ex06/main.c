#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_06
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,idade=0,soma=0,aux=0;
    float media;
    printf("Favor informar a idade de 20 pessoas:\n");
    for (i=1;i<=20;i++){
    printf("Favor a %dº idade:\n",i);
    scanf("%d",&aux);
    soma+=aux;
    }
    printf("O idade media é %.2f \n",soma/20.0);

}
