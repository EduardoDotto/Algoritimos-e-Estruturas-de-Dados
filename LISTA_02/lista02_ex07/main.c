#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Ex_07

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float altura;
    char sexo;
    printf("Favor o sexo do individuo:\nM - MASCULINO \nF - FEMININO\n");
    scanf("%c",&sexo);
        while ((sexo!='f') && (sexo!='m') && (sexo!='F') && (sexo!='M')){
        printf("Favor o sexo do individuo:\nM - MASCULINO \nF - FEMININO\n");
        scanf("% c",&sexo);
        }
    printf("Favor informar a altura\n");
    scanf("%f",&altura);
        if ((sexo=='m')||(sexo=='M'))
        printf("O peso ideal para o HOMEM é %.2f\n",(72.7)*altura-58);
        else if ((sexo=='f')||(sexo=='F'))
        printf("O peso ideal para a MULHER é %.2f\n",(62.1)*altura-44.7);

}
