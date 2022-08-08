#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_11
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int ndias,anos,meses,dias;
    printf("Favor inserir o numero de dias sem acidentes: ");
    scanf("%d",&ndias);
    anos=ndias/365;
    meses=(ndias-anos*365)/30;
    dias=ndias-anos*365-meses*30;
    printf("São %d anos, %d meses e %d dias sem acidentes",anos,meses,dias);
}
