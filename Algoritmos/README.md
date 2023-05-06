# Algoritmos de ordenamiento

Se presenta un problema en el cual se nos entrega un archivo headerSort.hpp el cual contiene prototipos de funciones de ordenamiento
por lo que se desarrollo en un archivo algoritmos.cpp y se realizo la respectiva investigacion de los algoritmos

## Selection Sort

El algoritmo de clasificación por selección encuentra el elemento más pequeño en la lista desordenada y lo coloca en la primera posición. Luego encuentra el segundo elemento más pequeño en la lista desordenada y lo coloca en segundo lugar, y así sucesivamente hasta que se ordena la lista. La complejidad del orden de selección en el peor de los casos es O (n ^ 2) porque tiene que buscar el valor mínimo en cada iteración, lo que requiere aproximadamente n operaciones, y este proceso debe realizarse n veces para ordenar la lista completa. Por lo tanto, para una lista con n elementos, el algoritmo tardará aprox. n^2 operaciones.

## InsertionSort

El algoritmo de ordenación por inserción recorre la lista elemento por elemento y en cada iteración inserta el elemento actual en la posición correcta en la lista preordenada. Para insertar un elemento, compara cada elemento en la lista previamente ordenada y mueve todos los elementos mayores que el elemento actual a la derecha. Cuando se encuentra la posición correcta, el elemento actual se coloca en esa posición.
La complejidad del ordenamiento por inserción es O(n^2) en el peor de los casos, ya que tiene que atravesar la lista completa en cada iteración y, en el peor de los casos, tiene que mover todos los elementos un lugar hacia adelante en cada iteración. Por lo tanto, para una lista de n elementos, el algoritmo realizará aproximadamente n^2 operaciones.


## Ordenamiento de burbuja

El algoritmo de clasificación de burbujas recorre la lista de elementos varias veces, comparando pares de elementos adyacentes e intercambiándolos si están en el orden incorrecto. En cada iteración, el algoritmo "sopla" el elemento más grande al final de la lista desordenada. La complejidad de la ordenación de burbujas es O(n^2) en el peor de los casos porque cada par de elementos debe compararse e intercambiarse si es necesario. Por lo tanto, para una lista de n elementos, el algoritmo realizará aproximadamente n^2 operaciones.

## QuickSort

Quicksort es un algoritmo de clasificación recursivo, divide y vencerás. La idea básica es seleccionar un elemento de una lista llamada pivote y dividir la lista en dos sublistas, una con un elemento menor que el pivote y otra con un elemento mayor que el pivote. Luego una orden de orden recursiva. En el peor de los casos, la complejidad de la clasificación rápida es o (n^2). Cuando la bisagra elegida es un elemento mínimo o máximo en cada lista de iteraciones, en la mayoría de los casos n log n). Quicksort tiene una complejidad promedio de O (n log n), lo que lo convierte en uno de los algoritmos de clasificación más rápidos y eficientes en la práctica.

## Cómo ejecutar el programa

Para ejecutar el programa, se deben seguir los siguientes pasos:

1. Clonar el repositorio de GitHub.
2. Navegar a la carpeta donde se encuentra el archivo principal del programa.
3. Compilar y ejecutar el programa con el siguiente comando: `mingw32-make`.

## Cómo revisar la documentacion de doxygen

1. ubicar la carpeta llamada documentacionDoxy(proyecto)
2. abrir la carpeta html
3. Ubicar el archivo **index.html** y abrirlo