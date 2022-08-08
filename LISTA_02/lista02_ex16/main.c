#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_16

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int saldo;
    float credito;
    printf("Favor informar o saldo médio!\n");
    scanf("%d",&saldo);
    if (saldo<=200)
            printf("NENHUM CRÉDITO\n");
    else if (saldo>200 && saldo<=400){
    credito=saldo*0.2;
     printf("O crédito é de R$ %.2f !\n",credito); }
    else if (saldo>400 && saldo<=600){
    credito=saldo*0.3;
    printf("O crédito é de R$ %.2f !\n",credito); }
    else if (saldo>600){
    credito=saldo*0.4;
    printf("O crédito é de R$ %.2f !\n",credito);
    }

}
