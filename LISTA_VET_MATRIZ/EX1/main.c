#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//EX-1
int main()
{
    int soma=0,i;
    setlocale(LC_ALL, "Portuguese");
    // a)
    char A[6]={1,0,5,-2,-5,7};
    // b)
    soma=A[0]+A[1]+A[5];
     printf("Soma= %d\n",soma);
    // c)
    A[4]=100;
    printf("A[4]= %c\n",A[4]);
    // d)
    for (i=0;i<=6;i++){
        printf("Vetor A[%d] = %d\n",i,A[i]);
    }

    return 0;
}
