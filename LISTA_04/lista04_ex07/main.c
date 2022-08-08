#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX07
int main() {
    setlocale(LC_ALL, "Portuguese");
    int i=0,j=0,k=0;
    int R[5],S[10],X[5];
    printf("\nFavor informar os elementos do vetor R:\n");
    for (i=0;i<5;i++){
    scanf("%d",&R[i]);
    }
    printf("\nFavor informar os elementos do vetor S:\n");
    for (i=0;i<10;i++){
    scanf("%d",&S[i]);
    }
    printf("\nVETOR R:\n");
    for (i=0;i<5;i++){
    printf("%d - ", R[i]);
    }
    printf("\nVETOR S:\n");
    for (i=0;i<10;i++){
    printf("%d - ", S[i]);
    }
    // COMPARADOR
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
          if (R[i]==S[j]){
          X[k]=S[j];
          k++;
          }
        }
    }
    printf("\nVETOR X É O RESULTADE DE VALORES IGUAIS:\n");
    for (i=0;i<5;i++){
    printf("%d - ", X[i]);
    }
  }
