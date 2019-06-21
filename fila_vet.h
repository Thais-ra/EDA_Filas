#include <stdio.h>

#define MAX 10

int u, p, valor;
int fila[MAX];

void cria_fila(){
    u = 0;
    p = 0; 
}

int fila_vazia(){
    return u == p;
}

int enfileira(int valor){
    if (fila_cheia()){
        return 0;
    } else {
        fila[p++] = valor;
        return 1;
    }
}

int desenfileira(int *y){
    if (fila_vazia()){
        return 0;
    } else {
        *y = fila[u++]
        return fila[u++];
    }
}

int fila_cheia(){
    return p == MAX;
}

int tam_fila(){
    return p -1;
}

void imprimir_fila(){
    for(int i=0;i<MAX;i++){
        printf("%d ", fila[i]);
    }
    printf("\nPrimeiro -> %d\nÚltimo -> %d\n", fila[u], fila[p]);
}


