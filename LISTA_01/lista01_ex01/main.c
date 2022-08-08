#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    double dim1,dim2,area;
printf("Favor inserir a primeira dimensão do terreno: ");
    scanf("%lf",&dim1);
    printf("Favor inserir a segunda dimensão do terreno: ");
    scanf("%lf",&dim2);
    area=dim1*dim2;
    printf("A área total do tereno é: %.2lf",area);
}
