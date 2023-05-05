Complejidad de los Algoritmos de Ordenamiento usando notacion Big O.

1. BubbleSort
Para el algoritmo BubbleSort se caracteriza por ser un algoritmo de ordenamiento sencillo y basico, donde se destaca por realizar la iteracion a traves de un arreglo varias veces, esto comparando los elementos adyacentes y realizando swaps hasta que el arreglo este ordenado. En relacion a la complejidad de tiempo de BubbleSort es  O(n^2), la razon es porque realiza dos bucles anidados de tamaño n, lo que resulta que n*n operaciones de comparacion y swap en el peor de los casos. Por lo tanto, se concluye que la complejidad de espacio de BubbleSort es O(1), ya que solo utiliza variables de tamaño constante independientemente del tamaño del arreglo.

2. SelectionSort 
Este tipo de algoritmo de ordenamiento, funciona buscando el minimo elemento en un sub arreglo, y luego colocandolo en su posicion correcta. Se repite este proceso hasta que todo el arreglo este ordenado. El tipo de complejidad que presenta este tipo de arreglo es de O(n^2), similar al arreglo anterior y de igual forma la complejidad de espacio de SelectionSort es O(1).

3. Insertion Sort
En este caso es un algorito de ordenamiento que tiene como funcionalidad de recorrer un arreglo, tomando cada elemento y colocandolo en su posicion correcta en un sub arreglo ordenado y contiene la misma complejidad cuando se utilizan la notacion Big O que los dos algoritmos anteriores.

4. QuickSort 
Es tipo de ordenamiento avanzado, funcionada dividiendo el arreglo en dos sub arreglos, uno con elementos mas pequeños que un pivote y otro con elementos mayores que el pivote, y ordenando de forma recursiva cada sub arreglo. La complejidad de tiempo de QuickSort es O(n*log(n)) en el mejor y promedio de los casos y O(n^2) para el peor de los casos. La complejidad de espacio de QuickSort es  O(log(n)) en el peor de los casos, producido por la recursividad del algoritmo.

Instruccion para ejecucion del programa por medio del Makefile

make algoritmo