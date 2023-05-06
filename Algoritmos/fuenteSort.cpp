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

#include <iostream>
#include <time.h>
#include "headerSort.hpp"

using namespace std;

#define SIZE_ARRAY 15

void bubbleSort(int arr[], int n){
  int temp = 0;

  /* Cada iteración del primer bucle for corresponde a una pasada completa del algoritmo,
   el elemento más grande flota hacia la posición correcta en la parte derecha del arreglo.*/
  for(int i = 0; i < n - 1; i++){
    /* En cada iteración del segundo bucle for, se comparan dos elementos adyacentes 
    del arreglo y se intercambian si están en orden incorrecto.*/
    for(int j = 0; j < n - i - 1; j++){
      if(arr[j] > arr[j + 1]){
        temp   = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void selectionSort(int arr[], int n){
  int smallest_index = 0;
  int temp = 0;
  /* Ciclo que recorre el arreglo desde el primer elemento hasta el penúltimo elemento*/
  for(int i = 0; i < n - 1; i++){
    smallest_index = i;

    /*En cada iteración, se compara el elemento actual con el smallest_index,
    Si el elemento actual es más pequeño que el elemento smallest_index, se actualiza 
    el índice del elemento más pequeño */
    for(int j = i + 1; j < n; j++){
      if(arr[j] < arr[smallest_index]){
        smallest_index = j;
      }
    }
    /* Se realiza el intercambio de la posicion del arr[smallest_index] a la posicion actual de arr[i]*/
    temp   = arr[i];
    arr[i] = arr[smallest_index];
    arr[smallest_index] = temp;
  }
}

void insertionSort(int arr[], int n){
  int actual;
  int comp_index;
  for(int i = 1; i < n; i++){
    actual = arr[i];
    comp_index = i - 1;

    /* Mientras ambas condiciones sean verdaderas, el elemento en la posición "comp_index" se mueve a la derecha, 
    abriendo espacio para el elemento "actual" que se está insertando. */
    while((comp_index >= 0) && (actual < arr[comp_index])){
      arr[comp_index+1] = arr[comp_index];
      comp_index--;
    }

    /*El elemento "actual" se inserta en su lugar adecuado*/
    arr[comp_index+1] = actual;
  }
}

void quickSort(int arr[], int low, int high){
    int temp = 0;

    if (low < high){
        int pivote = arr[high]; 
        int prim_index = low - 1; 

        /*Ciclo que recorre los elementos desde el inicio hasta la posición mayor, si el elemento es menor o 
        igual al pivote intercambia los elementos en las posiciones prim_index e i */
        for (int i = low; i <= high - 1; i++){
            if (arr[i] <= pivote){
                prim_index++;
                temp = arr[prim_index];
                arr[prim_index] = arr[i];
                arr[i] = temp;
            }
        }
        /* Intercambia el pivote con el primer elemento mayor que el pivote */
        temp = arr[prim_index + 1];
        arr[prim_index + 1] = arr[high];
        arr[high] = temp;
        int partitionIndex = prim_index + 1;

        /* De forma recursiva, se ordena el subarreglo izquierdo */
        quickSort(arr, low, partitionIndex - 1);
        /* De forma recursiva, se ordena el subarreglo derecho */
        quickSort(arr, partitionIndex + 1, high);
    }
}


int main() {
  int arreglo[SIZE_ARRAY] = {};
  srand(time(NULL));
  /* Se genera el arreglo inicial*/
  for(int i = 0; i < SIZE_ARRAY; i++){ arreglo[i] = rand() % 10000; }
  cout << "Arreglo original: " << endl;
  for(int i = 0; i < SIZE_ARRAY; i++){ cout << arreglo[i] << " "; }
  cout << endl;
  
  /* Se ordena el arreglo por medio de la función bubbleSort */
  bubbleSort(arreglo, SIZE_ARRAY);
  cout << "Arreglo utilizando algoritmo de bubbleSort: "  << endl;
  for(int i = 0; i < SIZE_ARRAY; i++){ cout << arreglo[i] << " "; }
  cout << endl;

  /* Se ordena el arreglo por medio de la función selectionSort */
  selectionSort(arreglo, SIZE_ARRAY);
  cout << "Arreglo utilizando algoritmo de selectionSort: "  << endl;
  for(int i = 0; i < SIZE_ARRAY; i++){ cout << arreglo[i] << " "; }
  cout << endl;
  
  /* Se ordena el arreglo por medio de la función insertionSort */
  insertionSort(arreglo, SIZE_ARRAY);
  cout << "Arreglo utilizando algoritmo de insertionSort: "  << endl;
  for(int i = 0; i < SIZE_ARRAY; i++){ cout << arreglo[i] << " "; }
  cout << endl;
  
  /* Se ordena el arreglo por medio de la función quickSort */
  quickSort(arreglo, 0, SIZE_ARRAY-1);
  cout << "Arreglo utilizando algoritmo de quickSort: "  << endl;
  for(int i = 0; i < SIZE_ARRAY; i++){ cout << arreglo[i] << " "; }

  return 0;
}
