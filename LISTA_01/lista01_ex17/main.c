#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_18
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float hnorm,hextra,brut,liquid,horas;
    printf("Favor informar o total de horas trabalhadas (º): ");
    scanf("%f",&horas);
    hnorm=22*8;
    if (horas>hnorm){
        hextra=horas-hnorm
    }
    else{
        hextra=0;
        hnorm=horas;
    }
    brut=10*hnorm+15*hextra;
    liquid=brut*0.9;
    printf("O salario bruto é R$ %.2fº e o salario liquido é R$ %.2f \n",brut,liquid);

}
