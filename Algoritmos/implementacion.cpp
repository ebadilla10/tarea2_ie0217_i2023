

#include <iostream>

using namespace std;

// Función de ordenamiento Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) { // iteración 1
        for (int j = 0; j < n-i-1; j++) { // iteración 2
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Función de ordenamiento Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) { // iteración 1
        int min = i;
        for (int j = i+1; j < n; j++) { // iteración 2
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

// Función de ordenamiento Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) { // iteración 
        int a = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > a) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = a;
    }
}

// Función de ordenamiento Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int b = arr[high];
        int i = low - 1;
        for (int j = low; j <= high-1; j++) { // iteración
            if (arr[j] < b) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;

        int d = i+1;
        quickSort(arr, low, d-1);
        quickSort(arr, d+1, high);
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; //arreglo original
    int n = 7; //tamaño del arreglo

    cout << "Arreglo original:" << endl;  //imprime el arreglo no ordenado
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n); //implementación del algoritmo Bubble Sort
    cout << "Arreglo ordenado con Bubble Sort:" << endl; //imprime el arreglo ordenado
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    selectionSort(arr2, n); //implementación del algoritmo Selection Sort
    cout << "Arreglo ordenado con Selection Sort:" << endl; //imprime el arreglo ordenado
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int arr3[] = {64, 34, 25, 12, 22, 11, 90};

    insertionSort(arr3, n); //implementación del algoritmo Insertion Sort
    cout << "Arreglo ordenado con Insertion Sort:" << endl; //imprime el arreglo ordenado
    for (int i = 0; i < n; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    int arr4[] = {64, 34, 25, 12, 22, 11, 90};
    quickSort(arr4, 0, n-1); //implementación del algoritmo Quick Sort
    cout << "Arreglo ordenado con Quick Sort:" << endl; //imprime el arreglo ordenado
    for (int i = 0; i < n; i++) {
        cout << arr4[i] << " ";
    }
    cout << endl;

return 0;

}


