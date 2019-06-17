#define MAX 10

int u, p, valor;
int fila[MAX];

void cria_fila(){
    u = 0;
    p = 0; 
}

int enfileira(int valor){
    if (fila_Cheia()){
        return 0;
    } else {
        fila[p++] = valor;
        return 1;
    }
}

int desenfileira(){
    if (fila_Vazia()){
        return 0;
    } else {
        return fila[u++];
    }
}

int fila_cheia(){
    return p == MAX;
}

int fila_vazia(){
    return u == p;
}

int tam_fila(){
    return p -1;
}

void imprimir_fila(){
    for(int i=0;i<MAX;i++){
        printf("%d", fila[i]);
    }
    printf("\nPrimeiro -> %d\nÚltimo -> %d\n", fila[u], fila[p]);
}


