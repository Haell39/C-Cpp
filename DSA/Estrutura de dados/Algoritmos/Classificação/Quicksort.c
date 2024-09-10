#include <stdio.h>

int particionar(int arr[], int baixo, int alto) {
    int pivo = arr[alto]; // Pivô
    int i = (baixo - 1); // Índice do menor elemento

    for (int j = baixo; j < alto; j++) {
        // Se o elemento atual for menor ou igual ao pivô
        if (arr[j] <= pivo) {
            i++; // Incrementa o índice do menor elemento
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Troca o pivô com o elemento no índice i + 1
    int temp = arr[i + 1];
    arr[i + 1] = arr[alto];
    arr[alto] = temp;
    return (i + 1);
}

void quicksort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(arr, baixo, alto);
        quicksort(arr, baixo, pi - 1); // Ordena os elementos antes da partição
        quicksort(arr, pi + 1, alto);   // Ordena os elementos depois da partição
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, tamanho - 1);

    printf("Array ordenado: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}