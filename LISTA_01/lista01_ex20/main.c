#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_20

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int nblusas;
    float nnovelos,npb;
    printf("Favor informar a quantidade de blusas ");
    scanf("%d",&nblusas);
    printf("Favor informar a quantidade de novelos ");
    scanf("%f",&nnovelos);
    npb=nnovelos/nblusas;
    printf("O numero de novelos por blusa é %.2f\n",npb);

}
