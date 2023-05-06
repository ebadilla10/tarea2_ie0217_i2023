/**
@file headerSort.cpp
@brief Implementación de los algoritmos de ordenamiento
**/

#include "headerSort.hpp"


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}


void insertionSort(int arr[], int n) {
    int guia, j;
    for (int i = 1; i < n; i++) {
        guia = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > guia) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = guia;
    }
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int aux = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < aux) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
 
        int pi = i + 1;
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


