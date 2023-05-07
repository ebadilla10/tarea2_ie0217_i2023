### Universidad de Costa Rica
#### IE-0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería

Primer semestre del 2023

---
* Estudiante: **Valeria Mora Torres**
* Carné: **B75122**
* Grupo: **2**

# Algoritmos de Ordenamiento

### Bubble Sort

* Complejidad: $O(n^2)$.

* Motivo: este algoritmo compara cada elemento de la lista con el elemento siguiente y los intercambia si están en orden incorrecto. Repite este proceso hasta que toda la lista esté ordenada. El algoritmo tiene que hacer un número cuadrático de comparaciones y operaciones de intercambio para ordenar una lista de tamaño n. En el peor de los casos, incluso si la lista ya está ordenada, el algoritmo sigue haciendo el mismo número de comparaciones **[1]**.


### Selection Sort

* Complejidad: $O(n^2)$.

* Motivo: este algoritmo encuentra el valor mínimo en la lista y lo mueve a la primera posición, luego encuentra el siguiente valor mínimo y lo mueve a la segunda posición, y así sucesivamente hasta que la lista esté ordenada. Por esta razón, l algoritmo tiene que realizar un número cuadrático de comparaciones para ordenar una lista de tamaño n **[1]**. 


### Insertion Sort

* Complejidad: $O(n^2)$.

* Motivo: este algoritmo divide la lista en dos partes: la primera parte es ordenada y la segunda parte es desordenada. De esta forma, toma un elemento de la segunda parte y lo inserta en la primera parte en la posición correcta, y repite este proceso hasta que toda la lista esté ordenada. El algoritmo tiene que hacer un número cuadrático de comparaciones y operaciones de movimiento para ordenar una lista de tamaño n **[1]**. 


### Quick Sort

* Complejidad:  $O(n*log n)$ en promedio, pero en el peor de los casos $O(n^2)$.

* Motivo del caso promedio: en cada iteración, se divide el arreglo en dos subarreglos y se realiza el proceso de partición en cada uno de ellos, de forma que el tiempo de ejecución en cada subarreglo es proporcional al tamaño de ese subarreglo. Al dividir el arreglo en subarreglos de tamaño n/2 en cada iteración, el número de iteraciones necesarias para ordenar el arreglo completo es log n. En cada iteración, se realiza un tiempo proporcional a n para hacer la partición del arreglo **[1]**. En consecuencia, la complejidad promedio del algoritmo es $O(n*log n)$.

* Motivo del peor caso: si la lista ya está ordenada o está casi ordenada, y el pivote elegido en cada iteración es el valor máximo o mínimo del subarreglo a ordenar, la complejidad se degrada a $O(n^2)$.


### Referencias

**[1]** T. H. Cormen, C. E. Leiserson, R. L. Rivest, y C. Stein. "Introduction to Algorithms". Massachusetts: The Massachusetts Institute of Technology, 2009.


# Instrucciones de ejecución

Hay dos formas de ejecutar el programa:
* Ubicado dentro de la carpeta Algoritmos, se debe agregar en una nueva terminal la siguiente línea de comando:

```
g++ -o fuenteSort.exe .\fuenteSort.cpp
```

Seguidamente ejecute el archivo .exe generado, esto agregando en la terminal la siguiente línea de comando: 

```
.\fuenteSort.exe
```

*  También puede compilar y ejecutar por medio del comando:

```
make
```