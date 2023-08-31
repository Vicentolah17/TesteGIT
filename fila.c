#include <stdio.h>
#include <stdlib.h>
#define MAX 100;

typedef struct{
    int *elements;
    int inicio;
    int final;
} Fila;
void infila(Fila *f){
    f->inicio= -1;
    f ->final final= -1;
} 
int isfull(Fila *f){
    return (f->final == MAX -1);
}
int isempty(Fila *f){
    return (f-> inicio == -1);

}
void enqueue(Fila *f,int item){
    if (isfull(f)){
        printf("\n fila ta cheiassa mlk\n");
    }else{
        if(isempty){
            f->inicio=0;
        } 
   f->final++
   f->elements[f->final++] = dado;     
    }   
}
int dequeue(Fila *f){
    if (isempty(f)){
        printf("\n fila ta vazia nao tem oq retirar");
        return -1;
    }else{
        int dado= f->elements[f->inicio];
          if(f->inicio == f->final){
            f->inicio = -1;
            f->final = -1;
         }else{
            f->inicio++;}
            return dado; 
         }
}

int main(){
    Fila fila;
    infila(&fila);

    enqueue(10,&fila);
    enqueue(20,&fila);
    enqueue(30,&fila);

    printf("Elemento removido! %d", dequeue(&fila));
    printf("Elemento removido! %d", dequeue(&fila));
    printf("Elemento removido! %d", dequeue(&fila));

}