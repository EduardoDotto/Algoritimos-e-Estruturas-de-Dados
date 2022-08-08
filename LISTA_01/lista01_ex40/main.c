#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_40
//Catetos das hipotenusas
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float CA,CO,hipotenusa;
        printf("Favor informar o cateto adjacente\n");
        scanf("%f",&CA);
        printf("Favor informar o cateto oposto\n");
        scanf("%f",&CO);
        hipotenusa=sqrt(pow(CA,2)+pow(CO,2));
        printf("A hipotenusa é %.2f \n",hipotenusa);
}
