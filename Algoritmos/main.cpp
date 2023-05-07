/**
 * @file main.cpp
 * @brief Este archivo contiene la licencia MIT y el archivo contiene propiamente la }
 * función principal para demostrar la efectiva implementación de los algoritmos implementados
 * en el archivo Sorting_algorithms.cpp.
 *
 * @details
 * Solo se implementa la función principal para cada algoritmo implementado
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
#include <cstring>

int main()
{
    printProgramHeaders();
    // -------------------------------------arrays and size--------------------------
    const int n = 15;
    int arrOrigin[n];
    int arr[n];

    // -------------------------------------bubbleSort--------------------------
    generateRandomArray(arrOrigin, n);
    printOriginalArray(arrOrigin, n);
    memcpy(arr, arrOrigin, sizeof(int) * n);
    bubbleSort(arr, n); // LLamada a algoritmo bubbleSort
    printSortedArray(arr, n, 0);

    // -------------------------------------selectionSort--------------------------
    generateRandomArray(arrOrigin, n);
    printOriginalArray(arrOrigin, n);
    memcpy(arr, arrOrigin, sizeof(int) * n); // copiar el array original al array temporal

    selectionSort(arr, n); // LLamada a algoritmo  selectionSort
    printSortedArray(arr, n, 1);

    // -------------------------------------insertionSort--------------------------
    generateRandomArray(arrOrigin, n);
    printOriginalArray(arrOrigin, n);
    memcpy(arr, arrOrigin, sizeof(int) * n); // copiar el array original al array temporal
    insertionSort(arr, n);
    printSortedArray(arr, n, 2);

    // -------------------------------------quickSort--------------------------
    generateRandomArray(arrOrigin, n);
    printOriginalArray(arrOrigin, n);
    memcpy(arr, arrOrigin, sizeof(int) * n); // copiar el array original al array temporal
    quickSort(arr, 0, n - 1);
    printSortedArray(arr, n, 3);

    return 0;
}