// Tarea 2 Elias Alvarado Vargas B80372

// En este archivo se tiene la implementacion de cada 
// algoritmo de ordenamiento que se presenta en el codigo
// de encabezado headerSort.hpp

#include "headerSort.hpp"

#include <iostream>

using namespace std;

// Segun lo investigado es importante crear la funcion swap
// para poder intercambiar dos elementos que posean un arreglo
// donde sera de ayuda para las funciones BubbleSort, SelectionSort
// y QuickSort

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Ademas para la funcion QuickSort segun lo investigado en la
// implementacion es necesario agregar una funcion denominada partition
// que lo que ayuda es en algoritmo de ordenamiento, donde esta funcion
// toma un arreglo y ademas dos indices que se tienen en el header denominados
// como low y high, que indican el rango de elementos que se deben de considerar 
// poder ordenar


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high-1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

// Implementacion de algoritmo BubbleSort

// En el caso de la implementacion del bubblesort, se implementa el algoritmo,
// el cual recorre el arreglo comparando cada elemento con su siguiente y si
// estan en orden incorrecto, los procede a intercambiar, repite los mismo pasos
// hasta que se tenga el arreglo de forma ordenada y finaliza

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


// Implementacion del algoritmo de ordenamiento SelectionSort

// Para el siguiente bloque de implementacion, el algoritmo de 
// ordenamiento por seleccion, busca el elemento minimo en un arreglo
// y lo intercambia con el primer elemento, seguidamente busca el minimo
// en lo que queda del arreglo, y lo intercambia con el segundo elemento
// y trabaja asi recursivamente hasta que todo el arreglo este ordenado

void selectionSort(int arr[], int n) {
    int minIndex;
    for (int i = 0; i < n-1; i++) {
        minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

// Ahora se realiza la implementacion para el algoritmo
// de ordenamiento InsertionSort

// Entonces, en la siguiente implementacion el algoritmo de 
// ordenamiento funciona por insercion, por lo que recorre el arreglo
// y para cada elemento, lo que hace es insertar en la posicion correcta
// en el sub-arreglo ordenado que ya se ha procesado

void insertionSort(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

// Como ultima implementacion se tiene el QuickSort que se 
// presenta a continuacion

// La cual implementa el algoritmo de ordenamiento rapido, el 
// cual divide el arreglo en dos sub-arreglos alrededor del un pivote,
// y ordena en cada sub-arreglo por decir asi, de forma recursiva 
// bajo el mismo algoritmo

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

// Ahora para comprobar que las implementaciones agregadas y demas este correcto, se procede
// a crear una funcion main, en donde haga un llamado a las 4 funciones de ordenamiento, lo anterior
// creando un array para cada algoritmo y luego observando el resultado de cada algortimo de ordenamiento

int main() {

// Se inicializa arreglo con valores desordenados, luego se determina su tamaño n 
int arr[] = {5, 2, 4, 6, 1, 3, 10, 8, 0};
int n = sizeof(arr)/sizeof(arr[0]);

// Se llama a la funcion bubblesort, donde de realiza el arreglo del array arr y luego
// se imprime el arreglo ordenado

bubbleSort(arr, n);
cout << "Arreglo ordenado con BubbleSort: ";

// El siguiente for, tanto para esta funcion y para las demas funciones, tiene como 
// objetivo recorrer cada indice del arreglo utilizando como contador la variable i, 
// y luego en cada iteracion imprime el valor del elemento en la posicion i

for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
cout << endl;


// Para los siguientes bloque se realiza lo mismo del anterior, se crea un array para
// cada algoritmo para que se pueda observar mejor el resultado entre todos
// e igual se llama el algoritmo de la funcion definida, y con ayuda del pequeño for 
// luego se imprime ordenadamente el array para cada caso

int arr2[] = {18, 25, 87, 11, 87, 110, 5};
selectionSort(arr2, n);
cout << "Arreglo ordenado con SelectionSort: ";
for (int i = 0; i < n; i++) {
    cout << arr2[i] << " ";
}
cout << endl;

int arr3[] = {2, 1, 25, 14, 25, 21, 46, 8};
insertionSort(arr3, n);
cout << "Arreglo ordenado con InsertionSort: ";
for (int i = 0; i < n; i++) {
    cout << arr3[i] << " ";
}
cout << endl;

int arr4[] = {10, 4, 1, 12, 9, 45, 20, 30};
quickSort(arr4, 0, n-1);
cout << "Arreglo ordenado con QuickSort: ";
for (int i = 0; i < n; i++) {
    cout << arr4[i] << " ";
}
cout << endl;

cout << "Fin del programa :)";
return 0;
}