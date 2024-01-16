#include <stdio.h>

int main() {
  int option;
  float taxa_n, taxa_m, valor_n, valor_o, populacao_t;

  printf("Voce quer calcular a taxa de natalidade ou de mortalidade? (1- "
         "natalidade; 2- mortalidade) \n");
  scanf("%f", &option);
  printf("Digite o numero de habitantes no pais: \n");
  scanf("%f", &populacao_t);

  switch (option) {
  case 1:
    printf("Digite o numero de crianças nascidas: \n");
    scanf("%f", &valor_n);
    taxa_n = (valor_n / populacao_t) * 1000;
    printf("A taxa de natalidade e de: %.2f a cada 1000 habitantes", taxa_n);
    break;
  case 2:
    printf("Digite o numero de habitantes mortos: \n");
    scanf("%f", &valor_o);
    taxa_m = (valor_o / populacao_t) * 1000;
    printf("A taxa de mortalidade e de: %.2f a cada 1000 habitantes", taxa_m);
    break;
  default:
    printf("Sei n");
  }

  return 0;
}
