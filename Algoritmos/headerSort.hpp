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

/*!
* @brief Recorre todo el arreglo varias veces, hasta que no encuentra cambios.
*
* Este método se encarga de recorrer la matriz una y otra vez, comparando el valor 
* con los adyacentes, luego los intercambia hasta que no realiza cambios.
*
* @param arr arreglo a ordenar 'array'
* @param n un número 'entero' el cual es el tamaño del array
*/
void bubbleSort(int arr[], int n);

/*!
* @brief Recorre todo el arreglo buscando el más pequeño para moverlo al inicio.
*
* En este método se recorre la matriz para buscar el valor más pequeño,
* este es enviado al incio y se vuelve a recorrer para buscar el siguiente más pequeño.
* Se repite hasta que no realiza cambios.
*
* @param arr arreglo a ordenar 'array'
* @param n un número 'entero'
*/
void selectionSort(int arr[], int n);

/*!
* @brief Recorre todo el arreglo acomodando valores en su posición correcta.
*
* En este método se recorre la matriz para buscar la posición del valor,
* este es enviado a su posición correcta y se vuelve a recorrer para comprobar 
* el siguiente valor.
* Repite hasta que hayan errores en el orden.
*
* @param arr arreglo a ordenar 'array'
* @param n un número 'entero'
*/
void insertionSort(int arr[], int n);

/*!
* @brief Toma un pivote del cual se basa la manera de acomodar.
*
* Con este método toma un pivote. Este sirve para acomodar los valores tanto a la izquierda,
* como a la derecha, para acomodar cada valor según su posición con este.
* Repite recursivamente hasta que quede ordenado.
*
* @param arr arreglo a ordenar 'array'
* @param low un número 'entero' el cual es el primer valor del subarreglo
* @param high un número 'entero' el cual corresponde al último valor del subarreglo
*/
void quickSort(int arr[], int low, int high);

#endif /* HEADER_SORT_HPP */
