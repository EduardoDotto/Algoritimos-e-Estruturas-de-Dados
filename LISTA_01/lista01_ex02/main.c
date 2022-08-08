#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int npatas,nfera;
printf("Favor inserir o numero de cavalos: ");
    scanf("%d",&npatas);
    nfera=npatas*4;
    printf("O total de ferraduras é: %d",nfera);
}
