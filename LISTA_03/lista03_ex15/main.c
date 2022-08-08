#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_15
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num=0,fatorial=1;
    printf("Favor informar um número para fatorar!!!\n");
    scanf("%d",&num);
    while (num>=1){
        fatorial=fatorial*num;
        num--;
    }

    printf("O fatorial é %d!\n",fatorial);

}
