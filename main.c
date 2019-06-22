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
        if (!enfileira(elemento))
            excesso++;
    }
    if (excesso)
        printf("%d elemento(s) nao inseridos, fila cheia!\n", excesso);
}

void remover() 
{
    printf("Quantos elementos deseja remover da fila? ");
    int quant_remov, i=0, valor;
    scanf("%d", &quant_remov);
    while(i != quant_remov) 
    {
        if(!fila_vazia()) 
        {
            desenfileira(&valor);
            printf("Numero %d removido\n", valor);
        } else {
            printf("Nao e possivel remover mais elementos, a fila esta vazia.\n");
            break;
        }
        i++;
    }

}

void menu() 
{
    printf("----------------MENU----------------\n");
    printf("\n");
    printf("1 - Inserir elementos na fila\n");
    printf("2 - Remover elementos da fila\n");
    printf("3 - Imprimir fila\n");
    printf("0 - Sair\n");
    printf("\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        inserir();
        
    break;

    case 2:
        remover();
        
    break;

    case 3:
        imprimir_fila();
        
    break;

    case 0:
        exit(1);
    break;

    default:
        printf("Essa opção nao e valida! Tente novamente: \n");
    }
    printf("\n");
    system("pause");
    system("cls || clear");
}

int main(){

    cria_fila();
    while(1 == 1) {
        menu();
    }
    return 0;
}
