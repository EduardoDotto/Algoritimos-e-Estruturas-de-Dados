#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //EXERCICIO 22
    int dist=0,km=0,i=1;
    char cdd [30];
    printf("=========================================================================\n");
    printf("VIAGEM DOS 4000 KM!!!\n");
    printf("=========================================================================\n");
    printf("PARTINDO DE TOLEDO COM O CARRO 0 KM!!!\n");
        while (dist<4000){
        fflush(stdin);
        printf("FAVOR INFORMAR A CIDADE DA PARADA %d \n",i);
        gets(cdd);
        printf("FAVOR INFORMAR A QUILOMETRAGEM DESDE A ULTIMA CIDADE\n");
        scanf("%d",&km);
        dist=dist+km;
        printf("=========================================================================\n");
        printf("FORAM PERCORRIDOS %d KM ATÉ %s!!!\n",dist,cdd);
        printf("=========================================================================\n");
        i++;
          }
    printf("A VIAGEM TERMINOU\n");

        }

