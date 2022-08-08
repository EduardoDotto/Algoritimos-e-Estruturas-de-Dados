#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_10 que é o 9
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,nmaior=0,num;
    for (i=1;i<=20;i++){
    fflush(stdin);
    printf("Favor digitar um numero:\n");
    scanf("%d",&num);
    if (num>8)
    nmaior++;
    }
    printf("O total de números maiores que 8 é: %d \n",nmaior);

}
