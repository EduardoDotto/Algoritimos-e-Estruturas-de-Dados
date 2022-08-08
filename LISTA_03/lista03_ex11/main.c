#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_11
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,n100=0,num;
    for (i=1;i<=20;i++){
    fflush(stdin);
    printf("Favor digitar um numero:\n");
    scanf("%d",&num);
    if (num>=0 && num<=100)
    n100++;
    }
    printf("O total de números ente 0 e 100 é: %d \n",n100);

}
