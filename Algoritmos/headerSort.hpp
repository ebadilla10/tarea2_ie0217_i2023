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

#ifndef HEADER_SORT_HPP
#define HEADER_SORT_HPP
/**
 * @brief Se presenta una función de ordenamiento de tipo bubbleSort el cual se encarga de ordenar un array de numeros enteros de un tamaño n, donde n también es un entero
 * Esto intercambiando los valores comparandolos con los que tienen al lado hasta que iteradamente el ordenamiento quede listo
 * 
 * @param arr El array de enteros a ordenar.
 * @param n El número de elementos en el array.
*/
void bubbleSort(int arr[], int n);
/**
 * @brief Ordena un array de enteros utilizando el algoritmo Selection Sort el cual recorre el array iteradas veces para encontrar los valores minimos e acomodarlos de menor a mayor.
 * 
 * @param arr El array de enteros a ordenar.
 * @param n El número de elementos en el array.
 */
void selectionSort(int arr[], int n);
/**
 * @brief Ordena un array de enteros utilizando el algoritmo Insertion Sort.
 * 
 * Insertion Sort es un algoritmo de ordenamiento que recorre el array y en cada paso inserta el elemento actual en su posición correcta
 * en la porción ordenada del array que está a su izquierda, repitiendo este proceso hasta que todo el array esté ordenado.
 * 
 * @param arr El array de enteros a ordenar.
 * @param n El número de elementos en el array.
 */
void insertionSort(int arr[], int n);
/**
 * @brief Ordena un array de enteros utilizando el algoritmo QuickSort.
 *
 * El algoritmo QuickSort es eficiente y divide el array en dos sub-arrays, los cuales se ordenan de forma recursiva.
 * Se utiliza un elemento pivote para reorganizar los elementos del array,
 * de forma que los elementos menores al pivote estén a la izquierda y los elementos mayores estén a la derecha.
 * 
 * @param arr El array de enteros a ordenar.
 * @param low El índice del primer elemento en el array.
 * @param high El índice del último elemento en el array.
 */
void quickSort(int arr[], int low, int high);

#endif /* HEADER_SORT_HPP */ 
