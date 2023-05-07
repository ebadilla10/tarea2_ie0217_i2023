#include <stdio.h>
#include <iostream>
#include "headerSort.hpp"
using namespace std;


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];  // Elegir el último elemento como pivote
        int i = low - 1; 
        // Selecciona el pivote como el último valor del subarreglo, el high       
        // Selecciona el primer valor del subarreglo, el low

        for (int j = low; j <= high - 1; j++) {
            // Si el elemento actual es menor o igual que el pivote, intercambiarlo con el elemento más pequeño
            if (arr[j] <= pivot) {
                // Verifica si el valor es mayor o igual que el pivote
                // Intercambia arr[i] y arr[j]
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Intercambia el valor siguiente, arr[i + 1] y arr[high]
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        // Recorre recursivamente los subarreglos
        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}