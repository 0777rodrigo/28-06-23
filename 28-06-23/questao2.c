#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char disciplina[3][300];
float notas[3][3];
float somanotas[3];
float media[3];
int semestre[3][3];
int i, j;    

for (i = 0; i < 3; i++) {

printf("informe o nome da %i disciplina \n",i + 1);
gets(disciplina[i]);

for (j = 0; j < 3; j++) {
    
printf("informe a nota %i da %i disciplina \n", j + 1, i + 1);
scanf("%f",&notas[i][j]);

somanotas[i] += notas[i][j];


}

media[i] = somanotas[i] / 3;


}

for (i = 0; i < 3; i++) {
    
printf("%i nome da disciplina: %i \n",i + 1,disciplina[i]);


for (j = 0; j < 3; j++) {
    
printf("%i nota da %i disciplina \n",j + 1, i + 1,notas[i][j]);

}

printf("%i media final %.1f \n",i + 1, media[i]);


}

return 0;

}
