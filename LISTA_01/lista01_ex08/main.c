#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_08
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1,n2,n3;
    float media;
    printf("Favor inserir a nota 1: ");
    scanf("%d",&n1);
    printf("Favor inserir a nota 2: ");
    scanf("%d",&n2);
    printf("Favor inserir a nota 3: ");
    scanf("%d",&n3);
    media=(n1*1+n2*2+n3*3)/6;
    printf("A média do aluno é %.2f",media);
}
