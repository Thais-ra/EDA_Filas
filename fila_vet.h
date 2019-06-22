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
        *y = fila[u++];
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
    printf(" ");
   for (int i = 0; i < MAX; i++)
   {
      printf("------");
   }
   printf("\n");
    for(int i = 0;i < MAX; i++){
        printf("| %03d ", fila[i]);
    }
    printf(" |\n ");
   for (int i = 0; i < MAX; i++)
   {
      printf("------");
   }
   printf("\n");
   for(int i = 0; i < MAX; i++)
   {
      if (i == p) 
      {
         printf("   P  ");
      } else if (i == u) 
      {
         printf("   U  ");
      } else
      {
         printf("      ");
      }
      
   }
}


