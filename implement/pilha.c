#include <stdlib.h>
#include <stdio.h>

#include "../lib/pilha.h"

typedef struct Pilha_ {
    int size;
    int stack[10];
} Pilha;

Pilha* create_stack() {
    Pilha *pilha = malloc(sizeof(Pilha));

    pilha->size = 0;

    return pilha;
}

int push(Pilha *pilha, int value) {
    if(!pilha) {
        printf("A pilha está apontando para NULL\n");
        return 0;
    }
    if(pilha->size == 10) {
        printf("A pilha está cheia!\n");
        return 0;
    }

    pilha->stack[pilha->size] = value;
    pilha->size++;

    return 1;
}

int pop(Pilha *pilha, int *value) {
    int head = pilha->size - 1;
    
    if(!pilha) {
        printf("A pilha está apontando para NULL\n");
        return 0;
    }
    if(pilha->size == 0) {
        printf("A pilha está vazia!\n");
        *value = 0;
        return 0;
    }

    *value = pilha->stack[head];
    pilha->size--;

    return 1;
}

int peek(Pilha *pilha) {
    int head = pilha->size - 1;
    
    if(!pilha) {
        printf("A pilha está apontando para NULL\n");
        return 0;
    }
    if(pilha->size == 0) {
        printf("A pilha está sem elementos!\n");
        return 0;
    }

    return pilha->stack[head];
}

void free_stack(Pilha *pilha) {
    free(pilha);
}