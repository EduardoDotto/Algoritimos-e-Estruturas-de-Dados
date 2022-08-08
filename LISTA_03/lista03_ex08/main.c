#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_08
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,idade=0,aux=9999;
    char nome [30];
    char nomeaux [30];
    printf("Favor informar o nome e a idade de 10 pessoas:\n");
    for (i=1;i<=10;i++){
    fflush(stdin);
    printf("Favor digitar o %dº nome:\n",i);
    gets(nome);
    printf("Favor a %dº idade:\n",i);
    scanf("%d",&idade);
    if (idade<=aux){
    strcpy(nomeaux,nome);
    aux=idade;}
    }
    printf("A pessoas mais nova é: %s \n",nomeaux);

}
