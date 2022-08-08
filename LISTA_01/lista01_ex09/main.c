#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_09
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int np,nm,ng;
    float total;
    printf("Favor inserir a quatidade camisetas P: ");
    scanf("%d",&np);
    printf("Favor inserir a quatidade camisetas M: ");
    scanf("%d",&nm);
    printf("Favor inserir a quatidade camisetas G: ");
    scanf("%d",&ng);
    total=np*10+nm*12+ng*15;
    printf("O valor toral da compra é %.2f",total);
}
