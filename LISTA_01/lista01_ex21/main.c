#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_21

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int lata,garafa,pet;
    float litros;
    printf("Favor informar a quantidade de latas ");
    scanf("%d",&lata);
    printf("Favor informar a quantidade de garafas ");
    scanf("%d",&garafa);
    printf("Favor informar a quantidade de garafas 2L ");
    scanf("%d",&pet);
    litros=lata*0.35+garafa*0.6+pet*2;
    printf("O total de litros é %.2f L\n",litros);

}
