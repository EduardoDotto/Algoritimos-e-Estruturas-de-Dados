#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //EXERCICIO 21 - TA DANDO BO
    int nfuma=0,nnfuma=0,nmesa=50,i=1;
    char tipo [30];
    printf("=========================================================================\n");
    printf("RESTAURANTE BIOPARK!!!\n");
    printf("=========================================================================\n");
    printf("TEMOS 50 MESAS DISPONIVEIS PARA RESERVA!\n");
    printf("=========================================================================\n");
        while (nmesa>=1){
        fflush(stdin);
        printf("FAVOR INFORMAR A �REA DESEJADA PARA RESERVA %d \n",i);
        printf("MESAS DISPONIVEIS %d \n",nmesa);
        printf("SENDO NF - N�O FUMANTES(%d) \n",25-nnfuma);
        printf("SENDO FU - FUMANTES(%d) \n",25-nfuma);
        gets(tipo);
          if (!(strcmp(tipo,"NF"))||!(strcmp(tipo,"nf"))){
               if (nnfuma<25){
               nnfuma++;
               printf("RESERVA PARA N�O FUMANTES REALIZADA\n");
               i++;
               nmesa--;
               }
                   else{
                   printf("N�O TEMOS MAIS VAGAS PARA N�O FUMANTES!\n");
                   printf("SE DESEJAR TENTE NA �REA DE FUMANTES!\n");
                   }
          }

           if (!(strcmp(tipo,"FU"))||!(strcmp(tipo,"fu"))){
                   if (nfuma<25){
                   nfuma++;
                   printf("RESERVA PARA FUMANTES REALIZADA\n");
                   i++;
                   nmesa--;
                   }
                       else{
                       printf("N�O TEMOS MAIS VAGAS PARA FUMANTES!\n");
                       printf("SE DESEJAR TENTE NA �REA DE N�O FUMANTES\n");
                       }
          }
        printf("=========================================================================\n");
        }

    printf("=========================================================================\n");
    printf("TODAS AS MESAS FORAM RESERVADAS\n");
        }
