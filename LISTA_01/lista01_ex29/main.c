#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_29


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float preco, newpreco;
    printf("Favor informar o preço do produto\n");
    scanf("%f",&preco);
    newpreco=0.9*preco;
    printf("O preço velho é: %.2f e o novo preço é: %.2f \n",preco,newpreco);

}
