#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_03

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float N1,N2,maior;
    printf("Favor informar o primeiro valor:\n");
    scanf("%f",&N1);
    printf("Favor informar o segundo valor:\n");
    scanf("%f",&N2);
        if ((N1!=N2))
        printf("A multiplicação dos valores é: %.2f\n",N1*N2);
        else if(N2==N1)
        printf("A soma dos valores é: %.2f\n",N1+N2);
}

