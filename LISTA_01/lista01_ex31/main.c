#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_31


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float peso,gordo,magro;
    printf("Favor informar o peso\n");
    scanf("%f",&peso);
    gordo=peso*1.15;
    magro=peso*0.8;
    printf("Se a pessoa emagreçer ela pesará %.2f\n",magro);
    printf("Se a pessoa engordar ela pesará %.2f\n",gordo);
}
