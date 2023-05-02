/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

#include <set>

#include<iostream>

#include "headerSort.hpp"

using namespace std;

/**
@brief Ordena un arreglo usando el algoritmo de ordenamiento burbuja.
@param arr Arreglo de enteros a ordenar.
@param n Tamaño del arreglo a ordenar.
@return void
Este algoritmo compara elementos de un arreglo y los intercambia si están en el orden equivocado.
El proceso se repite hasta que ningún intercambio es necesario, lo que indica que el arreglo está ordenado.
Ejemplo de uso:
@code
int arr[] = {5, 2, 1, 8, 4};
int n = 5;
bubbleSort(arr, n);
@endcode
*/

#define SIZE_ARRAY 10
void bubbleSort(int arr[], int n) {
  int temp = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

/**
@brief Ordena un arreglo usando el algoritmo de Selection sort.
@param arr Arreglo de enteros a ordenar.
@param n Tamaño del arreglo a ordenar.
@return void
Este algoritmo compara elementos de un arreglo y guarda el valor del index más pequeño.
Luego compara arr[i] con el valor del índice más pequeño y si cumple la condición hace swap.
Ejemplo de uso:
@code
int arr[] = {5, 2, 1, 8, 4};
int n = 5;
selectionSort(arr, n);
@endcode
*/

void selectionSort(int arr[], int n) {
  int smallest = 0;
  int temp = 0;
  for (int i = 0; i < n - 1; i++) {
    smallest = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[smallest]) {
        smallest = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[smallest];
    arr[smallest] = temp;
  }
}

/**
@brief Ordena un arreglo usando el algoritmo de Insertion sort.
@param arr Arreglo de enteros a ordenar.
@param n Tamaño del arreglo a ordenar.
@return void
Este algoritmo compara elementos de un arreglo de adelante hacia atrás.
Si el valor actual es menor al anterior(var_comp), el valor de comparación
pasa a la posición actual hasta que sale de la condición del while y el valor menor se acomoda
en la posición actual.
Ejemplo de uso:
@code
int arr[] = {5, 2, 1, 8, 4};
int n = 5;
insertionSort(arr, n);
@endcode
*/

void insertionSort(int arr[], int n) {
  int actual = 0;
  int var_comp;
  for (int i = 1; i < n; i++) {
    actual = arr[i];
    var_comp = i - 1;
    while ((var_comp >= 0) && (actual < arr[var_comp])) {
      arr[var_comp + 1] = arr[var_comp];
      var_comp--;
    }
    arr[var_comp + 1] = actual;
  }
}

/**
@brief Ordena un arreglo usando el algoritmo de Quick sort.
@param arr Arreglo de enteros a ordenar.
@param int low Índice más bajo del arreglo.
@param int high Índice más alto del arreglo.
@return void
La idea de este algoritmo es tomar un elemento, llamado pivote, del arreglo
y particionar el arreglo en dos subarreglos, uno con los elementos más pequeños que el pivote
otro con los elementos más grandes. Luego, se aplica recursivamente el mismo proceso a cada subarreglo.
Ejemplo de uso:
@code
int arr[] = {5, 2, 1, 8, 4};
int n = 5;
quickSort(arr, n);
@endcode
*/

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
      if (arr[j] < pivot) {
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

/**

@brief Función principal que crea un arreglo, lo llena con números aleatorios, lo ordena y lo muestra en pantalla

@return 0 si todo sale bien
*/
int main() {
  int array[SIZE_ARRAY] = {}; /// Arreglo a ordenar
  for (int i = 0; i < SIZE_ARRAY; i++) {
    array[i] = rand() % 10000; /// Limita la cantidad de números aleatorios
  }
  cout << " arreglo desordenado : " << endl;
  for (int i = 0; i < SIZE_ARRAY; i++) {
    cout << array[i] << " "; /// Muestra el arreglo desordenado
  }

  bubbleSort(array, SIZE_ARRAY); /// Ordena el arreglo usando bubble sort
  cout << endl;
  cout << " arreglo ordenado con Bubble Sort: " << endl; ///Imprime el arreglo ordenado
  for (int i = 0; i < SIZE_ARRAY; i++) {
    cout << array[i] << " ";
  }

  selectionSort(array, SIZE_ARRAY); /// Ordena el arreglo usando selectionSort
  cout << endl;
  cout << " arreglo ordenado con Selection Sort: " << endl; ///Imprime el arreglo ordenado
  for (int i = 0; i < SIZE_ARRAY; i++) {
    cout << array[i] << " ";
  }

  insertionSort(array, SIZE_ARRAY); /// Ordena el arreglo usando selectionSort
  cout << endl;
  cout << " arreglo ordenado con Insertion Sort: " << endl; ///Imprime el arreglo ordenado
  for (int i = 0; i < SIZE_ARRAY; i++) {
    cout << array[i] << " ";
  }

  quickSort(array, 0, SIZE_ARRAY - 1);
  cout << "\n" << "Arreglo ordenado con Quick sort: ";
  cout << "\n";
  for (int i = 0; i < SIZE_ARRAY; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  return 0;
}