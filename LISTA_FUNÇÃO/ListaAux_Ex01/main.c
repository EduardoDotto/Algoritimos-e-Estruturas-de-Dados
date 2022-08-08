#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
// EX01
// INDICE DE FUNÇÕES
double expo (double a, int b);

int main()
{
setlocale(LC_ALL, "Portuguese");
int b=0,i=0,j=0;
double exp=0,a=2;
        /*printf("FAVOR INFORMAR A BASE(a) DE a^b \n");
        scanf("%lf",&a);
        printf("FAVOR INFORMAR O EXPOENTE(b) DE a^b \n");
        scanf("%d",&b);*/
    for (a = 2; a <=10; a++){
        for (b = 0; b <=10; b++){
        exp=expo(a,b);
        printf("\nO VALOR DE %.2lf^%d É: %.2lf\n",a,b,exp);
        }
    }
}

double expo (double a, int b){
int i;
double exp=1;
if (b==0)
return 1;
for (i = 1; i <=b; i++){
    exp=exp*a;
}
return (exp);
}
