#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_35


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float b1,b2,area;
    printf("Favor informar a diagonal maior\n");
    scanf("%f",&b1);
    printf("Favor informar a diagonal menor\n");
    scanf("%f",&b2);
    area=(b1*b2)/2;
    printf("A area do losango é %.2f\n",area);

}
