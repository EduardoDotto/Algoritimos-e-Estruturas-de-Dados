#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_38


int main()
{
    setlocale(LC_ALL,"Portuguese");
    int dia1,mes1,ano1,dia2,mes2,ano2,dtot;

        printf("Favor informar o dia de nascimento\n");
        scanf("%d",&dia1);
        printf("Favor informar o mes de nascimento\n");
        scanf("%d",&mes1);
        printf("Favor informar o ano de nascimento\n");
        scanf("%d",&ano1);
        printf("Favor informar o dia de hoje\n");
        scanf("%d",&dia2);
        printf("Favor informar o mes de hoje\n");
        scanf("%d",&mes2);
        printf("Favor informar o ano de hoje\n");
        scanf("%d",&ano2);
        dtot=(ano2-ano1)*360+abs(mes1-mes2)*30+abs(dia1-dia2);
        printf("O total de dias de vida é %d é\n",dtot);
        printf("O total de semanas de vida é %d é\n",dtot/7);
        printf("O total de meses de vida é %d é\n",dtot/30);
        printf("O total de anos de vida é %d é\n",abs(ano2-ano1));
}
