#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_06
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float peso,total;
    printf("Favor inserir o prato e pesa-lo em kg: ");
    scanf("%f",&peso);
    total=peso*12;
    printf("O total a pagar R$ %.2f",total);
}
