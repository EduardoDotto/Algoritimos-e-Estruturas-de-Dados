#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_08

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int cond;
    float produto;
    printf("Favor o preço do produto\n");
    scanf("%f",&produto);
    printf("Favor informar a forma de pagamento:\n1 - À vista em dinheiro ou cheque \n2 - À vista no cartão de crédito\n");
    printf("3 - Em duas vezes s/ juros \n4 - Em duas vezes c/ juros\n");
    scanf("%d",&cond);

        if ((cond==1))
        printf("O valor a ser pago a vista é de R$%.2f\n",produto*0.9);
        else if (cond==2)
        printf("O valor a ser pago no cartão a vista é de R$%.2f\n",produto*0.85);
        else if (cond==3)
        printf("O valor a ser pago são duas parcelas de R$%.2f, totalizando  R$%.2f\n",(produto/2),produto);
        else if (cond==4)
        printf("O valor a ser pago são duas parcelas de R$%.2f, totalizando  R$%.2f\n",(produto*1.1/2),produto*1.1);

}
