#include <stdio.h>

float substituir(float nota01, float nota02, float subs)
{
    float sum;
    
    if (nota01 > nota02)
        nota02 = subs;
    else
        nota01 = subs;
        
    sum = nota01 + nota02;
    
    float media = sum/2;
    
    return media;
}

int main()
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nPROGRAMACAO ESTRUTURADA\nProf Alan\nAluno Felipe Raphael\nQuestao 02\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    float nota01;
    float nota02;
    float subs;
    
    printf("Insira a nota 01\n");
    scanf("%d", &nota01);
    
    printf("Insira a nota 02\n");
    scanf("%d", &nota02);
    
    printf("Insira a nota substitutiva\n");
    scanf("%d", &subs);

    printf("Sua nota final eh: %.1f", substituir(nota01, nota02, subs));
    
    return 0;
}

