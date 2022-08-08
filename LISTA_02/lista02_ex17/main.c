#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //EXERCICIO 1
    int prato,nop1=0,nop2=0,nop3=0,nop4=0,nop5=0,nop6=0;
    float total;
    printf("=========================================================================\n");
    printf("MENU : PRATOS!\n");
    printf("1 - CACHORRO QUENTE!\n2 - BAURU!\n3 - MISTO QUENTE!\n4 - HAMBURGER!\n5 - CHEESEBURGUER!\n\n6 - REFRIGERANTE!\n7 - FINALIZAR PEDIDO!\n");
    printf("=========================================================================\n");
        while (prato!=7){
        scanf("%d",&prato);
        switch(prato){
            case 1:
            printf("VOCÊ ESCOLHEU O CACHORRO QUENTE\n");
            printf("------------------------------------------------------------------\n");
            total+=11.00;
            nop1++;
            break;
            case 2:
            printf("VOCÊ ESCOLHEU O BAURU\n");
            printf("------------------------------------------------------------------\n");
            total+=8.50;
            nop2++;
            break;
            case 3:
            printf("VOCÊ ESCOLHEU O MISTO QUENTE\n");
            printf("------------------------------------------------------------------\n");
            total+=8.00;
            nop3++;
            break;
            case 4:
            printf("VOCÊ ESCOLHEU O HAMBURGUER\n");
            printf("-------------------------------------------------------------------\n");
            total+=9.00;
            nop4++;
            break;
            case 5:
            printf("VOCÊ ESCOLHEU O CHEESEBURGUER\n");
            printf("-------------------------------------------------------------------\n");
            total+=10.00;
            nop5++;
            break;
            case 6:
            printf("VOCÊ ESCOLHEU O REFRIGERANTE\n");
            printf("-------------------------------------------------------------------\n");
            total+=4.5;
            nop6++;
            break;
        }
        }
     printf("=========================================================================\n");
     printf("SEU PEDIDO FOI FINALIZADO!!!\n\nAGUARDE ENQUANTO PREPARAMOS SEU LANCHE!\n");
     printf("VOCÊ ESCOLHEU %d CACHORROS QUENTES\n",nop1);
     printf("VOCÊ ESCOLHEU %d BAURUS\n",nop2);
     printf("VOCÊ ESCOLHEU %d MISTOS QUENTES\n",nop3);
     printf("VOCÊ ESCOLHEU %d HAMBURGUER\n",nop4);
     printf("VOCÊ ESCOLHEU %d CHEESEBURGUER\n",nop5);
     printf("VOCÊ ESCOLHEU %d REFRIGERANTES\n",nop6);
     printf("=========================================================================\n");
     printf("O TOTAL DA CONTA DEU R$ %.2f\n",total);
}
