#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main () {

float notas[3][3];
float somanotas[3];
float media[2];
int semestre[2][3];
int i, j;


for (i = 0; i < 2; i++) {

for (j = 0; j < 3 ; j++) {
    
printf("informe a nota %i do %i semestre \n", j + 1 , i + 1);
scanf("%f",&notas[i][j]);

somanotas[i] += notas[i][j];


}

media[i] = somanotas[i] / 3;

}

for (i = 0; i < 2; i++) {
    
printf("%i semestre \n",i + 1,semestre[i]);

for (j = 0; j < 3; j++) {
    
printf("%i nota do %i semestre %.1f \n", j + 1, i + 1,notas[i][j]);

}

printf(" %i media final %.1f \n",i + 1, media[i]);

}

return 0;

}
