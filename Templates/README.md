### Universidad de Costa Rica
#### IE-0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería

Primer semestre del 2023

---
* Estudiante: **Valeria Mora Torres**
* Carné: **B75122**
* Grupo: **2**

# Templates

### Includes

* El #include <iostream>: se utiliza en la función main() para imprimir mensajes en la consola mediante std::cout y std::endl.

* El #include <vector>:  se utiliza en la definición de la clase Stack para implementar la pila utilizando un vector de elementos.

* El #include <algorithm>: se utiliza en la definición de la función foreach() de la clase Stack para iterar sobre los elementos del vector de la pila y aplicar una función a cada uno.

* El #include <stdexcept>: se utiliza en la definición de la función pop() de la clase Stack para lanzar una excepción si se intenta extraer un elemento de una pila vacía.

* El #include <functional>: se utiliza en la definición de la función foreach() de la clase Stack para especificar el tipo de argumento de la función que se aplicará a cada elemento de la pila.

De esta forma, se concluye que todos los includes agregados son necesarios para la compilación del código dado.


### Funciones

#### for_each():
Función de la biblioteca estándar de C++ que toma un rango de elementos (por ejemplo, un vector) y una función, y aplica esa función a cada elemento del rango **[1]**. 

Su estructura es: for_each (InputIterator start_iter, InputIterator last_iter, function fnc),

donde:
 * start_iter : La posición inicial desde donde se deben ejecutar las operaciones de la función.
 * last_iter: La posición final hasta donde debe ejecutarse la función.
 * fnc: el tercer argumento es una función cuya operación se aplicaría a cada elemento.


### Referencias

**[1]** GeeksforGeeks. (2021). for_each loop in C++. [Online]. Disponible en: https://www.geeksforgeeks.org/for_each-loop-c/

# Instrucciones de ejecución

Hay dos formas de ejecutar el programa:
* Ubicado dentro de la carpeta Templates, se debe agregar en una nueva terminal la siguiente línea de comando:

```
g++ -o templates.exe .\stackTemplate.cpp  
```

Seguidamente ejecute el archivo .exe generado, esto agregando en la terminal la siguiente línea de comando: 

```
.\templates.exe 
```

*  También puede compilar y ejecutar por medio del comando:

```
make
```


