#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int dados[MAX];
    int top; 
}Pilha;

void inPilha(Pilha *p){
    p->top = -1;
}

int isfull(Pilha *p){
   return p ->top == MAX - 1; 
}

int isempty(Pilha *p){
    return p ->top == -1;
}
void push(Pilha *p, int dados){
    if(isfull){
        printf("\n fila cheia mlkote\n");
    }else {p->dados[ p++->top] = dado;}
}
int pop(Pilha *p){
    if(isempty){
        printf("\nfila vazia parcero\n");
        return -1;
    }else{ 
        return p->dados[p->top--];}
}
int peek(Pilha*p){
    if (isempty){
        printf(" \n fila vazia \n")
        return -1;
    }else{
        return p->dados[p->top];
    }
}

int main(){
    Pilha pilha;
    inPilha(&pilha);

    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);

    printf(" \n Elemento no topo da lista:%d\n",top(&pilha));

    while (!isempty(&pilha))
    {
       printf(" \nElemento expulso! %d\n", pop(&pilha));
    }
    
    return 0;
}
