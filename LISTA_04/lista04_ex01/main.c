#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX01
int main() {
    setlocale(LC_ALL, "Portuguese");
    int max=10,i=0;
    int V1[max],V2[max],V3[max];
    printf("\nFavor informar os elementos do vetor 1:\n", max);
    for (i=0;i<max;i++){
    scanf("%d",&V1[i]);
    }
    printf("\nFavor informar os elementos do vetor 2:\n", max);
    for (i=0;i<max;i++){
    scanf("%d",&V2[i]);
    }
    printf("\nVETOR 1:\n", max);
    for (i=0;i<max;i++){
    printf("%d - ", V1[i]);
    }
    printf("\nVETOR 2:\n", max);
    for (i=0;i<max;i++){
    printf("%d - ", V2[i]);
    }
    //  SOMADOR
    for(i=0;i<max;i++){
    V3[i]=V2[i]+V1[i];
    }
    printf("\nVETOR 3 É A SOMA DO VETOR 1 + VETOR 2:\n", max);
    for (i=0;i<max;i++){
    printf("%d - ", V3[i]);
    }
  }

