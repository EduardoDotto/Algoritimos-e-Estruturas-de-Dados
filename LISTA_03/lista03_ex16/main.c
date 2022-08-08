#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //EXERCICIO 16
    int prato,nop1=0,nop2=0,nop3=0,nop4=0,nop5=0,nop6=0;
    float total;
    printf("=========================================================================\n");
    printf("LISTA DE PRODUTOS\n");
    printf("1 - PRESUNTO!\n2 - QUEIJO!\n3 - PÃO!\n4 - HAMBURGER!\n5 - CERVEJA!\n\n6 - REFRIGERANTE!\n7 - FINALIZAR COMPRA!\n");
    printf("=========================================================================\n");
        while (prato!=7){
        scanf("%d",&prato);
        switch(prato){
            case 1:
            printf("VOCÊ ESCOLHEU PRESUNTO\n");
            printf("------------------------------------------------------------------\n");
            total+=2.00;
            nop1++;
            break;
            case 2:
            printf("VOCÊ ESCOLHEU QUEIJO\n");
            printf("------------------------------------------------------------------\n");
            total+=2.00;
            nop2++;
            break;
            case 3:
            printf("VOCÊ ESCOLHEU PÃO\n");
            printf("------------------------------------------------------------------\n");
            total+=0.50;
            nop3++;
            break;
            case 4:
            printf("VOCÊ ESCOLHEU HAMBURGUER\n");
            printf("-------------------------------------------------------------------\n");
            total+=3.00;
            nop4++;
            break;
            case 5:
            printf("VOCÊ ESCOLHEU CERVEJA\n");
            printf("-------------------------------------------------------------------\n");
            total+=7.00;
            nop5++;
            break;
            case 6:
            printf("VOCÊ ESCOLHEU REFRIGERANTE\n");
            printf("-------------------------------------------------------------------\n");
            total+=6.00;
            nop6++;
            break;
        }
        }
     printf("=========================================================================\n");
     printf("SUA COMPRA FOI FINALIZADO!!!\n\nAGUARDE ENQUANTO CALCULAMOS O TOTAL!\n");
     printf("VOCÊ ESCOLHEU %d PRESUNTOS\n",nop1);
     printf("VOCÊ ESCOLHEU %d QUEIJOS\n",nop2);
     printf("VOCÊ ESCOLHEU %d PÃES\n",nop3);
     printf("VOCÊ ESCOLHEU %d HAMBURGUERS\n",nop4);
     printf("VOCÊ ESCOLHEU %d CERVEJAS\n",nop5);
     printf("VOCÊ ESCOLHEU %d REFRIGERANTES\n",nop6);
     printf("=========================================================================\n");
     printf("O TOTAL DA CONTA DEU R$ %.2f\n",total);
}
