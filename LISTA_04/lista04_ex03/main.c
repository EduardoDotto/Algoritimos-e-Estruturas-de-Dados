#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX03
int main() {
    setlocale(LC_ALL, "Portuguese");
    int max=8,i=0;
    int A[max],B[max];
    printf("\nFavor informar os elementos do vetor 1:\n", max);
    for (i=0;i<max;i++){
    scanf("%d",&A[i]);
    }
    printf("\nVETOR 1:\n", max);
    for (i=0;i<max;i++){
    printf("%d - ", A[i]);
    }
    //  MULTIPLICADOR
    for(i=0;i<max;i++){
    B[i]=A[i]*2;
    }
    printf("\nVETOR B É:\n");
    for (i=0;i<max;i++){
    printf("%d - ", B[i]);
    }
  }

