#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_02

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1,i,n2,soma=0;
    printf("Favor o primeiro numero:\n");
    scanf("%d",&n1);
    printf("Favor o segundo numero:\n");
    scanf("%d",&n2);
    for (i=n1;i<=n2;i++){
    soma+=i;
    }
    printf("A soma de %d até %d é %d \n",n1,n2,soma);

}



