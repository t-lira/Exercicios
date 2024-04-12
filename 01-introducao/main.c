/*
1) Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B.
A seguir (utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que o
valor que está em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados
nas variáveis. 
*/

#include <stdio.h>

int main() {
  int a, b, aux;

  // Atribuindo valores iniciais
  a = 10;
  b = 20;

  // Trocando os valores usando uma variável auxiliar
  aux = a;
  a = b;
  b = aux;

  // Exibindo os valores finais
  printf("Valor de A: %d\n", a);
  printf("Valor de B: %d\n", b);

  return 0;
}
