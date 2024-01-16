#include <stdio.h>


int main()
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nPROGRAMACAO ESTRUTURADA\nProf Alan\nAluno Felipe Raphael\nQuestao 03\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    
    float v01, v02;
    int op;
    
    printf("Digite o valor 1: ");
    scanf("%f", &v01);
    
    printf("\nDigite o valor 2: ");
    scanf("%f", &v02);
    
    printf("\nQual operacao: (1- Adicao; 2- Subtracao; 3- Divisao; 4- Multipicacao) ");
    scanf("%i", &op);
    
    switch(op) {
        case 1:
            printf("\n%.2f + %.2f = %.2f", v01, v02, v01 + v02);
            break;
        case 2:
            printf("\n%.2f - %.2f = %.2f", v01, v02, v01 - v02);
            break;
        case 3:
            printf("\n%.2f / %.2f = %.2f", v01, v02, v01 / v02);
            break;
        case 4:
            printf("\n%.2f x %.2f = %.2f", v01, v02, v01 * v02);
            break;
        default:
            printf("Operacao nao valida.\n");
    }
    
    return 0;
}

