# IE0217 - Tarea 2 - Sergio Garino Vargas - B73157

- [Tarea 2 - Proyectos heredados](#tarea 2)
  - [Objetivo](#objetivo)
  - [Entregable](#entregable)
  - [Reporte](#reporte)

## Objetivo
1. Hola

## Entregable
1. Hola

## Reporte
### Analisis de la complejidad de los algoritmos
- Se solicita determinar la complejidad que tiene cada algoritmo utlizando la notación Big O, la complejidad fue vista en clase, por lo que procedo a basarme en dicho dato y así verificar que el dato es correcto.
- La complejidad algoritmica representa la cantidad de recursos temporales que necesita un algoritmo para resolver un problema y por tanto permite determminar la eficiencia de dicho algoritmo
#### Bubble Sort
- Se indica que la complejidad de este algoritmo es O(n^2) en el peor de los casos ya que comparara cada par de elementos en la lista. La complejidad se puede interpretar como que es exponencial.
- Para implementar este algoritmo se necesitan dos bucles ´for´, el primero se encarga de recorrer el arreglo y el segundo es para poder hacer las comparaciones en cada pasada, si __n__ es la cantidad de elementos que tiene el arreglo, en el peor de los casos se necesitan n iteraciones si todos los elementos están desordenados, y en el bucle interior se requieren __n-1__ comparaciones ya que el último está acomodado. Se obtiene entonces que la complejidad es __n*(n-1)__, que es igual a __n^2-n__, sin embargo, para valores de n grandes este valor se puede aproximar como __n^2__.

#### Insertion Sort
- La complejidad de este algoritmo también es exponencial, O(n^2), esto debido a que en el peor de los casos se deben reacomodar todos los elementos del arreglo que es si la matriz está en el orden invertido, en este caso la primera pasada delñ buble ´for´ se hace una comparación, la de los primeros dos elementos, en la segunda pasada se hacen dos comparaciones, en la tercera se hacen tres comparaciones y así sucesivamente, por lo que por fórmula de de sumas de Gauss es: __n*(n-1)/2__. Lo cual es una expresión cuadrática que para valores de __n__ grandes se puede aproximar como __n^2__.

#### Selection Sort
- El analisis para el algoritmo Selection Sort va por el mismo camino, su complejidad también es de O(n^2). Esto se debe a que la forma en que opera el algoritmo es muy similar a Insertion Sort, sin embargo, lo que hace es seleccionar el elemento más pequeño y mandarlo al inicio del arreglo, luego el segundo más pequeño y ponerlo de segundo y así sucesivamente.

#### Quick Sort
- De los cuatro algoritmos este es el que realiza la tarea de ordenamiento de la forma más eficiente, ya que su 
complejidad es O(n\*log n), esto se debe a que, En promedio, el algoritmo de Quick Sort elige un buen pivote en cada iteración, lo que conduce a una división aproximadamente equitativa de la matriz. En este caso, la cantidad de comparaciones y asignaciones realizadas por Quick Sort es proporcional a la altura del árbol de recursión, que es log(n). Por lo tanto, la complejidad promedio de Quick Sort es O(n\*log n)