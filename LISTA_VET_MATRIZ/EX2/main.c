#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//EX-2
void lervetor (int vetor[], int tamanho);
void imprimirvetor (int vetor[], int tamanho);
void parimpar(int vetor[], int tamanho);
void mediaelementovetor (int vetor[], int tamanho);
void eliminarepetido(int vetor [],int tamanho);
void ordenavet(int vetor [],int tamanho, char ordem);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tamanho=0;
    int vetor[100]= {0};
    char ordem;

    printf("INFORME O NUMERO DE DIGITOS DO VETOR\n");
    scanf("%d",&tamanho);
    //LENDO O VETOR
    lervetor (vetor, tamanho);
    imprimirvetor (vetor,tamanho);
    printf("\n=================================\n");
    //PAR OU IMPAR
    parimpar(vetor, tamanho);
    //MÉDIA
    mediaelementovetor (vetor,tamanho);
    eliminarepetido(vetor,tamanho);
    //ORDENAÇÃO
    printf("\nInforme como deseja ordenar:\n");
    printf("DIGITE 'C' PARA CRESCENTE \n");
    printf("DIGITE 'D' PARA DECRESCENTE \n");
    //LIMPANDO
    fflush(stdin);
    scanf("%c", &ordem);
    ordenavet(vetor,tamanho,ordem);
}
void lervetor (int vetor[], int tamanho)
{
    int a,b;
    printf("\nESCREVA O VETOR\n");
    for (a = 0; a < tamanho; a++)
    {
        scanf("%d",&b);
        vetor[a]=b;
        printf("A possição [%d] do vetor é [%d] \n", a, vetor[a]);
    }
    printf("VETOR LIDO\n");


}
void parimpar (int vetor[], int tamanho)
{
    int a,b,contimpar=0,contpar=0;
    int par[100]= {0};
    int impar[100]= {0};
    for (a = 0; a < tamanho; a++)
    {
        if (vetor[a]%2==0)
        {
            par[contpar]=vetor[a];
            contpar++;
        }
        else
        {
            impar[contimpar]=vetor[a];
            contimpar++;
        }

    }
    printf("\nOS PARES SÃO: \n");
    imprimirvetor (par, contpar);
    printf("\n=================================\n");
    printf("\nOS IMPARES SÃO: \n");
    imprimirvetor (impar, contimpar);
    printf("\n=================================\n");
}

void imprimirvetor (int vetor[], int tamanho)
{
    int a;
    for (a = 0; a < tamanho; a++)
    {
        printf("[%d] ", vetor[a]);
    }
}

void mediaelementovetor (int vetor[], int tamanho)
{
    int a;
    double media;
    media=0;
    for (a = 0; a < tamanho; a++)
    {
        media+=vetor[a];
    }
    printf("\n\nA MÉDIA É: %.2f\n",media/tamanho);
    printf("\n=================================\n");
}

void eliminarepetido(int vetor [],int tamanho)
{
    int i,j=0,x,aux,cont=1,flag=0;
    int vetaux[100]= {-1};
    vetaux[0]=vetor[0];
    for(i=1; i<tamanho; i++)
    {
        for(j=0; j<cont; j++)
        {
            if(vetaux[j]==vetor[i])
            {
                flag=1;
            }
        }
        if(flag!=1)
        {
            vetaux[j]=vetor[i];
            cont++;
        }
        flag=0;
    }
    printf("\nO VETOR SEM REPETIDOS É:\n");
    imprimirvetor(vetaux,cont);
    printf("\n=================================\n");

}

void ordenavet(int vetor [],int tamanho,char ordem)
{
    int i,j,aux;

    switch (toupper(ordem))
    {
    case 'C':
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
        printf("CRESCENTE\n");
        break;

    case 'D' :
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = 0; j < tamanho; j++)
            {
                if (vetor[i] >= vetor[j])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }
        printf("DECRECENTE\n");
        break;
    }
    imprimirvetor(vetor,tamanho);
    printf("\n=================================\n");

}
