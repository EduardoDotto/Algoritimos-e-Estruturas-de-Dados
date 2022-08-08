#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_09 que é o 10
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,npar=0,num;
    for (i=1;i<=20;i++){
    fflush(stdin);
    printf("Favor digitar um numero:\n");
    scanf("%d",&num);
    if (num % 2 ==0)
    npar++;
    }
    printf("O total de números pares é: %d \n",npar);

}
