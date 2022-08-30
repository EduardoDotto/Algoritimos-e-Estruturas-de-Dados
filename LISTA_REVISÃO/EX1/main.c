#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
//#define NPACIENTE 2
NPACIENTE= 2;
struct paciente
{
    char nome[50];
    float peso;
    float altura;
    int data;
    float imc;
    int ocupado;
};
//Declarando as funções
struct paciente lepaciente();
void buscamenorimc(struct paciente vetor[], int NPACIENTE);
void imprimepaciente(struct paciente menorimc);
void verificaobesidade(struct paciente vetor[],int NPACIENTE);
int main()
{
    struct paciente a[NPACIENTE];;
    setlocale(LC_ALL, "PORTUGUESE");

    // QUESTÃO 1 - CONDICIONAIS
    for (int i=0; i<NPACIENTE; i++)
    {
        a[i]=lepaciente();
    }
    // BUSCANDO MENOR IMC
    buscamenorimc(a,NPACIENTE);

    // VERIFICA OBESIDADE
    verificaobesidade(a,NPACIENTE);
}
struct paciente lepaciente()
{
    struct paciente aux;

    printf("INFORMAR NOME: ");
    gets(aux.nome);

    printf("INFORMAR PESO: ");
    scanf("%f",&aux.peso);;

    printf("ALTURA: ");
    scanf("%f",&aux.altura);


    printf("INFORMAR DATA: \n");
    printf("INFORME O DD/MM/AAAA: ");
    scanf("%d",&aux.data);

    aux.imc=aux.peso/pow(aux.altura,2);

    aux.ocupado=1;
    fflush(stdin);
    printf("=====================================\n");

    return aux;
};

void buscamenorimc(struct paciente vetor[], int NPACIENTE)
{
    float menorimc=vetor[0].imc;
    int posmenor=0;
    for(int i=0; i<NPACIENTE; i++)
    {
        if (menorimc > vetor[i].imc)
        {
            posmenor=i;
        }
    }
    printf("O paciente com o menor IMC é o paciente: \n");
    imprimepaciente(vetor[posmenor]);
    printf("=====================================\n");

}
void imprimepaciente(struct paciente menorimc)
{
    printf("Nome: %s \n", menorimc.nome);
    printf("Peso: %.2f \n", menorimc.peso);
    printf("Altura: %.2f \n", menorimc.altura);
    printf("Imc: %.2f \n", menorimc.imc);
    printf("Na data de %d \n", menorimc.data);
    //printf("=====================================\n");
}
void verificaobesidade(struct paciente vetor[],int NPACIENTE)
{

    for (int i=0; i<NPACIENTE; i++)
    {
        if (vetor[i].imc > 18.5 && vetor[i].imc <24.9 )
        {
            printf("PACIENTE %d - %s COM PESO NORMAL!\n",i,vetor[i].nome);
        }
        else if (vetor[i].imc > 25 && vetor[i].imc <29.9 )
        {
            printf("PACIENTE %d - %s COM SOBREPESO!\n",i,vetor[i].nome);
        }
        else if (vetor[i].imc > 30)
        {
            printf("PACIENTE %d - %s COM OBESIDADE!\n",i,vetor[i].nome);
        }
        else if (vetor[i].imc > 30)
        {
            printf("PACIENTE %d - %s COM OBEESIDADE GRAVE!!!\n",i,vetor[i].nome);
        }
        else if (vetor[i].imc < 18.5 )
        {
            printf("PACIENTE %d - %s COM DESNUTRIÇÃO!!!\nf",i,vetor[i].nome);
        }
        printf("=====================================\n");
    }

}
