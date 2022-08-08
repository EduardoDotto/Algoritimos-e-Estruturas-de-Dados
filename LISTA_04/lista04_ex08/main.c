#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX08
int main() {
    setlocale(LC_ALL, "Portuguese");
    int i=0,j=0,k=0;
    int R[5],S[10],X[5];
    printf("\nFavor informar o GABARITO no vetor R:\n");
    for (i=0;i<5;i++){
    scanf("%d",&R[i]);
    }
    printf("\nFavor informar a APOSTA no vetor A :\n");
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
    printf("\nO total de PONTOS foi: %d\n",k);
  }
