#include "pila.h"

void initPila(Pila *p) { p->top = 0; }

void push(Pila *p, int v) {
  p->data[p->top] = v;
  p->top++;
}
