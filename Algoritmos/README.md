# Ejercicio con el uso de Algoritmos de ordenamiento

Este es un código fuente de la tarea 2 de programación en C++ que tiene como objetivo 
hacer la implementación de 4 algoritmos de ordenamiento. Por lo tanto para este ejercicio 
solo se hizo entrega del archivo encabezado con las definiciones de las funciones de los 
algoritmos a implementar. 

## Descripción
Esta tarea se desarrolla en el marco del curso Estructuras Abstractas de Datos y Algoritmos para 
Ingeniería IE-0217 y la documentación del código fuente se puede consultar en la dirección: 
- [Sitio web del proyecto](https://doxygenizi12.000webhostapp.com/)

## Tabla de contenidos

- [Investigación](#investigación)
- [Instalación](#instalación)
- [Uso](#Uso)
- [Licencia](#licencia)
- [Contacto](#contacto)

## Investigación

Las tareas sobre el ejercicio consisten en lo siguiente:

### 1. Documentar, siguiendo las pautas Doxygen, cada una de las funciones declaradas en el header.


### 2. Implementar cada algoritmo de ordenamiento en un único archivo fuente.
Se implementaron los algoritmos: **"Bubble Sort", "Selection Sort", "Insertion Sort", "Quick Sort".**
  

### 3. Analice cada algoritmo y determine la complejidad que estos tienen utilizando la notación Big O (O grande). 

#### **Bubble Sort**: 
El algoritmo compara elementos adyacentes y los intercambia si están en el orden incorrecto. En cada iteración del bucle externo,
el algoritmo garantiza que el elemento más grande esté en la posición correcta al final del arreglo. Sobre la complejidad  Big O,
se reconoce que la complejidad temporal de Bubble Sort es O(n^2), ya que tiene dos bucles anidados que ejecutan n veces cada uno,
lo que resulta en una complejidad cuadrática en el peor caso. Esta complejidad se le asigna a algoritmos que necesitan realizar una
iteración por todos los elementos en cada uno de los elementos a procesar en el peor de los casos. 

#### **Selection Sort**: 
El algoritmo busca el elemento más pequeño en cada iteración del bucle externo y lo intercambia con el primer elemento no ordenado. 
En cada iteración, el subarray no ordenado se reduce en uno y su comportamiento nuevamente es el de la complejidad temporal  O(n^2),
ya que tiene dos bucles anidados que ejecutan n veces en el peor caso, lo que resulta en una complejidad cuadrática. 

#### **Insertion Sort**: 
El algoritmo ordena los elementos de izquierda a derecha, insertando cada elemento en su posición correcta en el subarray ordenado.
La complejidad temporal de Insertion Sort es O(n^2) en el peor caso, porque tiene un bucle externo que ejecuta n veces y un bucle 
interno que también ejecuta hasta n veces en el peor caso. Cabe la salvedad que si el arreglo ya está ordenado, la complejidad será
O(n), ya que el bucle interno no se ejecuta en absoluto y se ejecutaria solo 1 bucle.

#### **Quick Sort**: 
El algoritmo utiliza la técnica de divide y conquista para ordenar el array. En cada llamada recursiva, se elige un pivote y se dividen
los elementos del array en dos subarrays: uno con elementos menores al pivote y otro con elementos mayores o iguales al pivote. Luego se
aplica la misma técnica a cada subarray, de modo que el algoritmo puede hacer n llamadas recursivas, de modo que la complejidad del algoritmo
depende del pivote elegido y de cómo se dividen los elementos del array en cada iteración. En el mejor caso, cuando se elige un pivote que
divide el array en dos subarrays de igual tamaño, la complejidad es O(n log n) "Complejidad Logarítmica". En el peor caso, cuando se elige
un pivote que es el elemento más grande o más pequeño del array, la complejidad es O(n^2).

la complejidad O(n log n), se le asigna a algoritmos que rompen el problema en varios trozos por cada elemento, volviendo a recomponer 
información tras la ejecución de cada "trozo".

Fuentes:

- Fuentes, C.(2018). Notación Big O: Guía para Principiantes, consultado en: https://metcoder.medium.com/notacion-big-0-para-principiantes-f9cbb4b6bec8

- Sandoval, M. M. (2019). Curso Propedéutico de Programación Básica. consultado en: https://www.tamps.cinvestav.mx/descargables/ComplejidadAlgoritmica.pdf

## Instalación 

Requisitos previos para el uso del archivo Makefile: 
- Conexión a Internet para descargar los archivos de instalación. 
- Windows 10 o posterior.

Pasos para la instalación:
Ve a la siguiente URL en tu navegador web: https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download
completa los pasos de https://dev.to/gamegods3/how-to-install-gcc-in-windows-10-the-easier-way-422j

## Uso 

Requisitos: Ejecutar los comandos en la terminal desde el directorio Excepciones.

- Para compilar y ejecutar con el make:  
  **mingw32-make all -s**

- Para compilar de forma manual:  
  **g++ ./Sorting_algorithms.cpp -o Sorting_algorithms.exe**

  Luego, para ejecutar el programa:  
  **.\Sorting_algorithms.exe**

## Licencia

Licencia MIT, Consulte la licencia para más detalles: https://opensource.org/licenses/MIT

### Condiciones de la Licencia MIT
    - Se permite la distribución del software con cualquier fin, incluso comercial.
    - Se permite la modificación del software y la distribución de software modificado, siempre y cuando se cumplan las siguientes condiciones:
    - Se debe incluir una copia de la licencia y de los avisos de derechos de autor en todas las copias o partes sustanciales del software.
    - Se debe indicar claramente que el software ha sido modificado.
    - El software se proporciona "tal cual", sin garantía de ningún tipo, expresa o implícita. 

## Contacto

correo: alex.varela@ucr.ac.cr tel: +50685525005
