#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//EX_37


int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Favor informar o numero da taboada desejada\n");
    scanf("%d",&num);
    printf("A taboada do %d é\n",num);
    printf("1 X %d = %d \n",num,num*1);
    printf("1 X %d = %d \n",num,num*2);
    printf("1 X %d = %d\n",num,num*3);
    printf("1 X %d = %d\n",num,num*4);
    printf("1 X %d = %d\n",num,num*5);
    printf("1 X %d = %d\n",num,num*6);
    printf("1 X %d = %d\n",num,num*7);
    printf("1 X %d = %d\n",num,num*8);
    printf("1 X %d = %d\n",num,num*9);
    printf("1 X %d = %d\n",num,num*10);


}
