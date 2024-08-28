#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

   char nome[30];
   char endereco[30];
   int idade;
  printf("Digite o seu nome:\n");
  scanf("%s", &nome);
  printf("Digite o seu endereco:\n");
  scanf("%s", &endereco);
  printf("Digite a sua idade:\n ");
  scanf("%d", &idade);
  printf(" seu nome: %s\n endereco: %s\n sua idade: %d\n", nome, endereco, idade);
	return 0;
}
