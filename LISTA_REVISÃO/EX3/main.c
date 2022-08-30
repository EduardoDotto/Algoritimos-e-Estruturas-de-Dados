#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main()
{//
int nume;
char variavel,  novo[50];
char var[60];
//printf("Digite variavel\n");
//scanf("%c",&variavel);
//printf ("%c",variavel);
//====================================

printf("Digite var\n");
gets(var);
printf ("%s\n",var);
//=====================================
//printf ("%d\n",variavel);
printf("===============\n");
strcpy(novo,var);

printf ("%s\n",novo);
printf("===============\n");
fflush(stdin);
getc(nume);
printf ("%s\n",nume);



    return 0;
}
