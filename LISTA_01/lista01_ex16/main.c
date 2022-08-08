#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_16
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float queijo,presunto,hamburguer,nlanches;
    printf("Favor inserir o numero de lanches: ");
    scanf("%f",&nlanches);
    queijo=nlanches*50*2/1000;
    presunto=nlanches*50/1000;
    hamburguer=100*nlanches/1000;
    printf("Serão necessários %.3f kg de queijo.\n",queijo);
    printf("Serão necessários %.3f kg de presunto.\n",presunto);
    printf("Serão necessários %.3f kg de hamburguer.\n",hamburguer);
}
