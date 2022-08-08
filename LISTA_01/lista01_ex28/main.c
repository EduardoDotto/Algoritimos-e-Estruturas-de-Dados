#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_28


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,med;
    printf("Favor informar o primeira nota\n");
    scanf("%f",&n1);
    printf("Favor informar o segunda nota \n");
    scanf("%f",&n2);
    med=(n1*2+n2*3)/5;
    printf("A média ponderada é %.2f: \n",med);

}
