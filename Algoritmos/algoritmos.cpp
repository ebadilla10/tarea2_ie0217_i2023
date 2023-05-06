#include <iostream>
#include "headerSort.hpp"

using namespace std;

void bubbleSort(int arr[], int n){
    int temp = 0; 
    /**
     * @brief Recorre el arreglo para ordenarlo
     */
    for(int i = 0; i < n - 1; i++){
        /**
         * @brief Compara elementos adyacentes y los intercambia si están en el orden incorrecto
         */
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    /**
     * @brief Recorre todo el arreglo y encuentra el elemento mínimo en el arreglo sin ordenar
     */
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            /**
             * @brief Compara el elemento actual con el mínimo y actualiza el índice del mínimo si es necesario
             */
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        /**
         * @brief Intercambia el elemento mínimo con el primer elemento sin ordenar
         */
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int n) {
    int i, j, actual;
    for (i = 1; i < n; i++) {
        actual = arr[i];
        j = i - 1;

        /**
         * @brief Mueve los elementos mayores que key hacia adelante para insertar key en la posición correcta
         */
        while (j >= 0 && arr[j] > actual) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = actual;
    }
}

/**
 * @brief funcion quickSort dividida en varias funciones para simplificar la codificacion y futuras modificaciones
*/

int partition(int arr[], int start, int end)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}

	// dandole a los elementos pivote su posicion correcta
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	// Ordenando las partes izquierda y derecha del elemento pivote
	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

	// caso base
	if (start >= end)
		return;

	// particiones del array
	int p = partition(arr, start, end);

	// ordenando la parte izquierda
	quickSort(arr, start, p - 1);

	// ordenando la parte derecha
	quickSort(arr, p + 1, end);
}

int main(){

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Aplicando Bubble Sort
    bubbleSort(arr, n);

    // Imprimiendo el arreglo ordenado
    cout << "Arreglo ordenado con Bubble Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(arr2) / sizeof(arr2[0]);

    // Aplicando Selection Sort
    selectionSort(arr2, n);

    // Imprimiendo el arreglo ordenado
    cout << "Arreglo ordenado con Selection Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << endl;

    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(arr3) / sizeof(arr3[0]);

    // Aplicando Insertion Sort
    insertionSort(arr3, n);

    // Imprimiendo el arreglo ordenado
    cout << "Arreglo ordenado con Insertion Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr3[i] << " ";
    cout << endl;

    int arr4[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(arr4) / sizeof(arr4[0]);

    // Aplicando Quick Sort
    quickSort(arr4, 0, n - 1);

    // Imprimiendo el arreglo ordenado
    cout << "Arreglo ordenado con Quick Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr4[i] << " ";
    cout << endl;


    return 0;
}


