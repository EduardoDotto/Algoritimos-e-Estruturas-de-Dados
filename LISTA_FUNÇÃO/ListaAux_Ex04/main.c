#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
// EX04 - PRIMO
// INDICE DE FUN��ES
int primo (int a);

int main()
{
setlocale(LC_ALL, "Portuguese");
int menorprimo,a;
        printf("FAVOR INFORMAR UM N�MERO \n");
        scanf("%d",&a);
        menorprimo=primo(a);
        printf("\nO MAIOR NUMERO PRIMO, <= A %d � %d\n",a,menorprimo);
}

int primo (int a){
int prim, i=0, soma=0;
for (i = 1; i <= a; i++){
if (a%i==0){
printf("% d ",i);
soma++;
}
}
return (prim);
}
