#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// EX 10
int main() {
    setlocale(LC_ALL, "Portuguese");
    int max=10,i=0,j=0,aux=0,Z=0;
    int V[max];
    printf("\nFavor informar %d números para serem ordenados \n");
    for (i=0;i<max;i++){
    scanf("%d",&V[i]);
    }
    printf("\nNÚMEROS DESORDENADOS\n");
    for (i=0;i<max;i++){
    printf(" %d : ", V[i]);
    }
    //  Ordenador
    for(i=max-1; i>0; i--){
        for ( j=0 ; j<i ; j++ ) {
            if ( V[j] > V[j+1] ) {
            aux = V[j];
            V[j] = V[j+1];
            V[j+1] = aux;
            }
       }

    }
printf("\n===============================\n");
printf("NÚMEROS ORDENADOS\n");
for (i=0;i<max;i++){
    printf(" %d : ", V[i]);
    }
}

