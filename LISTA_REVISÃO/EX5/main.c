#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ordenastring(char vetor[3][40], int tamanho);
int tamanho=3;
int main()
{
    char vetor[3][40];

    for (int i=0; i<3; i++)
    {
        fflush(stdin);
        gets(vetor[i]);
    }
    printf("\========LIDAS==========\n");

    printf("\========IMPRIMINDO======\n");

    for (int i=0; i<3; i++)
    {
        printf("%s \n",vetor[i]);
    }

    ordenastring(vetor,tamanho);

    return 0;
}
ordenastring(char vetor[3][40],int tamanho)
{
    int j=0,i;
    char aux[40];

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if ((strcmp(vetor[i],vetor[j]))<0)
            {
                strcpy(aux,vetor[i]);
                strcpy(vetor[i],vetor[j]);
                strcpy(vetor[j],aux);
            }
        }
    }
    printf("\==========ORDENANDO=========   \n");

    for ( i=0; i<3; i++)
    {
        printf("%s \n",vetor[i]);
    }

}
