#include <stdlib.h>
#include <stdio.h>

static int *fila;
static int N, p, u;

void imprimir_fila();

void cria_fila();

int enfileira(int y);

int desenfileira(int *y);

int tam_fila();

int fila_cheia();

int fila_vazia();

void libera_fila();

int redimensiona();
