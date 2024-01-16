#include <stdio.h>

void qual_mes(int mes) {
    switch(mes) {
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Marco");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
        default:
            printf("Se considerarmos o mes atual como Janeiro, daqui a %i meses sera o mes de: ", mes);
            qual_mes(mes%12);
    }
}

int main()
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nPROGRAMACAO ESTRUTURADA\nProf Alan\nAluno Felipe Raphael\nQuestao 05\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    
    int mes;
    
    printf("Digite um numero correspondente a um mes do ano: ");
    scanf("%i", &mes);
    
    printf("\n------------------------------------\n");
    
    printf("Mes ");
    if (mes <= 9)
        printf("0");
    printf("%i: ", mes);
    
    qual_mes(mes);
    
    printf("\n------------------------------------\n");
    
    return 0;
}