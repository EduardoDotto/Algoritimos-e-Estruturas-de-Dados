#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_24

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float agua, maracuja,toneis;
    printf("Favor informar a quantidade de toneis de 10 Litros ");
    scanf("%f",&toneis);
    agua=toneis*0.8;
    maracuja=toneis*0.2;
    printf("Para produzir %.2f toneis são necessários:\n",toneis);
    printf("-> %.2f L de água.\n",agua);
    printf("-> %.2f L de suco de maracujá.\n",maracuja);
}
