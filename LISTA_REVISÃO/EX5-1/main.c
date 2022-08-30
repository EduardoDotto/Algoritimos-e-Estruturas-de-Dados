#include <stdio.h>
#include <string.h>

int main(){

int i,j;
char nome[3][40];
char x[40];

for (i=0; i < 3; i++){

  printf("Digite o %d nome:", i+1);
  fflush(stdin);
  gets(nome[i]);
}

for(i = 0; i < 3; i++){
for(j = i+1; j < 3; j++){
if(strcmp(nome[i], nome[j]) > 0){

  		strcpy(x, nome[i]);
  		strcpy(nome[i], nome[j]);
  		strcpy(nome[j], x);
  	}
  }
}

for(i = 0; i < 3; i++){

  printf("%s\n", nome[i]);
}
}
