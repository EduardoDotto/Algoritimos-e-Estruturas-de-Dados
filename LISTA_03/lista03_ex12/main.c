#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_12
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,n100=0, n200=0, n200mais=0,num;
    for (i=1;i<=20;i++){
    fflush(stdin);
    printf("Favor digitar um numero:\n");
    scanf("%d",&num);
        if (num>=0 && num<=100)
        n100++;
        else if (num>100 && num<=200)
        n200++;
        else if (num>200)
        n200mais++;
    }
    printf("O total de números ente 000 e 100 é: %d \n",n100);
    printf("O total de números ente 101 e 200 é: %d \n",n200);
    printf("O total de números maiores que 200 é: %d \n",n200mais);

}
