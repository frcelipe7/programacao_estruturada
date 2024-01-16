/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float saldo;
    int op;
    
    do{
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=\nBANCO LEGAL\n=-=-=-=-=-=-=-=-=-=-=\n\n");
        printf("Opcoes: ###################\n1- Consultar saldo;\n2- Saque;\n3- Deposito\n4- Sair.\nInforme a operacao desejada: ");
        scanf("%d", &op);
        
        switch(op) {
            case 1:
                printf("\nO seu saldo e de: R$ %.2f", saldo);
                break;
            case 2:
                float saque;
                printf("Quanto voce deseja sacar? ");
                scanf("%f", &saque);
                saldo -= saque;
                printf("\nSaque realizado com sucesso!\nO seu novo saldo e de: R$ %.2f", saldo);
                break;
            case 3:
                float deposito;
                printf("Quanto voce deseja depositar? ");
                scanf("%f", &deposito);
                saldo += deposito;
                printf("\nDeposito realizado com sucesso!\nO seu novo saldo e de: R$ %.2f", saldo);
                break;
            case 4:
                printf("\n\n------------------\n\nFinalizando\n\n------------------\n\n");
                break;
        }
        
    } while(op != 4);
}
