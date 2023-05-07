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
#def HEADER_SORT_HPP


/*!
 * @brief Función de ordenamiento Bubble Sort.
 *
 * Esta función recibe un arreglo y lo devuelve ordenado al comparar elemento
 * por elemento de izquierda a derecha y pone a la derecha el elemento mayor.
 *
 * @param[in] arr[] Arreglo a ordenar.
 * @param[in] n Cantidad de elementos en arr[].
 */
void bubbleSort(int arr[], int n);


/*!
 * @brief Función de ordenamiento Selection Sort. 
 *
 * Esta función recibe un arreglo y lo devuelve ordenado. Busca el elemento más
 * pequeño en el arreglo y lo va poniendo a la izquierda.
 *
 * @param[in] arr[] Arreglo a ordenar.
 * @param[in] n Cantidad de elementos en arr[].
 */
void selectionSort(int arr[], int n);


/*!
 * @brief Función de ordenamiento Insertion Sort 
 *
 * Esta función recibe un arreglo y lo devuelve ordenado. Toma cada elemento de
 * la matriz y lo inserta en su posición correcta en la parte ya ordenada de la
 * matriz.
 *
 * @param[in] arr[] Arreglo a ordenar.
 * @param[in] n Cantidad de elementos en arr[].
 */
void insertionSort(int arr[], int n);


/*!
 * @brief Función de ordenamiento Quick Sort.
 *
 * Esta función recibe un arreglo y lo devuelve ordenado. Utiliza la técnica de
 * divide y vencerás para ordenar un arreglo de elementos. La idea básica 
 * detrás del algoritmo es elegir un elemento pivote del arreglo y particionar
 * el arreglo alrededor de ese elemento. Todos los elementos menores que el 
 * pivote se colocan a la izquierda del pivote, y todos los elementos mayores
 * se colocan a la derecha. Luego, el proceso se repite recursivamente para los
 * sub-arreglos antes y después del pivote hasta que todo el arreglo esté 
 * ordenado.
 *
 * @param[in] arr[] Arreglo a ordenar.
 * @param[in] start 
 * @param[in] end
 */
void quickSort(int arr[], int start, int end);


/*!
 * @brief Función de partición para Quick Sort.
 * 
 * 
 * @param[in] arr[] Arreglo a ordenar.
 * @param[in] start 
 * @param[in] end
 */
int partition(int arr[], int start, int end);


#endif /* HEADER_SORT_HPP */
