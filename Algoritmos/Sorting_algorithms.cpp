/**
 * @file Sorting_algorithms.cpp
 * @brief Este archivo contiene la licencia MIT y el archivo contiene la implementación de la programación
 * para las definiciones de las funciones de los algoritmos a implementar en el archivo headerSort.hpp.
 *
 * @details
 * Implementar cada algoritmo de ordenamiento sobre este archivo fuente.
 *
 * @par Licencia:
 * @code{.unparsed}
 * Licencia MIT
 *
 * Derechos de autor (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023
 *
 * La licencia MIT es una licencia de software libre permisiva. Este archivo
 * incluye el texto completo de la licencia, que se aplica a cualquier persona
 * que utilice el software y los archivos de documentación asociados.
 *
 * Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
 * software y los archivos de documentación asociados (el "Software"), para
 * utilizar el Software sin restricciones, incluyendo, sin limitación, los
 * derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
 * sublicenciar y/o vender copias del Software, y para permitir a las personas a
 * quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
 * condiciones:
 *
 * El aviso de copyright anterior y este aviso de permiso se incluirán en todas
 * las copias o partes sustanciales del Software.
 *
 * EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
 * IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
 * IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
 * AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
 * DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
 * OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
 * OTROS ACUERDOS EN EL SOFTWARE.
 * @endcode
 *
 * @author Alex Varela
 *
 * @date 2 de mayo de 2023.
 */

#include "headerSort.hpp"
#include <random> // para usar mt19937 y uniform_int_distribution
#include <ctime>  // para usar time
#include <iostream>

using namespace std;
// -------------------------------------bubbleSort--------------------------

void bubbleSort(int arr[], int n)
{
    int temporal = 0;
    ///  < Variable temporal para almacenar el valor de un elemento durante el intercambio.
    for (int i = 0; i < n - 1; i++) /// < Bucle externo que se ejecuta n - 1 veces.*/
    {
        for (int j = 0; j < n - i - 1; j++)
        /// < Bucle interno que se ejecuta n - i - 1 veces.
        {
            if (arr[j] > arr[j + 1])
            /// < Si el elemento actual es mayor que el siguiente.
            {
                temporal = arr[j];
                /// < Almacenar el valor actual en la variable temporal.
                arr[j] = arr[j + 1];
                /// < Intercambiar el valor actual con el siguiente.
                arr[j + 1] = temporal; /// < Almacenar el valor siguiente en la posición actual.
            }
        }
    }
}
// -------------------------------------selectionSort--------------------------
void selectionSort(int arr[], int n)
{
    int i, j, elemento_menor; /// Declaración de variables: i para el bucle externo, j para el bucle interno,
                              /// elemento_menor para almacenar la posición del elemento más pequeño encontrado

    for (i = 0; i < n - 1; i++) /// Bucle externo que se ejecuta n-1 veces
    {
        elemento_menor = i; /// Inicializar elemento_menor con la posición actual

        /// Bucle interno que busca el elemento menor en el subarray no ordenado
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[elemento_menor]) /// Si encuentra un elemento menor
                elemento_menor = j;           /// Actualizar la posición del elemento menor

        /// Intercambiar el elemento actual con el elemento menor encontrado
        int temporal = arr[elemento_menor];
        arr[elemento_menor] = arr[i];
        arr[i] = temporal;
    }
}

// -------------------------------------insertionSort--------------------------
void insertionSort(int arr[], int n)
{
    int i, j, temporal; /// declarar variables para índices y temporal para guardar un valor mientras se realiza el intercambio

    /// bucle externo que recorre el array de izquierda a derecha
    for (i = 1; i < n; i++)
    {
        temporal = arr[i]; /// se guarda el valor del elemento actual

        j = i - 1; /// se establece el índice del elemento anterior al elemento actual

        /// bucle interno que mueve los elementos mayores al elemento actual hacia la derecha
        while (j >= 0 && arr[j] > temporal)
        {
            arr[j + 1] = arr[j]; /// se mueve el elemento actual una posición a la derecha
            j = j - 1;           /// se disminuye el índice para comparar el siguiente elemento
        }

        arr[j + 1] = temporal; /// se coloca el elemento actual en su posición correcta
    }
}

// -------------------------------------quickSort--------------------------
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high]; /// Escoger pivote
        int i = low - 1;       /// Índice para elementos menores al pivote

        for (int j = low; j <= high - 1; j++) /// Recorrer el array y comparar cada elemento con el pivote
        {
            if (arr[j] < pivot) /// Si el elemento es menor al pivote
            {
                i++;                  /// Incrementar el índice de elementos menores al pivote
                swap(arr[i], arr[j]); /// Intercambiar el elemento actual con el que está en la posición del índice
            }
        }
        swap(arr[i + 1], arr[high]); /// Intercambiar el pivote con el elemento siguiente al índice de elementos menores al pivote

        /// Aplicar quickSort a las dos mitades del array que fue dividido
        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

void generateRandomArray(int arr[], int n)
{
    static mt19937 gen(time(NULL));         /// inicializa el generador con una semilla diferente en la primera llamada
    uniform_int_distribution<> dis(1, 100); /// crea una distribución uniforme de números enteros entre 1 y 100

    for (int i = 0; i < n; i++)
    {
        arr[i] = dis(gen); /// genera un número aleatorio utilizando la distribución y el generador
    }
}

void printOriginalArray(int arr[], int n)
{
    cout << endl;
    cout << "Array original: "; /// impresión del array random sin ordenar
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printSortedArray(int arr[], int n, int index)
{
    // Definir arreglo de cadenas de caracteres con los nombres de los algoritmos de ordenamiento
    string sortAlgorithms[4] = {"Bubble Sort", "Selection Sort", "Insertion Sort", "Quick Sort"};

    // Imprimir mensaje indicando el algoritmo de ordenamiento que se utilizó
    cout << "Array ordenado con el algoritmo " << sortAlgorithms[index % 4] << ": ";

    // Imprimir el arreglo ordenado utilizando el algoritmo seleccionado
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Imprimir un salto de línea al final
    cout << endl;
}

void printProgramHeaders()
{
    cout << endl;
    cout << " ORDENAMIENTO DE ARRAYS ALEATORIOS: Implementación de 4 Algoritmos de Ordenamiento en C++ " << endl;
}
