#include <stdio.h>

int main()
{
    int op;
    float c01, c02, c03, c04, c05;
    float votos_totais;
    
    do {
        printf("\n=-=-=-=-=-=-=-=-=-=-=\nURNA ELETRONICA\n=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\nSelecione o seu candidato\n");
        printf("\n1- Jair Rodrigues\n2- Carlos Luz\n3- Neves Rocha\n4- Nulo\n5- Branco\n--------------------\nSua opcao: ");
        scanf("%i", &op);
        
        switch(op) {
            case 1:
                c01++;
                break;
            case 2:
                c02++;
                break;
            case 3:
                c03++;
                break;
            case 4:
                c04++;
                break;
            case 5:
                c05++;
                break;
            case 6:
                printf("\n--------------------\nApurando votos...\n--------------------\n");
        }
    }
    while(op != 6);
    
    votos_totais = c01 + c02 + c03 + c04 + c05;
    
    printf("O candidato Jair Rodrigues ficou com %.0f votos (%.2f%% dos votos totais).\n", c01, (c01/votos_totais)*100);
    printf("O candidato Carlos Luz ficou com %.0f votos (%.2f%% dos votos totais).\n", c02, (c02/votos_totais)*100);
    printf("O candidato Neves Rocha ficou com %.0f votos (%.2f%% dos votos totais).\n", c03, (c03/votos_totais)*100);
    printf("Houveram %.0f votos nulos (%.2f%% dos votos totais).\n", c04, (c04/votos_totais)*100);
    printf("%.0f pessoas votaram em branco (%.2f%% dos votos totais).\n", c05, (c05/votos_totais)*100);
    
    if (c01 > c02 && c01 > c03)
        printf("\n\n####################\nO candidato eleito foi o Jair Rodrigues.\n####################\n\n");
    if (c02 > c01 && c02 > c03)
        printf("\n\n####################\nO candidato eleito foi o Carlos Luz.\n####################\n\n");
    if (c03 > c02 && c03 > c01)
        printf("\n\n####################\nO candidato eleito foi o Neves Rocha.\n####################\n\n");

    return 0;
}
