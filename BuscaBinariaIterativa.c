#include <stdio.h>

int Busca(int lista[], int tamanho, int elemento) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (lista[meio] == elemento) {
            return 1;  
        } else if (lista[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return 0;  
}

int main() {
    int elemento;
    int lista[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    printf("Digite um número: ");
    scanf("%d", &elemento);

    if (Busca(lista, tamanho, elemento)) {
        printf("%d está presente na lista.\n", elemento);
    } else {
        printf("%d não está presente na lista.\n", elemento);
    }

    return 0;
}
