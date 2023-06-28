#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

float salario, filhos, somafilhos, somasalario, mediafilhos, mediasalario;
float menorsalario = 99999, maiorsalario = 0;
int contador = 0;

do {
    
printf("diga seu salario \n");
scanf("%f",&salario);

if (salario < 0) {
    
break;

}

printf("diga a quantidade de filhos \n");
scanf("%f",&filhos);

somafilhos += filhos;
somasalario += salario;
contador++;


} while (salario >= 0);

mediafilhos = somafilhos / contador;
mediasalario = somasalario / contador;

if (salario > maiorsalario) {
    
    maiorsalario = salario;


} if (salario < menorsalario) {

    menorsalario = salario;

}

printf("quantidade de familias que contribuiram com a pesquisa %i \n",contador);
printf("media salarial %.2f \n",mediasalario);
printf("media de filhos %.0f \n",mediafilhos);
printf("maior salario %.2f \n",maiorsalario);
printf("menor salario %.2f \n",menorsalario);


return 0;

}

