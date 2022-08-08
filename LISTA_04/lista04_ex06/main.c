#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX06
int main() {
    setlocale(LC_ALL, "Portuguese");
    int max=10, i=0, j=0, j2=0, x=0, novo=9999, velho=-9999, pv=0, pn=0;
    int A[max], posnovo[max], posvelho[max], pvaux[max],pnaux[max];
    printf("Favor informar a idade dos %d elementos do grupo:\n",max);
    //LENDO IDADES
    for (i=0;i<max;i++){
       scanf("%d",&A[i]);
    }
    //ESCREVENDO IDADES
    printf("VETOR A das idades é:\n");
    for (i=0;i<max;i++){
    printf("%d - ", A[i]);
    }
    //INICIANDO VERIFICAÇÃO
    for(i=0;i<max;i++){
 //  MAIOR IDADE
        if (A[i]<novo){
        novo=A[i];
    //LIMPANDO POS
        for (x=0;x<max;x++){
        posnovo[x]=0;
        }
        posnovo[j]=i+1;
        j++;
        }
        else if (A[i]==novo){
        posnovo[j]=i+1;
        j++;
        }
//  MENOR IDADE
        if (A[i]>velho){
        velho=A[i];
        //LIMPANDO POS
        for (x=0;x<max;x++){
        posvelho[x]=0;
        }
        posvelho[j2]=i+1;
        j2++;
        }
        else if (A[i]==velho){
        //Temos 2 mais velhos
        posvelho[j2]=i+1;
        j2++;
        }
        }
    // ELIMINIANDO ELEMENTOS DO VETOR DESNECESSARIOS
    for(i=0;i<max;i++){
          if (posvelho[i]!=0){
          pvaux[pv]=posvelho[i];
          pv++;
          }
    }
    // ELIMINIANDO ELEMENTOS DO VETOR DESNECESSARIOS v2
    for(i=0;i<max;i++){
          if (posnovo[i]!=0){
          pnaux[pn]=posnovo[i];
          pn++;
          }
    }
  printf("\n O MAIS VELHO TÊM %d ANOS!\n", velho);
   //ESCREVENDO POS VELHO
    printf("E ELE/ELES ESTÃO NA/NAS POS:\n");
    for (i=0;i<pv;i++){
    printf("%d e ", pvaux[i]);
    }
  printf("\n O MAIS NOVO TÊM %d ANOS!\n", novo);
  //ESCREVENDO POS NOVO
    printf("E ELE/ELES ESTÃO NA/NAS POS:\n");
    for (i=0;i<pn;i++){
    printf("%d e ", pnaux[i]);
    }
  }
