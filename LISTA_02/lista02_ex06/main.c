#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_06

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1,n2,n3,pos1,pos2,pos3;

    printf("Favor informar o primeiro numero\n");
    scanf("%d",&n1);
    printf("Favor informar o segundo numero\n");
    scanf("%d",&n2);
    printf("Favor informar o terceiro numero\n");
    scanf("%d",&n3);
//Maior
        if ((n1>=n2) && (n1>=n3))
            pos3=n1;
        if ((n2>=n1) && (n2>=n3))
            pos3=n2;
        if ((n3>=n1) && (n3>=n2))
            pos3=n3;
//Médio
        if (((n1>=n2) && (n1<=n3)) || ((n1>=n3) && (n1<=n2)))
            pos2=n1;
        if ((((n2>=n1) && (n2<=n3)) || (n2>=n3) && (n2<=n1)))
            pos2=n2;
        if ((((n3>=n1) && (n3<=n2)) || (n3>=n2) && (n3<=n1)))
            pos2=n3;
//Menor
        if ((n1<=n2) && (n1<=n3))
            pos1=n1;
        if ((n2<=n1) && (n2<=n3))
            pos1=n2;
        if ((n3<=n1) && (n3<=n2))
            pos1=n3;
printf("A sequência dos números em ordem decrecente é: %d, %d, %d\n",pos3,pos2,pos1);
}
