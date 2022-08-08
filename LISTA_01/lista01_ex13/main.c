#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_13
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, cen, dez, unid;
    printf("Favor inserir o um numero com até 3 algarismo: ");
    scanf("%d",&num);
    cen=((num)/100)*100;
    dez=((num-cen)/10)*10;
    unid=num-dez-cen;
    printf("A centena é R$ %d, a dezena é R$ %d e a unudade é R$ %d",cen,dez,unid);
}
