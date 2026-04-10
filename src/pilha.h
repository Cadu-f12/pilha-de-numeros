typedef struct Pilha_ Pilha;

Pilha* create_stack();

int push(Pilha *pilha, int value);

int pop(Pilha *pilha, int *value);

int peek(Pilha *pilha);

void free_stack(Pilha *pilha);