#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_26


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,n3,multi;
    printf("Favor informar o primeiro numero\n");
    scanf("%f",&n1);
    printf("Favor informar o segundo numero\n");
    scanf("%f",&n2);
    printf("Favor informar o terceiro numero\n");
    scanf("%f",&n3);
    multi=n1*n2*n3;
    printf("A multiplicação destes números é: %.2f \n",multi);

}
