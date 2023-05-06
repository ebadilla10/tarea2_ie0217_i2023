# Compilacion del programa

### Para ejecutar el programa escriba en la terminal las instrucciones:

##### make algoritmos


# Análisis de cada algoritmo mediante la notación Big O.

#### La Notación Big-O es una forma de medir el tiempo lo bien que escala un programa o un algoritmo y el tiempo que tardará en ejecutar.

#### Se procede a continuación a analizar cada uno de los algoritmos de ordenamiento implementados y así su eficiencia.

##### Bubble Sort utiliza la notación O(n^2) en el peor de los casos, debido a que el algoritmo debe realizar dos bucles anidados para recorrer todo el arreglo y comparar los elementos adyacentes, y si el arreglo ya está ordenado, el algoritmo seguirá haciendo estas comparaciones innecesariamente.

##### Selection Sort utiliza de igual manera la notación O(n^2) en el peor de los casos, ya que también utiliza dos bucles anidados para recorrer todo el arreglo y encontrar el elemento mínimo en cada iteración. A pesar de que el algoritmo hace menos comparaciones que Bubble Sort, el número de intercambios es el mismo en ambos casos.

##### Insertion Sort utiliza de igual manera la notación O(n^2) en el peor de los casos, ya que también utiliza dos bucles anidados, pero este algoritmo es más eficiente que Bubble Sort y Selection Sort para arreglos pequeños o para arreglos parcialmente ordenados, ya que el número de intercambios es menor.

##### Quick Sort utiliza la notación O(nlog n) en el peor de los casos, aunque esto depende de la elección del pivote. En promedio, el algoritmo toma O(nlog n) operaciones para ordenar un arreglo de n elementos. Sin embargo, en el peor caso, puede tomar O(n^2) operaciones si el pivote elegido siempre es el elemento más pequeño o más grande del arreglo. Se utiliza el método de División y Venccrás para dividir el arreglo en dos subarreglos, ordenar cada subarreglo recursivamente y luego unirlos para obtener el arreglo ordenado final. Este algoritmo es uno de los más eficientes para ordenar grandes conjuntos de datos.