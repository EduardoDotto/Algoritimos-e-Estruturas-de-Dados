#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //EXERCICIO 18
    int nalunos,i=0;
    float med=0,n1=0,n2=0;
    printf("=========================================================================\n");
    printf("FAVOR INFORMAR A QUANTIDADE DE ALUNOS NA TURMA!\n");
    scanf("%d",&nalunos);
    printf("=========================================================================\n");
        while (nalunos>0){
        i++;
        printf("FAVOR INFORMAR A NOTA 1 DO ALUNO %d \n",i);
        scanf("%f",&n1);
        printf("FAVOR INFORMAR A NOTA 2 DO ALUNO %d\n",i);
        scanf("%f",&n2);
        med=(n1+n2)/2;
          if (med>=6)
        printf("ALUNO %d APROVADO!\n",i);
        else
          printf("ALUNO %d REPROVADO / EXAME !\n",i);
        nalunos--;
    printf("=========================================================================\n");
        }
}
