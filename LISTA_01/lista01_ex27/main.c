#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_27


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,divi;
    printf("Favor informar o primeiro numero\n");
    scanf("%f",&n1);
    printf("Favor informar o segundo numero (DIFERENTE DE ZERO)\n");
    scanf("%f",&n2);
    divi=n1/n2;
    printf("A divisão de %.2f por %.2f é: %.2f \n",n1,n2,divi);

}
