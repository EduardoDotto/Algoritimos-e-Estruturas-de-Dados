#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_39


int main()
{
    setlocale(LC_ALL,"Portuguese");
    int salario,conta1,conta2;
    float sobra;
        printf("Favor informar o salario de João\n");
        scanf("%d",&salario);
        printf("Favor informar o valor da conta 1\n");
        scanf("%d",&conta1);
        printf("Favor informar o valor da conta 2\n");
        scanf("%d",&conta2);
        sobra=salario-(conta1+conta2)*1.02;
        printf("Restará R$ %.2f do salario de João\n",sobra);
}
