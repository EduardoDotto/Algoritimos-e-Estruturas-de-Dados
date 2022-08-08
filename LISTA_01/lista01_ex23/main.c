#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_23

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float predioreal, sombrahumana, sombrapredio,altura;
    printf("Favor informar o comprimento da sua sombra em metros ");
    scanf("%f",&sombrahumana);
    printf("Favor informar a sua altura em metros ");
    scanf("%d",&altura);
    printf("Favor informar o comprimento da sombra em metros ");
    scanf("%d",&sombrapredio);
    predioreal=sombrapredio*sombrahumana/altura;
    printf("A altura do prédio é %.2f metros\n",predioreal);

}
