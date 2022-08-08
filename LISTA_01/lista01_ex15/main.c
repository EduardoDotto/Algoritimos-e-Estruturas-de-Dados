#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_15
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int parcela;
    float andre,conta,carlos,felipe;
    printf("Favor inserir o valor da conta: ");
    scanf("%f",&conta);
    parcela=conta/3;
    carlos=(float)parcela;
    felipe=(float)parcela;
    andre=conta-2*parcela;
    printf("Carlos pagou %.2f, Andre pagou %.2f e Felipe pagou %.2f",carlos, andre, felipe);
}
