#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_14
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome [30];
    while (strcmp(nome,"Sim")){
    fflush(stdin);
    printf("Olá tudo bem?:\n");
    gets(nome);
    }
    printf("Agora está tudo bem!!!\n");

}
