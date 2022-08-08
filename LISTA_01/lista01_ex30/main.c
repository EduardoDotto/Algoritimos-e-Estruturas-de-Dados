#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_30


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float total, salario,vendas;
    printf("Favor informar o salário do funcionário\n");
    scanf("%f",&salario);
    printf("Favor informar o total em vendas\n");
    scanf("%f",&vendas);
    total=salario+0.04*vendas;
    printf("O valor do salário de %.2f + comissão de vendas %.2f totaliza: %.2f \n",salario,vendas,total);

}
