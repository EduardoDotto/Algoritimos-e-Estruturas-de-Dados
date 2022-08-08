#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_07
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int nday,nm,diastotais;
    printf("Favor inserir o dia: ");
    scanf("%d",&nday);
    printf("Favor inserir o número do mes: ");
    scanf("%d",&nm);
    diastotais=nday+30*(nm-1);
    printf("Se passaram %d dias desde o inicio do ano",diastotais);
}
