#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX05
int main() {
    setlocale(LC_ALL, "Portuguese");
    int max=10,i=0,j=0,somamenor15=0,igual15=0;
    float mediamaior15=0;
    int A[max];
   printf("\nFavor informar os elementos do vetor 1:\n");
       for (i=0;i<max;i++){
       scanf("%d",&A[i]);
       }
    printf("\nVETOR 1:\n");
    for (i=0;i<max;i++){
    printf("%d - ", A[i]);
    }
    for(i=0;i<max;i++){
 //  SOMA DOS MENORES QUE 15
        if (A[i]<15)
        somamenor15+=A[i];
//  QUANTIDADE = 15
        if (A[i]==15)
        igual15++;
//  MEDIA DOS MAIORES QUE 15
        if (A[i]>15){
        j++;
        mediamaior15+=A[i];
        }
        }
  printf("\nA SOMA DOS MENORES É: %d\n", somamenor15);
  printf("\nA QUANTIDADE DE NUMEROS IGUAIS A 15 É: %d\n", igual15);
  printf("\nA MEDIA DOS MAIORES QUE 15 É: %.2f\n", (mediamaior15/j));
  }


