#include <stdlib.h>

struct lista
{
   int data;
   struct lista *prox;
};

typedef struct lista lista;

lista *u;

lista *p;

int cria_fila()
{
   u = NULL;
   p = NULL;
}

int enfileira(int y)
{
   
}