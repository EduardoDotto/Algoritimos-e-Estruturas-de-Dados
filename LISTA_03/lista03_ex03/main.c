#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_03

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    char frase [30];
    printf("Favor digitar seu nome\n");
    gets(frase);
//  scanf("%s",&frase);
    for (i=1;i<=10;i++)
     printf("%d - %s\n",i,frase);
}
