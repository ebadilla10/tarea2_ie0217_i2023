#include <stdio.h>
#include <iostream>
#include "headerSort.hpp"
using namespace std;

void bubbleSort(int arr[], int n) {
    // Por cada elemento del arreglo, lo recorre 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Cambiar el arr[j] con el arr[j + 1] cuando el valor encontrado es mayor
                // al siguiente
                // asigna el valor a uno temporal para hacer el cambio
                int temporal = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temporal;
            }
        }
    }
}