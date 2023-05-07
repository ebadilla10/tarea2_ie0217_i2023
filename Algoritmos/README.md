# Algoritmos de ordenamiento



## Bubble Sort
El algoritmo Bubble Sort itera repetidas veces sobre el arreglo y compara los valores adyacentes; en caso de que el de la izquierda sea mayor que el de la derecha, los intercambia. En términos de complejidad, el bubble sort es de O(n^2) donde n es el número de elementos en la lista. Esto se debe a que se necesitan bucles anidados para comparar todos los elementos adyacentes y en el peor de los casos se empieza por n-1 intercambios de datos. 

## Selection Sort

El algoritmo Selection Sort encuentra repeditas veces el mínimo valor en la sección no ordenada del arreglo y lo coloca en el inicio de la parte ordenada del arreglo; es decir, se encuentra el valor mínimo y se intercambia con el primer elemento de la parte no ordenada el arreglo y se mueve el limite entre la parte ordenada y la no ordenada del arreglo. La complejidad de este algoritmo es de O(n^2) donde n es el número de elementos en la lista. sto se debe a que se necesitan bucles anidados para comparar y encontrar el mínimo y en el peor de los casos se empieza por n-1 comparaciones y n-1 intercambios en la primera iteración. 

## Insertion Sort

En el algoritmo Insertion Sort se divide el arreglo en una parte ordenada y una parte desordenada, luego se toma el primer elemento del lado desordenado y se compara con los elementos del lado ordenado para insertar el valor en la posición correcta. En términos de complejidad, el bubble sort es de O(n^2) donde n es el número de elementos en la lista. Esto se debe a que se necesitan bucles anidados para comparar e intercambiar los valores y en el peor de los casos se empieza por n-1 comparaciones y n-1 intercambios hasta que se realice una sola comparación y y no intercambios. 

## Quick Sort

En el caso del Quick Sort, el peor caso tiene una complejidad del O(n^2) cuando el pivote seleccionado divide el arreglo en sub arreglos de tamaño diferente; sin embargo, en el caso común, la complejidad es de O(n log(n)) lo que convierte al Quick Sort más rápido que los otros algoritmos. Cuando se divide el arreglo en sub arreglos de igual tamaño, se tiene un proceso más eficiente con la complejidad O(n log(n)). 

## Ejecución del programa

Para compilar y ejecutar el programa, utilice el siguiente comando desde el directorio <code>Algoritmos</code>:

```
make
```

