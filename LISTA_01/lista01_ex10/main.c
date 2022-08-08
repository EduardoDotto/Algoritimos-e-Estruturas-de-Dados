#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_10
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float x1,y1,x2,y2,dist;
    printf("Favor inserir a pos. em x do ponto 1: ");
    scanf("%f",&x1);
    printf("Favor inserir a pos. em y do ponto 1: ");
    scanf("%f",&y1);
    printf("Favor inserir a pos. em x do ponto 2: ");
    scanf("%f",&x2);
    printf("Favor inserir a pos. em y do ponto 2: ");
    scanf("%f",&y2);
    dist=sqrt((x1+x2)*(x1+x2)+(y1+y2)*(y1+y2));
    printf("A distância total é %.2f",dist);
}
