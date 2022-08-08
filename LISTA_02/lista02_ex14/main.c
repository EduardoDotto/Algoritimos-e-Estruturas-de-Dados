#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_14

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int valor,ano;
    float imposto;
    printf("Favor informar um valor do carro: \n");
    scanf("%d",&valor);
    printf("Favor informar o ano do carro: \n");
    scanf("%d",&ano);
        if (ano>=1990)
            imposto=valor*0.015;
        else
            imposto=valor*0.010;
    printf("O valor do imposto a ser pago é: %.2f\n",imposto);

        }
