#include <stdio.h>
#include <stdlib.h>
ordenavet(int vetor[],int tamanho);

int main()
{
    int tamanho=10;
    int vetor[10];
    for (int i=0;i<10;i++){
        vetor[i]=rand()%50;
    }
    printf("\IMPRIMINDO\n");

    for (int i=0;i<10;i++){
        printf("%d ",vetor[i]);
    }
ordenavet(vetor,tamanho);

    return 0;
}
ordenavet(int vetor[],int tamanho){
    int j=0,aux,i;

    for (int i = 0; i < tamanho; i++)
        {
            for (int j = 0; j < tamanho; j++)
            {
                if (vetor[i] <= vetor[j])
                {

                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }
   printf("\Ordenando\n");

 for ( i=0;i<10;i++){
        printf("%d ",vetor[i]);
    }

}
