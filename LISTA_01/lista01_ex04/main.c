#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_04
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[10];
    int idade, dias;
    printf("Favor inserir seu nome: ");
    scanf("%s",&nome);
    printf("Favor inserir a sua idade: ");
    scanf("%d",&idade);
    dias=idade*365;
    printf("%s,VOCÊ JÁ VIVEU %d DIAS",nome,dias);
}
