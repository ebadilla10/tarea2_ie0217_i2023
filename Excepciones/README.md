Tarea de programación sobre exepciones:
Esta tarea tiene como objetivo:
1. Documentar el código, el cual es corto, sin embargo, necesita una explicación.
2. Realizar la división en archivos de encabezado y fuente para una correcta estructura de
archivos.
3. Investigue sobre tres distintos tipos de excepciones incluidas en la librería estándar, y utilice
estas mediante un pequeño código que dispare dichas excepciones.

Investigación:
Las tres excepciones que fueron utilizadas en este código fueron:
1. std::runtime_error es una clase de excepción que se utiliza en C++ para manejar errores en tiempo de ejecución. Se puede lanzar esta excepción en situaciones en las que ocurre un error imprevisto durante la ejecución del programa y no se puede continuar, como la división
por cero.
2. std::out_of_range es una clase de excepción en C++ que se utiliza cuando se intenta acceder a un índice fuera de los límites permitidos en un contenedor como un arreglo, un vector, un mapa, etc.
3. invalid argument es una excepción de tiempo de ejecución que se produce cuando se pasa un argumento no válido a una función. Por ejemplo, si una función espera un argumento entero positivo y se le pasa un número negativo, se lanzaría una excepción de tipo invalid argument. Esta excepción se encuentra en la biblioteca estándar de C++ y se hereda de la clase std::exception.

Para ejecutar estos archivos estos son los pasos a seguir:
-Clonar el repositorio de Git en la terminal:
git clone https://github.com/SofiVillalta29/tarea2_ie0217_i2023.git
Compilar el código fuente en la terminal:
g++ exceptions.cpp main.cpp -o tarea.exe

-Ejecutar el programa en la terminal: ./tarea.exe
o bien escribir "make" en la terminal para que el makefile
ejecute el código.
Autores: -Sofia Villalta Jinesta.

Licencia: Este proyecto está bajo la Licencia MIT.