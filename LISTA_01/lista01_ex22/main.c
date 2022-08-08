#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_22
// oque tem ali em baixo é da 21!!!
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int cent1,cent5,cent10,cent25,cent50,cent100;
    float econo;
    printf("Favor informar a quantidade de moedas de 1 centavo ");
    scanf("%d",&cent1);
    printf("Favor informar a quantidade de moedas de 5 centavo ");
    scanf("%d",&cent5);
    printf("Favor informar a quantidade de moedas de 10 centavo ");
    scanf("%d",&cent10);
    printf("Favor informar a quantidade de moedas de 25 centavo ");
    scanf("%d",&cent25);
    printf("Favor informar a quantidade de moedas de 50 centavo ");
    scanf("%d",&cent50);
    printf("Favor informar a quantidade de moedas de 100 centavo ");
    scanf("%d",&cent100);
    econo=(cent1*0.01+cent5*0.05+cent10*0.10+cent25*0.25+cent50*0.50+cent100);
    printf("O total de economia foi de R$ %.2f reais\n",econo);

}
