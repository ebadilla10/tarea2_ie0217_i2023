Bubble Sort: Este algoritmo compara cada elemento del arreglo con su vecino adyacente y los intercambia si están en orden incorrecto. Luego, se repite el proceso con cada par de elementos adyacentes hasta que no se realizan más intercambios. La complejidad temporal promedio y peor caso de este algoritmo es O(n^2), donde n es el número de elementos en el arreglo. Esto se debe a que el algoritmo debe iterar sobre el arreglo varias veces, y en cada iteración debe comparar y posiblemente intercambiar cada par de elementos adyacentes.
Selection Sort: Este algoritmo busca el elemento más pequeño en el arreglo y lo intercambia con el primer elemento. Luego, busca el siguiente elemento más pequeño en el arreglo restante y lo intercambia con el segundo elemento, y así sucesivamente. La complejidad temporal promedio y peor caso de este algoritmo es O(n^2), donde n es el número de elementos en el arreglo. Esto se debe a que el algoritmo debe buscar el elemento más pequeño en el arreglo en cada iteración, y luego iterar sobre el arreglo restante para encontrar el siguiente elemento más pequeño.
Insertion Sort: Este algoritmo divide el arreglo en dos partes: una parte ordenada y una parte no ordenada. Luego, toma cada elemento de la parte no ordenada y lo inserta en su posición correcta en la parte ordenada. La complejidad temporal promedio y peor caso de este algoritmo es O(n^2), donde n es el número de elementos en el arreglo. Esto se debe a que el algoritmo debe iterar sobre el arreglo varias veces y, en cada iteración, debe comparar y posiblemente mover cada elemento en la parte ordenada para hacer espacio para el elemento actual en la parte no ordenada.
Quick Sort: Este algoritmo utiliza la estrategia "divide y conquista" para ordenar el arreglo. Primero, selecciona un elemento pivote del arreglo y divide el arreglo en dos partes: una parte con elementos menores que el pivote y otra parte con elementos mayores que el pivote. Luego, ordena cada parte recursivamente utilizando el mismo algoritmo. La complejidad temporal promedio de este algoritmo es O(n*log(n)), donde n es el número de elementos en el arreglo. Sin embargo, en el peor caso, cuando el pivote seleccionado siempre es el elemento más grande o más pequeño del arreglo, la complejidad temporal es O(n^2). Esto puede ocurrir si el arreglo está ordenado en orden ascendente o descendente y el pivote se selecciona como el primer o último elemento del arreglo.










Para compilar el programa, posicionarse en la carpeta llamada "Algoritmos" y utilizar el comando "make". El ejecutable resultante se va a llamar Diosito1, proceda a ejecutar con la linea "./Diosito1". Luego de eejcutar borre los ejecutables con el comando "make clean" para mayor orden y buen manejo de la memoria. 
Los archivos de documentación se formaron tanto en html como en latex, en las carpetas que llevan ese mismo nombre. 