#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_01

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float N1,N2,maior;
    printf("Favor informar o primeiro valor:\n");
    scanf("%f",&N1);
    printf("Favor informar o segundo valor:\n");
    scanf("%f",&N2);
        if ((N1>N2)){
        maior=N1;
        printf("O maior valor é: %.2f\n",maior);}
        else if(N2>N1){
        maior=N2;
        printf("O maior valor é: %.2f\n",maior);}
        else if(N2==N1)
        printf("Os valores são iguais, logo o maior é: %.2f\n",N1);
}

