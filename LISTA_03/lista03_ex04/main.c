#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_04
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,n;
    char frase [30];
    printf("Favor digitar o nome do Usuario\n");
    gets(frase);
    printf("Quantas vezes quer ver o nome do usuário\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
     printf("O nome do usuário é %s - %d\n",frase,i);
}
