#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_13
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,num=0,soma=0;
    while (num>=0) {
    printf("Favor digitar um numero:\n");
    scanf("%d",&num);
    if (num>=0)
    soma += num;
    }
    printf("VOCÊ DIGITOU UM NÚMERO NEGATIVO \n");
    printf("A soma dos numeros digitados é: %d \n",soma);


}
