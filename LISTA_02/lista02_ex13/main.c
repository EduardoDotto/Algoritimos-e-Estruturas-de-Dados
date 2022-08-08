#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_13

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int valor,n100=0,n50=0,n10=0,n5=0,n1=0;
    printf("Favor informar um valor para ser decomposto em notas\n");
    scanf("%d",&valor);
        if (valor>=100)
        {
            n100=valor/100;
            valor=valor-n100*100;
            printf("O valor e %d\n", valor);
        }
        if (valor>=50)
        {
            n50=valor/50;
            valor=valor-n50*50;
        }
        if (valor>=10)
        {
            n10=valor/10;
            valor=valor-n10*10;
        }
        if (valor>=5)
        {
            n5=valor/5;
            valor=valor-n5*5;
        }
        if (valor>=1)
        {
            n1=valor/1;
            valor=valor-n1*1;
        }
    printf("O numero de notas de 100 é: %d\n",n100);
    printf("O numero de notas de  50 é: %d\n",n50);
    printf("O numero de notas de  10 é: %d\n",n10);
    printf("O numero de notas de   5 é: %d\n",n5);
    printf("O numero de notas de   1 é: %d\n",n1);


}
