#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_03
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float paozinho=0.12, broa=1.50,total,poupa;
    int np,nb;
    printf("Favor inserir a quantidade de pães: ");
    scanf("%d",&np);
    printf("Favor inserir a quantidade de broas: ");
    scanf("%d",&nb);
    total=paozinho*np+broa*nb;
    poupa=total*0.1;
    printf("O total no final do dia é R$ %.2f e ele poupará R$ %.2f",total,poupa);
}
