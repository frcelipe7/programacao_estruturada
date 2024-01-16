#include <stdio.h>
#include <math.h>

int verificar_se_primo(int numero) {
  int primo = 0;
  if (numero % 2 != 0 && numero % 3 != 0 && numero % 5 != 0 &&
      numero % 7 != 0) {
    primo = 1;
  }

  if (numero == 0 || numero == 1) {
    primo = 0;
  }

  return primo;
}

int main() {
  int numero;
  int continuar = 1;
  
  while(continuar == 1) {
    int primo = 1;

    printf("\nDigite um número: ");
    scanf("%i", &numero);

    if (numero == 2 || numero == 3 || numero == 5 || numero == 7) {
      printf("\n%i é primo", numero);
    } else {
      if (numero != 1 && numero != 0) {
        int tamanho_lista = sqrt(numero)+1;
        
        int lista_de_numeros_primos[tamanho_lista];

        int int_list_count = 0;

        for (int i=0; i < tamanho_lista+5; i++) {
          if (i == 2 || i == 3 || i == 5 || i == 7) {
            lista_de_numeros_primos[int_list_count] = i;
            int_list_count++;
          } else {
            if (verificar_se_primo(i) == 1) {
              lista_de_numeros_primos[int_list_count] = i;
              int_list_count++;
            }
          }
        }

        primo = 1;
        for (int i = 0; i < tamanho_lista; i++) {
          if (lista_de_numeros_primos[i] != 0 && lista_de_numeros_primos[i] != 1) {
            if (lista_de_numeros_primos[i] < tamanho_lista && lista_de_numeros_primos[i] > 1) {
              if (numero % lista_de_numeros_primos[i] == 0) {
                primo = 0;
                break;
              }
            }
          }
        }

        if (primo == 1) {
          printf("\n%i e primo", numero);
        } else {
          printf("\n%i n e primo", numero);
        }
      }
    }
  }
  
  return 0;
}
