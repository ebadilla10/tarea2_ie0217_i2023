Para ejecutar los archivos de los algoritmos, solo es necesario abril la terminal y ejecutar el comando make, este comando ejecutará el .o o .exe necesario para correr el código y el mismo lo ejecuta.


Como bien se sabe la complejidad de un algoritmo es algo muy importante y esto se mide por la cantidad de movimientos de datos y comparaciones que realiza dicho algoritmo para ordenar los elementos de una array.
Para medir dicha complejidad se usa la notación Big O.
En este trabajo se desarrollaron 4 algoritmos de ordenamiento los cuales son:
BubbleSort, InsertionSort, SelectionSort y QuickSort.

1. Bubble Sort:
Este algoritmo ocupa en el peor escenario n-1 iteraciones para ordenar el total de elementos de un array ya que compara elementos adyacentes y los mueve si están en el orden incorrecto.
Cada iteración que realiza requiere n-1 movimientos y comparaciones por lo que la complejidad es de O(n^2).

2. InsertionSort:
Este algoritmo recorre el array y en cada iteración inserta el siguiente elemento en su posición correcta en el array ya ordenado. Cuando el array se encuentra en el peor de los casos, es decir, en orden inverso TODOS los elementos deben de ser movidos a su posición correcta y esto requiere n-1 movimientos y comparaciones para cada uno por lo que su complejidad es de O(n^2).

3. SelectionSort:
Este algoritmo recorre el array varias veces, en este caso busca el elemento o valor más pequeno y lo mueve a la posición correcta en el array ordenado. Este algoritmo en el peor de los casos también necesita n-1 iteraciones para ordenarlo y en cada iteración se hacen n-1 comparaciones para encontrar el elemento más pequeno y n-i (siendo i el indice de la iteración actual) movimientos para colocarlo en la posición correcta.
Por eso la complejidad del algortimo es O(n^2).

4. QuickSort:
El algoritmo quickSort divide los array en dos sub-arrays, una con elementos más pequeños que el pivote y otra con elementos más grandes. Luego, ordena recursivamente los sub-array y los combina para obtener el array ordenado completo. La complejidad del quickSort depende del pivote que se elija y de cómo se divida el array en sub-arrays. En el mejor de los casos, cuando el pivote divide el array en dos sub-listas de igual tamaño, el algoritmo tiene una complejidad de O(n log n), mientras que en el peor de los casos, cuando el pivote es el elemento más grande o más pequeño de la lista, la complejidad es de O(n^2). Siendo este el más eficiente con respecto a los otros.
