#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro_livro {

char nome[300];
char autor[300];
char categoria[300];
float preco;
int pessoa;

};

int main () {

struct cadastro_livro pessoa;

printf("informe o nome do livro \n");
gets(pessoa.nome);

printf("informe o autor do livro \n");
gets(pessoa.autor);

printf("informe a categoria do livro \n");
gets(pessoa.categoria);

printf("informe o preco do livro \n");
scanf("%f",&pessoa.preco);


printf("nome do livro \n %s \n",pessoa.nome);
printf("nome do autor do livro \n %s \n",pessoa.autor);
printf("categoria do livro \n %s \n",pessoa.categoria);
printf("preco do livro \n R$ %.2f \n",pessoa.preco);


return 0;

}

