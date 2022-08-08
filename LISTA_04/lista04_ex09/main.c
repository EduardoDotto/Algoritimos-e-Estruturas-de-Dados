#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX09
int main() {

    int i=0,k=0;
    int D[10],S[10];
    printf("\nFavor informar o vetor D:\n");
    for (i=0;i<10;i++){
    scanf("%d",&D[i]);
    }

    printf("\nVETOR D:\n");
    for (i=0;i<10;i++){
    printf("%d - ", D[i]);
    }
    // COMPARADOR
    for(i=0;i<10;i++){setlocale(LC_ALL, "Portuguese");
          if (D[i]>0){
          S[k]=D[i];
          k++;
          }
    }
    printf("\nVETOR D MAIOR QUE ZERO É:\n");
    for (i=0;i<k;i++){
    printf("%d - ", S[i]);
    }
    }

