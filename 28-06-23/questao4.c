#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

float numero1, numero2, media, soma, produto, maior = 0, menor = 999;
    

printf("digite um numero \n");
scanf("%f",&numero1);

printf("digite um numero \n");
scanf("%f",&numero2);

soma = numero1 + numero2;
produto = numero1 * numero2;
media = numero1, numero2 / 2;

if (numero1 > numero2) {
    
    maior = numero1;
    menor = numero2;

} else {
maior = numero2;
menor = numero1;

}

printf("primeiro numero selecionado %.0f \n",numero1);
printf("segundo numero selecionado %.0f\n",numero2);
printf("soma foi %.0f \n",soma);
printf("o produto foi %.0f \n",produto);
printf("menor numero %.0f \n",menor);
printf("maior numero %.0f \n",maior);
printf("media final foi %.1f \n",media);

return 0;

}