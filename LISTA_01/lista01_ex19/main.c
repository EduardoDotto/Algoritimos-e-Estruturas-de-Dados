#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_19
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int dir,esq,nfrang;
    float custo;
    printf("Favor informar o numero de frangos: ");
    scanf("%d",&nfrang);
    custo=nfrang*(4.0+2*3.5);
    printf("O custo total para marcar todos os frangos é R$ %.2f\n",custo);

}
