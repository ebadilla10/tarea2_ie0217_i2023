#include <stdio.h>
#include <iostream>
#include "headerSort.hpp"
using namespace std;


void insertionSort(int arr[], int n) {
    // Recorre el array
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Mueve el elementos a su posición correcta de ser necesario
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}