#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_32


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float peso,gramas;
    printf("Favor informar o peso\n");
    scanf("%f",&peso);
    gramas=peso*1000;
    printf("A pessoa pesa %.1f em gramas \n",gramas);

}
