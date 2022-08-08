#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //EXERCICIO 19
    int nalunos=15,i=1;
    float alt1,maior=0, menor=999999;
    printf("=========================================================================\n");
    printf("ENCONTRE O MAIOR E O MENOR DA TURMA!!!\n");
    printf("=========================================================================\n");
        while (nalunos>=1){
        printf("FAVOR INFORMAR A ALTURA DO ALUNO %d \n",i);
        scanf("%f",&alt1);
          if (alt1>=maior)
          maior=alt1;
        else if (alt1<=menor)
          menor=alt1;
        nalunos--;
        i++;
    printf("=========================================================================\n");
        }
    printf("O MAIOR ALUNO DA TURMA MEDE: %.2f m\n",maior);
    printf("O MENOR ALUNO DA TURMA MEDE: %.2f m\n",menor);
}
