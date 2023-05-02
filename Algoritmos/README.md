Tarea de programación sobre algoritmos de ordenamiento:

Esta tarea tiene como objetivo:
1. Documentar, siguiendo las pautas Doxygen, cada una de las funciones declaradas en el header. 
2. Implementar cada algoritmo de ordenamiento en un único archivo fuente.
3. Analizar cada algoritmo y determinar la complejidad que estos tienen utilizando la notación Big O (O grande).

Análisis de complejidad:
1. Bubble Sort: Este algoritmo es conocido por su simplicidad y facilidad de implementación, 
pero también por ser uno de los más ineficientes en términos de tiempo de ejecución.
La idea principal detrás de Bubble Sort es comparar cada par de elementos adyacentes en la lista
y si están en orden incorrecto, intercambiarlos. Esto se repite hasta que toda la lista esté ordenada. 
En el peor de los casos, cuando la lista está completamente desordenada, el algoritmo debe realizar n(n-1)/2 comparaciones y n(n-1)/2 intercambios, lo que da como resultado una complejidad de O(n^2).

Selection Sort: Este algoritmo es similar a Bubble Sort en términos de complejidad.
La idea principal detrás de Selection Sort es encontrar el elemento mínimo en la lista y colocarlo 
en la posición adecuada. Este proceso se repite para cada elemento de la lista hasta que toda la lista 
esté ordenada. En el peor de los casos, el algoritmo debe realizar n(n-1)/2 comparaciones y n intercambios,
lo que da como resultado una complejidad de O(n^2).

3. Insertion Sort: El algoritmo de Insertion Sort es un algoritmo de ordenamiento simple que se utiliza para ordenar un conjunto de elementos en una lista. El algoritmo funciona de la siguiente manera: toma un elemento
y lo compara con los elementos a su izquierda hasta que encuentra su lugar correcto en la lista. 
Una vez que se ha colocado en su lugar correcto, se toma el siguiente elemento y se repite el proceso hasta que todos los elementos estén en su lugar. En el peor de los casos, cuando la lista está en orden inverso, el algoritmo debe comparar cada elemento con todos los elementos a su izquierda y moverlos a su posición correcta, lo que resulta en una complejidad de O(n^2).

4. Quick Sort: El algoritmo de Quick Sort es un algoritmo de ordenamiento eficiente y muy utilizado en la práctica. El algoritmo funciona mediante la selección de un elemento pivote, y luego divide la lista en dos subconjuntos: uno con elementos mayores que el pivote y otro con elementos menores. Luego, se aplica recursivamente el algoritmo a cada subconjunto hasta que todos los elementos están en su posición correcta.
 En el mejor de los casos, el algoritmo tiene una complejidad de O(n log n), pero en el peor de los casos, si se elige un pivote malo, el algoritmo puede tener una complejidad de O(n^2).


Para poder utilizar este programa, se necesitan los siguientes requerimientos: -Tener instalado el lenguaje de programación C++. -Tener acceso a una terminal de línea de comandos. -Tener instalado el sistema de control de versiones Git. 
Para poder compilar y ejecutar el código siga los siguientes pasos:

Clonar el repositorio de Git en la terminal:
git clone https://github.com/SofiVillalta29/tarea2_ie0217_i2023.git
Compilar el código fuente en la terminal:
g++ Sort.cpp -o tarea.exe

Ejecutar el programa en la terminal: ./tarea.exe
o bien escribir "make" en la terminal para que el makefile
ejecute el código.
Autores: -Sofia Villalta Jinesta.

Licencia: Este proyecto está bajo la Licencia MIT.