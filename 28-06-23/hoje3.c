#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro_livro {

char nome[300];
char autor[300];
char categoria[300];
float preco;    
int pessoa[3];

};

int main () {

struct cadastro_livro pessoa[3];    
int i;

for (i = 0; i < 3; i++) {
    
printf("informe o nome do livro %d \n", i + 1);
gets(pessoa[i].nome);

printf("informe o nome do autor do livro %d \n", i + 1);
gets(pessoa[i].autor);


printf("informe a categoria do livro %d \n", i + 1);
gets(pessoa[i].categoria);

printf("informe o preco do livro %d \n", i + 1);
scanf("%f",&pessoa[i].preco);



}

for (i = 0; i < 3; i++) {
    
printf(" nome do livro \n %s \n", pessoa[i].nome);
printf(" autor do livro \n %s \n", pessoa[i].autor);
printf(" categoria do livro \n %s \n", pessoa[i].categoria);
printf(" preco do livro \n  R$ %.2f \n", pessoa[i].preco);

}

return 0;

}

