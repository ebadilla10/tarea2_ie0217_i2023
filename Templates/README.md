Tarea de programación sobre templates:

Esta tarea tiene como objetivo:
1. Verificar si todos los includes agregados son necesarios para la compilación del código dado.
2. Comentar el código del template.
3. Comentar el código de la función main.
4. Agregar una nueva instancia donde se utilice el template dado para otro tipo de dato.
5. Agregar en las líneas del paso anterior, pero dejándolo comentado, alguna sentencia,
declaración o instrucción que dispararía la excepción out_of_range presente en el template.

Investigación sobre includes:
Al compilar por primera vez este archivo se pudo observar que al comentar el include de "stdexcept" el código compila
sin errores. Dicho esto, no se recomienda eliminar la inclusión de bibliotecas en un código solo porque este compila bien. 
Es posible que el compilador que se esté usando ya tenga la definición de esta excepción incluida, por lo que no es necesario agregar la librería. Sin embargo, es buena práctica incluir la librería que contiene la definición de una excepción si se está utilizando dicha excepción en el código, pues puede ser necesaria para el correcto funcionamiento de otras bibliotecas o componentes del sistema. Además, en futuras actualizaciones del compilador o del sistema, la eliminación de una biblioteca puede provocar errores de compilación o en tiempo de ejecución.
Los demás includes son necesarios para la compilación del programa pues "iostream" se usa para la entrada y salida estándar. La biblioteca "vector" se utiliza para la implementación de la clase std::vector, en la que se almacenan los elementos del stack.
La biblioteca "algorithm" se utiliza para proporcionar el algoritmo std::for_each que se utiliza en el método foreach de la clase Stack y la biblioteca "functional" se utiliza para definir la plantilla de función std::function utilizada en el método foreach de la clase Stack.

Para poder utilizar este programa, se necesitan los siguientes requerimientos: -Tener instalado el lenguaje de programación C++. -Tener acceso a una terminal de línea de comandos. -Tener instalado el sistema de control de versiones Git. Para poder compilar y ejecutar el código siga los siguientes pasos:

Clonar el repositorio de Git en la terminal: git clone https://github.com/SofiVillalta29/tarea2_ie0217_i2023.git Compilar el código fuente en la terminal: g++ stackTemplate.cpp -o tarea.exe

Ejecutar el programa en la terminal: ./tarea.exe o bien escribir "make" en la terminal para que el makefile ejecute el código. Autores: -Sofia Villalta Jinesta.

Licencia: Este proyecto está bajo la Licencia MIT.