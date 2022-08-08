#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_34


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float b1,area;
    printf("Favor o lado 1\n");
    scanf("%f",&b1);
    area=(b1*b1);
    printf("A area do quadrado é %.2f\n",area);

}
