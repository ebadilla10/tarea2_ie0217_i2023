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

// Tarea 2 Elias Alvarado Vargas B80372

// En este codigo como se solicita en el enunciado, se documento siguiendo las 
// pautas Doxygen, para cada una de las 4 funciones y asi como los argumentos que
// estas reciben, de igual forma la explicacion como tal de cada funcion se presenta
// de forma mas detallada en el archivo fuente main_algoritmo.cpp  

/**

@file header_sort.hpp
@brief Contiene las declaraciones de las funciones de ordenamiento

*/

#ifndef HEADER_SORT_HPP
#define HEADER_SORT_HPP

/**

@brief Ordena un arreglo utilizando el algoritmo Bubble Sort
@param arr Arreglo a ordenar
@param n Tamaño del arreglo

*/
void bubbleSort(int arr[], int n);


/**

@brief Ordena un arreglo utilizando el algoritmo Selection Sort
@param arr Arreglo a ordenar
@param n Tamaño del arreglo

*/

void selectionSort(int arr[], int n);


/**

@brief Ordena un arreglo utilizando el algoritmo Insertion Sort
@param arr Arreglo a ordenar
@param n Tamaño del arreglo

*/

void insertionSort(int arr[], int n);

/**

@brief Ordena un arreglo utilizando el algoritmo Quick Sort
@param arr Arreglo a ordenar
@param low Indice del primer elemento del arreglo
@param high Indice del ultimo elemento del arreglo
*/

void quickSort(int arr[], int low, int high);

#endif  
