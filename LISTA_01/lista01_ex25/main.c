#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_25


int main()
{
    setlocale(LC_ALL,"Portuguese");
    float raio, altura, volume;
    printf("Favor informar o raio da caixa da água ");
    scanf("%f",&raio);
    printf("Favor informar a altura da caixa da água ");
    scanf("%f",&altura);
    volume=3.14*pow(raio,2)*altura;
    printf("O volume é: %.2f Litros\n",volume);

}
