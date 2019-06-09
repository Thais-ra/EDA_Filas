#define MAX 10

int Frente, Tras, valor;
int Fila[MAX];

void Cria_Fila(){
    Frente = 0;
    Tras = 0; 
}

int Fila_Enfileirar(int valor){
    if (Fila_Cheia()){
        return 0;
    } else {
        Fila[Tras++] = valor;
        return 1;
    }
}

int Fila_Desenfileirar(){
    if (Fila_Vazia()){
        return 0;
    } else {
        return Fila[Frente++];
    }
}

int Fila_Cheia(){
    return Tras == MAX;
}

int Fila_Vazia(){
    return Frente == Tras;
}

int Fila_Tamanho(){
    return Tras -1;
}

void Fila_Imprimir(){
    for(int i=0;i<MAX;i++){
        printf("%d", Fila[i]);
    }
    printf("\nPrimeiro -> %d\nÚltimo -> %d\n", Fila[Frente], Fila[Tras]);
}


