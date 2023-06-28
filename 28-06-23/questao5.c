#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

float numero1, numero2, media, soma, produto, maior = 0, menor = 999, igual;

printf("preencha o primeiro numero \n");
scanf("%f",&numero1);

printf("preencha o segundo numero \n");
scanf("%f",&numero2);

soma = numero1 + numero2;
produto = numero1 * numero2;
media = numero1,numero2 / 2;

if (numero1 > numero2) {
    maior = numero1;
    menor = numero2;

} else {
maior = numero2;
menor = numero1;

} if (numero1 = numero2) {

igual = numero1,numero2;

}

printf("apresentando primeiro numero %.0f \n",numero1);
printf("apresentando segundo numero %.0f \n",numero2);
printf("media %.1f \n",media);
printf("soma %.0f \n",soma);
printf("produto %.0f \n",produto);
printf("maior %.0f \n",maior);
printf("menor %.0f \n",menor);
printf(" \n \n");
printf("numeros iguais %.0f \n",numero1,numero2);

return 0;

}