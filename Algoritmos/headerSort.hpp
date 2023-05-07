/**
 * @file headerSort.hpp
 * @brief Este archivo contiene la licencia MIT y  las declaraciones las definiciones de las funciones de los
 * algoritmos a implementar.
 *
 * @details
 * Las modificaciones a este archivo son:
 * 1. Documentar, siguiendo las pautas Doxygen, cada una de las funciones declaradas en el header.
 * 2. Implementar cada algoritmo de ordenamiento en un único archivo fuente.
 * 3. Analice cada algoritmo y determine la complejidad que estos tienen utilizando la notación
 * Big O (O grande).
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
 * @author Rafael Esteban Badilla Alvarado
 *
 * @par Modificaciones:
 * Modificado por Alex Varela el 2 de mayo de 2023.
 */

#ifndef HEADER_SORT_HPP
#define HEADER_SORT_HPP

/**
 * @brief Ordena un arreglo utilizando el algoritmo de burbuja.
 *
 * @param arr El arreglo que se desea ordenar.
 * @param n La cantidad de elementos en el arreglo.
 */
void bubbleSort(int arr[], int n);

/**
 * @brief Ordena un arreglo utilizando el algoritmo de selección.
 *
 * @param arr El arreglo que se desea ordenar.
 * @param n La cantidad de elementos en el arreglo.
 */
void selectionSort(int arr[], int n);

/**
 * @brief Ordena un arreglo utilizando el algoritmo de inserción.
 *
 * @param arr El arreglo que se desea ordenar.
 * @param n La cantidad de elementos en el arreglo.
 */
void insertionSort(int arr[], int n);

/**
 * @brief Ordena un arreglo utilizando el algoritmo de quicksort.
 *
 * @param arr El arreglo que se desea ordenar.
 * @param low El índice inferior del arreglo.
 * @param high El índice superior del arreglo.
 */
void quickSort(int arr[], int low, int high);

/**
 * @brief Genera un arreglo aleatorio de enteros.
 *
 * @param arr El arreglo que se desea generar.
 * @param n La cantidad de elementos que se desea generar.
 */
void generateRandomArray(int arr[], int n);

/**
 * @brief Imprime el arreglo original en la consola.
 *
 * @param arr El arreglo que se desea imprimir.
 * @param n La cantidad de elementos en el arreglo.
 */
void printOriginalArray(int arr[], int n);

/**
 * Imprime un arreglo de enteros ordenado utilizando un algoritmo de ordenamiento especificado por el índice.
 * @param arr Arreglo de enteros a imprimir.
 * @param n Tamaño del arreglo.
 * @param index Índice del algoritmo de ordenamiento a utilizar (0: Bubble Sort, 1: Selection Sort, 2: Insertion Sort, 3: Quick Sort).
 * @return void
 */
void printSortedArray(int arr[], int n, int index);

/**
 * @brief Imprime los encabezados del programa en la consola.
 */
void printProgramHeaders();

#endif /* HEADER_SORT_HPP */
