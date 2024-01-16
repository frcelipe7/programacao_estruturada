#include <stdio.h>

int main()
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nPROGRAMACAO ESTRUTURADA\nProf Alan\nAluno Felipe Raphael\nQuestao 04\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    float valor_pago;
    int codigo;
    
    printf("Insira o valor da compra: ");
    scanf("%f", &valor_pago);
    
    printf("\nInsira o codigo: (1- funcionario; 2- cliente vip; 3- cliente comum) ");
    scanf("%i", &codigo);
    
    switch(codigo) {
        case 1:
            printf("\n------------------------------------\nValor Total da compra: R$ %.2f\n------------------------------------\n", valor_pago * 0.9);
            break;
        case 2:
            printf("\n------------------------------------\nValor Total da compra: R$ %.2f\n------------------------------------\n", valor_pago * 0.95);
            break;
        default:
            printf("\n------------------------------------\nValor Total da compra: R$ %.2f\n------------------------------------\n", valor_pago);
    }
    
    return 0;
}