#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
// EX03 - FIBONACCI
// INDICE DE FUN��ES
int fibonacci (int a);

int main()
{
setlocale(LC_ALL, "Portuguese");
int fibo,a;
        printf("FAVOR INFORMAR UM N�MERO \n");
        scanf("%d",&a);
        fibo=fibonacci(a);
        printf("\nO NUMERO DE FUBONACCI PROXIMO DE %d E MAIOR � %d\n",a,fibo);
}

int fibonacci (int a){
int x=0, y=1, soma=0;

while (soma<=a){
printf("% d ",x);
soma=x+y;
y=x;
x=soma;
}
return (x);
}
