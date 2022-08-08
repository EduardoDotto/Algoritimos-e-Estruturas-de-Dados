#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_04

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float N1;
    printf("Favor informar um numero:\n");
    scanf("%f",&N1);
        if ((N1>0))
        printf("O dobro do valor é: %.2f\n",2*N1);
        else if(N1<0)
        printf("O triplo do valor é: %.2f\n",3*N1);
}

