#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_14
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float raio, pi, area;
    printf("Favor inserir o raio da pizza: ");
    scanf("%f",&raio);
    pi=3.14;
    area=pi*pow(raio,2);
    printf("A área é %.2f",area);
}
