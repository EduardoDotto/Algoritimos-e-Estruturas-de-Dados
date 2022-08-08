#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //EXERCICIO 23
    int casas,tele,n3=0,n8=0,n5=0,n11=0,n13=0,i=1,canal,total=0;
    printf("=========================================================================\n");
    printf("PESQUISA DE AUDIÊNCIA\n");
    printf("=========================================================================\n");
    printf("FAVOR INFORMAR O NUMERO DE CASAS VISITADAS\n");
    scanf("%d",&casas);
        while (i<=casas){
        printf("FAVOR INFORMAR O CANAL ASSISTIDO NA CASA %d \n",i);
        printf("LISTA DE CANAIS\n3\n5\n8\n11\n13\n");
        printf("=========================================================================\n");
        scanf("%d",&canal);
        printf("=========================================================================\n");
        printf("FAVOR INFORMAR O NÚMERO DE PESSOAS ASSISTINDO \n");
        scanf("%d",&tele);
    printf("=========================================================================\n");
        switch (canal){
            case 3:{
            n3=n3+tele;
            i++;
            total=total+n3;
            break;
            }
            case 5:{
            n5=+tele;
            total=total+n5;
            i++;
            break;
            }
            case 8:{
            n8=+tele;
            i++;
            total=total+n8;
            break;
            }
            case 11:{
            n11=+tele;
            total=total+n11;
            i++;
            break;
            }
            case 13:{
            n13=+tele;
            i++;
            total=total+n13;
            break;
            }
            default :
            printf ("Canal invalido!\n");
        }

}



    printf("O CANAL 3 É ASSITIDO POR %.2f %% DA AUDIÊNCIA!!\n",n3*100.0/total);
    printf("O CANAL 5 É ASSITIDO POR %.2f %% DA AUDIÊNCIA!!\n",n5*100.0/total);
    printf("O CANAL 8 É ASSITIDO POR %.2f %% DA AUDIÊNCIA!!\n",n8*100.0/total);
    printf("O CANAL 11 É ASSITIDO POR %.2f %% DA AUDIÊNCIA!!\n",n11*100.0/total);
    printf("O CANAL 13 É ASSITIDO POR %.2f %% DA AUDIÊNCIA!!\n",n13*100.0/total);


}
