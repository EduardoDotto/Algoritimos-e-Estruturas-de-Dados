#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_12

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int X,Y,Z;
    printf("Favor informar o comprimento do lado X do triângulo\n");
    scanf("%d",&X);
    printf("Favor informar o comprimento do lado Y do triângulo\n");
    scanf("%d",&Y);
    printf("Favor informar o comprimento do lado Z do triângulo\n");
    scanf("%d",&Z);
    if (X<(Y+Z) && Y<(X+Z) && Z<(X+Y)){
    printf("O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados\n");
        if ((X==Y) && (X==Z))
        printf("O triangulo é equilátero\n");
        else if (X==Y || Y==Z || X==Z)
        printf("O triangulo é isóceles\n");
        else
        printf("O triangulo é escaleno\n");
    }
        else
        printf("Não é possivel formar um triangulo\n");

}
