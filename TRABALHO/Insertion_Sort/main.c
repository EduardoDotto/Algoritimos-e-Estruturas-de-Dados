#include <math.h>
#include <stdio.h>

// FUN��O INSERTION SORT
void insertionsort(int vetor[], int n)
{
    int i, aux, j;
    for (i = 1; i < n; i++)              // PERCORE O VETOR
    {
        aux = vetor[i];                  // AUXILIARA RECEBE O SEGUNDO ELEMENTO DO VETOR
        j = i - 1;                       // J � O INDICADOR DE POSI��O DO VETOR QUE VAI SER PERCORRIDO
        while (j >= 0 && vetor[j] > aux) // LA�O DE REPETI��O REALZIADO ENQUANTO J FOR MAIOR QUE 0 E O ELEMENTO NA POSI��O J FOR MAIOR QUE A VARIAVEL AUXILIAR
        {
            vetor[j + 1] = vetor[j];     // LOGO QUANDO A CONDI��O FOR ATENDIDA O VETOR NA POSI��O J+1 RECEBE O ELEMENTO DA POSI��O J, J � DECREMENTADO.
            j = j - 1;
        }
        vetor[j + 1] = aux;             // E O VETOR NA POSI��O J+1 RECEBE O VALOR DA VARIAVEL AUX QUE � O ELEMENTO DO VETOR N�O POSI��O (I) RM QUET�O
    }
}                                       // FINALIZA AQUI A TROCA ENTRE OS ELEMENTOS

// FUN��O IMPRIME VETOR
void imprimevetor(int vetor[], int n)
{
    int i;
    for (i = 0; i < n; i++)             // LA�O DE REPETI��O SIMPLES PARA IMPRIMIR OS ELEMENTOS DE UM VETOR
        printf("%d ", vetor[i]);
    printf("\n");
}

// PROGRAMA PRINCIPAL
int main()
{
    int vetor[] = { 2, 1, 3, 4, 0 };
    int n = sizeof(vetor) / sizeof(vetor[0]); // UM INTEIRO OCUPA 4 BYTES POR ISSO � DIVIDIDO POR "sizeof(vetor[0])" ASSIM TEMOS APENAS O NUMERO DE ELEMENTOS DO VETOR DIGITADO
    printf("Vetor desordenado: ");            // IMPRIMINDO O VETOR DESORDENADO
    imprimevetor(vetor, n);

    insertionsort(vetor, n);                  // CHAMANDO A FUN��O QUE ORDENA O VETOR
    printf("Vetor ordenado: ");               // IMPRIMINDO O VETOR ORDENADO
    imprimevetor(vetor, n);

    return 0;
}
