#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_09

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int aluno,n1,n2,n3;
    float media;
    printf("Favor informar o numero de identificação do aluno\n");
    scanf("%d",&aluno);
    printf("Favor informar a nota 1\n");
    scanf("%d",&n1);
    printf("Favor informar a nota 2\n");
    scanf("%d",&n2);
    printf("Favor informar a nota 3\n");
    scanf("%d",&n3);
    media=(n1+n2+n3)/3.0;

        if ((media>=70))
        printf("O aluno foi aprovado com media: R$%.2f\n",media);
        else if (media<40)
        printf("O aluno foi reprovado com media: R$%.2f\n",media);
        else if ((media>=40) && (media<70))
       printf("O aluno está de exame com media: R$%.2f\n",media);

}
