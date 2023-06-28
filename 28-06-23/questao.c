#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char disciplina[3][300];
float notas[2][3];
float somanotas[2];
float media[3];
int i, j;

for (i = 0; i < 3; i++) {
    
printf("informe o nome da %i disciplina \n",i + 1);
gets(disciplina[i]);

for (j = 0; j < 2 ; j++) {
    
printf("informe a nota %i da %i disciplina \n",j + 1, i + 1);
scanf("%f",&notas[i][j]);

somanotas[i] += notas[i][j];

}

media[i] = somanotas[i] / 2;
fflush(stdin);

}

for (i = 0; i < 3; i++) {
printf(" %i disciplina %s \n", i + 1, disciplina[i]);    
    
for (j = 0; j < 2; j++) {
    
printf(" %i nota %.1f \n", j + 1, notas[i][j]);

}

printf(" %i media final %.1f \n", media[i]);


}


return 0;

}
