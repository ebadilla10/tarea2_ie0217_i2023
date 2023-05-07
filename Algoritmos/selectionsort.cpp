#include <stdio.h>
#include <iostream>
#include "headerSort.hpp"
using namespace std;


void selectionSort(int arr[], int n) {
    // Recorre la matriz
    for (int i = 0; i < n - 1; i++) {
        int inicio = i;
        // Verifica si el número está en la posición correcta, viendo si es más pequeño
        // que los que están al lado suyo
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[inicio]) {
                inicio = j;
            }
        }
        // Intercambia arr[i] and arr[inicio]
        int temp = arr[i];
        arr[i] = arr[inicio];
        arr[inicio] = temp;
    }
}
