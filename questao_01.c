#include <stdio.h>

int main()
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nPROGRAMACAO ESTRUTURADA\nProf Alan\nAluno Felipe Raphael\nQuestao 01\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    float n01, n02, n03, n04, media;
    
    printf("Insira a nota 01: ");
    scanf("%f", &n01);
    
    printf("\nInsira a nota 02: ");
    scanf("%f", &n02);
    
    printf("\nInsira a nota 03: ");
    scanf("%f", &n03);
    
    printf("\nInsira a nota 04: ");
    scanf("%f", &n04);
    
    media = (n01 + n02 + n03 + n04) / 4;
    
    printf("\n=============\nSua media eh: %.2f", media);

    return 0;
}


