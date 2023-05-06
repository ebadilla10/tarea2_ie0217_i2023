#Algoritmos de ordenamiento

##BubbleSort 

En el caso de "Bubble Sort" se debe de analizar el peor caso cuando se tienen n entradas. Este caso sería cuando el arreglo tiene los valores mayores de primero y los menores de último, comp por ejemplo: [10,8,7,4,3,1]. en este caso el número de entradas n seria de 6 y el número de comparaciones que tiene que hacer para 10 sería de "n-1". Si se suman todas las comparaciones que se tienen que hacer se llegaría a la fórmula: "(n/2)*(2+n-1)", la cual se simplifica y llega a "(n^2-n)/2". Por lo que se puede decir que la complejidad de este algoritmo es de "O(n^2)".
Para analizar la complejidad del algoritmo "Bubblesort" con la notación O grande, debemos contar el número de operaciones que realiza el algoritmo en el peor caso. En este ejemplo, el peor caso ocurre cuando el arreglo está en orden inverso al deseado, es decir: [3,2,1].
En este caso, la primera iteración del algoritmo comparará los elementos 3 y 2, y los intercambiará. Luego comparará los elementos 3 y 1, y los intercambiará. El arreglo quedará así: [2,1,3].
En la segunda iteración del algoritmo, se comparan los elementos 2 y 1, y como 2 es mayor que 1, se intercambian de posición. Luego se comparan los elementos 2 y 3, y como están en el orden correcto, no se hace ningún intercambio. El arreglo queda así: [1,2,3].
En total, el algoritmo "Bubblesort" realizó 6 comparaciones y 3 intercambios para ordenar el arreglo de 3 números en el peor caso. Por lo tanto, podemos decir que la complejidad del algoritmo "Bubblesort" en el peor caso para un arreglo de n elementos es O(n^2).


##Selection Sort

El peor de los casos de las comparaciones para este algoritmo de ordenamiento es (n-1)+(n-2)+...+1 ya que el algoritmo tiene que comparar el número más pequeño con todos número del arreglo, en el peor de los casos habría que comparar siempre con todos los números en todos las rondas. Por eso se puede decir que la fórmula en el caso más extremo es "(n/2)*(n-1)". Al simplificar esta fórmula, se llega a la siguiente expresión: "(n^2-n)/2". Eso hace que el algoritmo de ordenamiento "Selection-Sort" tenga la complejidad de "O(n^2)". 
Para analizar la complejidad del algoritmo "Selection Sort" con la notación O grande, debemos contar el número de operaciones que realiza el algoritmo en el peor caso. En este ejemplo, el peor caso ocurre cuando el arreglo está en orden inverso al deseado, es decir: [3,2,1].
En este caso, en la primera iteración del algoritmo se busca el mínimo elemento del arreglo, que es 1, y se intercambia con el primer elemento del arreglo, quedando así: [1,2,3].
En la segunda iteración del algoritmo, se busca el mínimo elemento del sub-arreglo que comienza en la segunda posición, que es 2, y se intercambia con el segundo elemento del arreglo, quedando así: [1,2,3]. El arreglo ya está ordenado y el algoritmo termina.
En total, el algoritmo "Selection Sort" realizó 3 comparaciones y 2 intercambios para ordenar el arreglo de 3 números en el peor caso. Por lo tanto, podemos decir que la complejidad del algoritmo "Selection Sort" en el peor caso para un arreglo de n elementos es O(n^2).



##Insertion Sort

En el peor de los casos, la complejidad de este algoritmo es de O(n^2). Se puede llegar a esto por medio del siguiente análisis: en este caso el peor escenario es cuando se tiene que tener las siguientes comparaciones: "1+2+3+...+(n-1)". Con esto se llega a la siguiente fórmula: "(n/2)*(2+n-1)". Si se despeja la fórmula anterior se llega a la siguiente expresión: "(n^2-n)/2". Por eso es que la complejidad de este algoritmo es de "O(n^2)". 
Para analizar la complejidad del algoritmo "Insertion Sort" con la notación O grande, debemos contar el número de operaciones que realiza el algoritmo en el peor caso. En este ejemplo, el peor caso ocurre cuando el arreglo está en orden inverso al deseado, es decir: [3,2,1].
En este caso, en la primera iteración del algoritmo, el segundo elemento del arreglo (2) se compara con el primer elemento y como es menor, se intercambian las posiciones, quedando así: [2,3,1].
En la segunda iteración del algoritmo, el tercer elemento del arreglo (1) se compara con el segundo elemento y como es menor, se intercambian las posiciones. Luego se compara el elemento 1 con el primer elemento y como es menor, se intercambian las posiciones, quedando así: [1,2,3]. El arreglo ya está ordenado y el algoritmo termina.
En total, el algoritmo "Insertion Sort" realizó 3 comparaciones y 3 intercambios para ordenar el arreglo de 3 números en el peor caso. Por lo tanto, podemos decir que la complejidad del algoritmo "Insertion Sort" en el peor caso para un arreglo de n elementos es O(n^2).



##Quick Sort

En el peor de los casos, si se elige un pivote alto o uno muy bajo, el siguiente subarreglo tendría el  tamaño de "n-1" y el otro tendría el tamaño de cero. Por eso es que en el peor de los casos, se tendría una cantidad comparaciones de la siguiente forma: "(n-1)+(n-2)+...+1". Por esos eso es que la serie aritmética se puede escribir de la siguiente manera: "(n/2)*(n-1)", lo que se simplifica a: "(n^2-n)/2". Por eso es que en el peor de los casos la complejidad es de "O(n^2)". Como "fun fact" la complejidad en el mejor de los casos (cuando se elige el mejor pivote), es de  "O(n * log n)", ya que se elige la mejor de las opciones para partir el subarreglo.
Para analizar la complejidad del algoritmo "Quick Sort" con la notación O grande, debemos contar el número de operaciones que realiza el algoritmo en el peor caso. En este ejemplo, el peor caso ocurre cuando el pivote escogido siempre es el menor o el mayor elemento del sub-arreglo, lo que causa que uno de los sub-arreglos tenga n-1 elementos y el otro sub-arreglo tenga 0 elementos.
Para el arreglo [1,2,3], si se escoge el primer elemento (1) como pivote, se tiene que:
1. El primer sub-arreglo [2, 3] tiene 2 elementos y se escoge como pivote el primer elemento (1).
2. El segundo sub-arreglo [] no tiene elementos.
Luego, el algoritmo se llama recursivamente con el primer sub-arreglo [2,3], que ya está ordenado.
Por lo tanto, en el peor caso, el algoritmo "Quick Sort" realizó 2 llamadas recursivas y no realizó operaciones adicionales para ordenar el arreglo de 3 números. Por lo tanto, podemos decir que la complejidad del algoritmo "Quick Sort" en el peor caso para un arreglo de n elementos es "O(n^2)", pero en el mejor caso, donde el pivote siempre divide el arreglo en dos sub-arreglos de igual tamaño, la complejidad es "O(n log n)".



##Implementacion del archivo implementacion.cpp 

Se pone el siguiente comando: "g++ .\implementacion.cpp -o .\implementacion.exe", se compila y despues se agrega el siguiente comando en la terminal ".\implementacion.exe". todo esto lo hice en la terminal de VSCode. También se puede poner el botón de "Compile and Run". En este caso se tiene que localizar en el folder de "Algoritmos".
Tambien se puede poner el comando "mingw32-make make", el cual creara un archivo ejecutable llamado "impmake.exe", el cual es ejecutable con ".\impmake.exe".
