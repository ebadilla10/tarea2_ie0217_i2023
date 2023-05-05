/*
Universidad de Costa Rica
Estructuras Abstractas de Datos y Algoritmos para Ingenieria
IE-0207
Tarea 2 Practica de Clases
Alexa Carmona Buzo B91643
*/

#include <iostream>
#include "headerSort.hpp"

using namespace std;

//---------------- BUBBLE SORT --------------------

void bubbleSort(int arr[], int n){
    // iterar multiples veces sobre el array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            /* si el siguiente elemento es mayor al actual,
               intercambiar posiciones
            */
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        /* Iterar sobre el array y encontrar la posicion
           del elemento minimo del array
        */
        int minElemIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minElemIdx]) {
                minElemIdx = j;
            }
        }

        /* intercambiar el elemento minimo con el inicio del
           arreglo desordenado
        */
        int temp = arr[minElemIdx];
        arr[minElemIdx] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        // elemento que va a ser insertado
        int insrt = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > insrt) {
            arr[j+1] = arr[j];
            j--;
        }
        // insertar elemento
        arr[j+1] = insrt;
    }
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        //seleccionar pivote
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }

        int sndTemp = arr[i+1];
                arr[i+1] = arr[high];
                arr[high] = sndTemp;

        // indice del pivote
        int pivotIdx = i+1;

        // Aplicar el algoritmo recursivamente
        quickSort(arr, low, pivotIdx - 1);
        quickSort(arr, pivotIdx + 1, high);
    }
}
