#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX02
int main() {
    setlocale(LC_ALL, "Portuguese");
    int max=20,i=0,npar,nimpar,nmaior50,nmenor7;
    int V1[max];
    printf("\nFavor informar os elementos do vetor 1:\n", max);
    for (i=0;i<max;i++){
    scanf("%d",&V1[i]);
    }
    printf("\nVETOR 1:\n", max);
    for (i=0;i<max;i++){
    printf("%d - ", V1[i]);
    }
    //  SOMADOR
    for(i=0;i<max;i++){
    if (V1[i]%2==0)
        npar++;
    if (V1[i]%2==1)
        nimpar++;
    if (V1[i]>50)
        nmaior50++;
    if (V1[i]<7)
        nmenor7++;
    }
    printf("\nEXISTEM %d NÚMEROS PARES\n", npar);
    printf("EXISTEM %d NÚMEROS IMPARES\n", nimpar);
    printf("EXISTEM %d NÚMEROS MAIORES QUE 50\n", nmaior50);
    printf("EXISTEM %d NÚMEROS MENORES QUE 7\n", nmenor7);
    system ("PAUSE");
    }


