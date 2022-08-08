#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_33


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float b1,b2,alt,area;
    printf("Favor informar a base maior\n");
    scanf("%f",&b1);
    printf("Favor informar a base menor\n");
    scanf("%f",&b2);
    printf("Favor informar a altura\n");
    scanf("%f",&alt);
    area=(b1+b2)*alt/2;
    printf("A area é %.2f\n",area);

}
