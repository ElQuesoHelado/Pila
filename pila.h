#ifndef PILA_H
#define PILA_H

#define SIZE 100

typedef struct {
  int data[100];
  int top;
} Pila;

void initPila(Pila *p);
void push(Pila *p, int v);
void pop(Pila *p);
int top(Pila *p);
int size(Pila *p);

#endif
