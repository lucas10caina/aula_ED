#include <stdio.h>
#include "stdlib.h"
#include "string.h"

#define N 100


typedef struct{
    int key;
}Item;

typedef struct{
    Item array[N];
    int top;
}StaticStack;

void init(StaticStack *pilha){
    pilha->top=0;

}

int vazia(StaticStack *pilha){
    if(pilha->top==0) {
        return 1;
    }else
        return 0;
}

int cheia(StaticStack *pilha){
    if(pilha->top==N)
        return 1;
    else
        return 0;
}

void push(Item item, StaticStack *pilha){
    if(cheia(pilha)==0) {
        pilha->array[pilha->top] = item;
        pilha->top++;
    }else
        printf("Elemento não foi inserido pela pilha estar cheia\n");
}


void pop(StaticStack *pilha, Item *item){
    if(pilha->top>0){
        * item = pilha->array[pilha->top-1];
        pilha->top--;
    }

}

int size(StaticStack *pilha){
    return (pilha->top-1);
}

Item top(StaticStack *pilha){
    return (pilha->array[pilha->top-1]);
}

void print(StaticStack *pilha){
    for(int i=0; i<pilha->top-1; i++){
        printf("%d\n", pilha->array[i]);
    }
}


int main() {


    return 0;
}
