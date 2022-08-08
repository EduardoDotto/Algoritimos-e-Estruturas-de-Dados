#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_01

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    char frase [30];
    printf("Favor digitar a frase\n");
    gets(frase);
//  scanf("%s",&frase);
    for (i=1;i<=20;i++)
     printf("Esta é a mensagem %d: %s\n",i,frase);
}
