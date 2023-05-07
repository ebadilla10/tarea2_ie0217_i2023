#include "headerSort.hpp"
#include <iostream>

void insertionSort(int arr[], int n) {
    int i, j, temporal;
    for (i = 1; i < n; i++) {
        temporal = arr[i];
        j = i - 1;

        // Mueve elementos de arr[0..i-1], que son mayores que temporal a una posición por delante de su posición actual
        while (j >= 0 && arr[j] > temporal) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temporal;
    }
}

