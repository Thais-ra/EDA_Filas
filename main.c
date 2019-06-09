#include <stdio.h>
#include <stdlib.h>
#include "fila_vet.h"

int opcao;

void inserir()
{
    int n_elementos, elemento, excesso=0;
    printf("Quantos elementos deseja inserir na fila?\n");
    scanf("%d", &n_elementos);
    for(int i=1;i<=n_elementos;i++){
        printf("Elemento %d: ", i);
        scanf("%d", &elemento);
        if (!Fila_Enfileirar(elemento))
            excesso++;
    }
    if (excesso)
        printf("%d elemento(s) não inseridos, fila cheia!\n", excesso);
}

void remover(){
    printf("Quantos elementos deseja remover da fila? ");
    int quant_remov, i=0, valor;
    scanf("%d", &quant_remov);
    while(i!=quant_remov){
        if(!Fila_Vazia()){
            valor = Fila_Desenfileirar();
            printf("Número %d removido\n", valor);
        } else {
            printf("Não é possivel remover mais elementos, a fila está vazia.\n");
            break;
        }
        i++;
    }

}

void menu(){
    printf("----------------MENU----------------\n");
    printf("\n");
    printf("1 - Inserir elementos na fila\n");
    printf("2 - Remover elementos da fila\n");
    printf("3 - Imprimir fila\n");
    printf("0 - Sair\n");
    printf("\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        inserir();
        menu();
    break;

    case 2:
        remover();
        menu();
    break;

    case 3:
        Fila_Imprimir();
        menu();
    break;

    case 0:
        exit(1);
    break;

    default:
        printf("Essa opção não é valida! Tente novamente: \n");
        return menu();
    }
}

int main(){

    menu();

    return 0;
}
