#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //EXERCICIO 20
    int gatos=0,cachorro=0,npets,i=1;
    char esp;
    printf("=========================================================================\n");
    printf("VETERINARIA BIOPARK!!!\n");
    printf("=========================================================================\n");
    printf("FAVOR INFORMAR A QUANTIDADE DE ANIMAIS NA LOJA!\n");
    scanf("%d",&npets);
    printf("=========================================================================\n");
        while (npets>=1){
        fflush(stdin);
        printf("FAVOR INFORMAR A ESPÉCIE DO ANIMAL %d \n",i);
        printf("SENDO C - CACHORRO \n");
        printf("SENDO G - GATO \n");
        scanf("%c",&esp);
//        gets(esp);;
          if (esp == 'c' || esp == 'C')
          cachorro++;
          else if (esp == 'g' || esp == 'G')
          gatos++;
          else
          printf("ESTE ANIMAL NÃO EXISTE\n");
        i++;
        npets--;
    printf("=========================================================================\n");
        }
    printf("O TOTAL DE CACHORROS É: %d\n",cachorro);
    printf("O TOTAL DE GATOS É: %d\n",gatos);
}
