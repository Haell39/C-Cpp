#include <stdio.h>

void selection_sort(int arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int menor_idx = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (arr[j] < arr[menor_idx]) {
                menor_idx = j;
            }
        }
        // Troca o menor elemento encontrado com o primeiro elemento
        int temp = arr[menor_idx];
        arr[menor_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, tamanho);

    printf("Array ordenado: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}