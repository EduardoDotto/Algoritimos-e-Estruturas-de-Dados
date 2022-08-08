#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_36


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float minimo,renda,empregado;
    printf("Favor informar o valor do salário mínimo\n");
    scanf("%f",&minimo);
    printf("Favor informar o valor do salario do empregado\n");
    scanf("%f",&empregado);
    renda=empregado/minimo;
    printf("O salário equivale a %.2f salários minimos\n",renda);

}
