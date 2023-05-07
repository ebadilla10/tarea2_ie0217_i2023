#include <stdio.h>
#include <iostream>
#include "headerSort.hpp"
using namespace std;

int main() {
    //El Main, defino un array x
    int arr[] = { 5, 15, 14, 11, 111, 52, 32 };
    int arr2[] = { 5, 15, 14, 11, 111, 52, 32 };
    int arr3[] = { 5, 15, 14, 11, 111, 52, 32 };
    int arr4[] = { 5, 15, 14, 11, 111, 52, 32 };
    cout << "\n Sin ordenar: \n" ;
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    bubbleSort(arr, n);
    cout << "\n Ordenando con bubbleSort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n Sin ordenar: \n" ;
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " "; 
    }
    selectionSort(arr2, n);
    cout << "\n Ordenando con selectionSort: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << "\n Sin ordenar: \n" ;
    for (int i = 0; i < n; i++) {
        cout << arr3[i] << " "; 
    }
    insertionSort(arr3, n);
    cout << "\n Ordenando con insertionSort: ";
    for (int i = 0; i < n; i++) {
        cout << arr3[i] << " ";
    }
    cout << "\n Sin ordenar: \n" ;
    for (int i = 0; i < n; i++) {
        cout << arr4[i] << " "; 
    }
    quickSort(arr4, 0, n - 1);
    cout << "\n Acomodando con quickSort: ";
    for (int i = 0; i < n; i++) {
        cout << arr4[i] << " ";
}
}