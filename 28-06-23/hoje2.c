#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

float notas[3];
float somanotas;
float media;
int i;

for (i = 0; i < 3; i++) {
    
printf("informe a %d nota \n", i + 1);
scanf("%f",&notas[i]);

somanotas += notas[i];

}

media = somanotas / 3;


if (media >= 7) {
    
printf("aprovado \n");

} else if (media >= 5) {

printf("recuperacao \n");

} else {

printf("reprovado \n");

}


printf("media final %.1f \n",media);

return 0;

}
