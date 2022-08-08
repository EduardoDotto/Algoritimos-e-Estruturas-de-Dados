#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_05

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int N1;
    printf("Favor informar um numero:\n");
    scanf("%d",&N1);
        if ((N1%2 == 0))
        printf("O número par + 5 é: %d\n",N1+5);
        else if(N1%2==1)
        printf("O número impar + 8 é: %d\n",N1+8);
}

