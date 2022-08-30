#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

void imprimirvetor (int vetor[], int tamanho);
void naturais7(int vetor[]); // Retorna os numeros naturais (>=0) que não são multiplos de 7 ou com final 7


int main (){
    setlocale(LC_ALL, "Portuguese");
    int vetor7[100]= {0};
    imprimirvetor(vetor7,100);
    printf("\n=============\n");
    naturais7(vetor7);
    imprimirvetor(vetor7,100);
}

void imprimirvetor (int vetor[], int tamanho)
{
    int a;
    for (a = 0; a < tamanho; a++)
    {
        printf("[%d] ", vetor[a]);
    }
}

void naturais7(int vetor[]){
    int n=0,j=0,i=0;
    int vetor7[100];
    int pot=-10;
    while (n<=100){
            if (i%10==0)
            pot=pot+10;
        if (i%7 != 0 && i-pot!=7){
            vetor[n]=i;
            n++;
        }
    i++;
    }
}
