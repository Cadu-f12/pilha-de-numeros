#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

typedef struct Pilha_ {
    int head;
    int stack[10];
} Pilha;

int main() {
    Pilha *stack = create_stack(); 

    int user;
    do {
        printf("[1] Empilhar\n");
        printf("[2] Desempilhar\n");
        printf("[3] Pegar da pilha\n");
        printf("Escolha um dos 3 digitos ou insira qualquer outro valor para sair: ");
        
        scanf("%d", &user);

        if(user == 1) {
            printf("Insira um número para empilhar: ");
            int num;
            scanf("%d", &num);
            

            system("clear");
            system("sleep 0.5");

            push(stack, num);
            printf("Valor %d inserido na pilha!\n\n", num);
        } else if(user == 2) {
            system("clear");
            system("sleep 0.5");
            
            int del;
            
            pop(stack, &del);

            printf("Valor retirado da pilha: %d\n\n", del);
        } else if(user == 3) {
            system("clear");
            system("sleep 0.5");

            int exi = peek(stack);
            printf("Valor pego da pilha: %d\n\n", exi);
        }
    } while(user == 1 || user == 2 || user == 3);

    free_stack(stack);
    return 0;
}