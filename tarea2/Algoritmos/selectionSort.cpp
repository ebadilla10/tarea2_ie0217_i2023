#include "headerSort.hpp"

void selectionSort(int arr[], int n) {
    int i, j, mas_pequeno;

    //Va moviendo el índice del array aún sin ordenar
    for (i = 0; i < n-1; i++) {
        // Busca el número más pequeño
        mas_pequeno = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[mas_pequeno])
                mas_pequeno = j;

        //Intercambia el numero más pequeno encontrado con el que está en la primera posición del arreglo y así sigue en el loop con las demás.
        int temp = arr[mas_pequeno];
        arr[mas_pequeno] = arr[i];
        arr[i] = temp;
    }
}

