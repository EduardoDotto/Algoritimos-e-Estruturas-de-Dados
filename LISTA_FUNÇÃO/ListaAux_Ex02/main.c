#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
// EX02
// INDICE DE FUN��ES
double fatorial (int a);

int main()
{
setlocale(LC_ALL, "Portuguese");
int i,fat,a;
        printf("FAVOR INFORMAR UM N�MERO \n");
        scanf("%d",&a);
        fat=fatorial(a);
        printf("\nO FATORIAL DE %d � %d\n",a,fat);
}

double fatorial (a){

int fato=1,i;
for (i = 1; i <=a; i++){
    fato=fato*i;
}
return (fato);
}
