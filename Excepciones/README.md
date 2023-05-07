# Ejercicio con el uso de excepciones

Este es un código fuente de la tarea 2 de programación en C++ que tiene como objetivo 
hacer la revisión de una clase exception de la librería estándar que sirve para crear 
una excepción personalizada mediante herencia. Por lo tanto el archivo fuente exceptions.cpp 
contiene la clase exception de la librería estándar para crear una excepción personalizada 
mediante herencia.

## Descripción
Esta tarea se desarrolla en el marco del curso Estructuras Abstractas de Datos y Algoritmos para 
Ingeniería IE-0217 y la documentación del código fuente se puede consultar en la dirección: 
- [Sitio web del proyecto](https://tareaestructuras.000webhostapp.com/)

## Tabla de contenidos

- [Investigación](#investigación)
- [Instalación](#instalación)
- [Uso](#Uso)
- [Licencia](#licencia)
- [Contacto](#contacto)

## Investigación

### Las tareas sobre el archivo fuente consisten en lo siguiente:
#### 1. Documentar el código, el cual es corto, sin embargo, necesita una explicación.
Se hizo la documentación tipo Doxygen para la clase MyException y documentación de 
línea simple, formato Doxygen de la función main

**Explicación del código:** código en C++ que tiene una forma de lanzar y capturar excepciones personalizadas. 
Primeramente se define una clase llamada MyException que hereda de la clase std::exception. Dentro de 
esta clase, se define un método what() al que se le indica con throw() que la función what() no arrojará
ninguna excepción, pero what() si devuelve un mensaje de error personalizado. Luego, en la función main(),
se coloca un bloque try que rodea la instrucción throw MyException(). lo que significa que si se lanza una
excepción de la clase MyException dentro de este bloque, se capturará automáticamente y se ejecutará el 
bloque catch que captura cualquier excepción de la clase std::exception, y muestra un mensaje de error en la
consola utilizando el método what() de la excepción capturada.

El código ilustra cómo se puede usar la manipulación de excepciones en C++ para detectar y manejar errores 
específicos de manera elegante y controlada y se extiende lo entendido en el tercer punto de esta sección.

#### 2. Realizar la división en archivos de encabezado y fuente para una correcta estructura de archivos: Se crearon 3 archivos:
  
  - exceptions.hpp: archivo encabezado contiene la declaraciones donde se crea la clase exception de la librería estándar 
  para crear una excepción personalizada mediante herencia.
  - exceptions.cpp: contiene la implementación de la programación para la clase exception de la librería estándar para 
  crear una excepción personalizada mediante herencia.
  - main.cpp: función principal para demostrar el uso de la clase MyException.

#### 3. Investigue sobre tres distintos tipos de excepciones incluidas en la librería estándar, y utilice
estas mediante un pequeño código que dispare dichas excepciones.
Cuatro tipos de excepciones incluidas en la librería estándar std::exception de C++ y de uso en el código fueron: 

  - std::logic_error: Esta excepción se utiliza para errores que están relacionados con la lógica de un programa,
    como por ejemplo intentar acceder a un puntero nulo o llamar a una función que no ha sido implementada.
  - std::runtime_error: Esta excepción se utiliza para errores que ocurren durante la ejecución de un programa, 
    como por ejemplo la apertura fallida de un archivo o la conexión fallida a una base de datos.
  - std::out_of_range: Esta excepción se utiliza cuando un índice está fuera del rango válido para un contenedor,
    como por ejemplo un vector.

Bibliografía:

Cachero, C., & Ponce de León Amador, P. J. (2008). Gestión de errores. Programación Orientada a Objetos. 

Fernandes, R. M. C. (2012). Answer: plataforma em C++ para o desenvolvimento de serviços web (Doctoral dissertation).

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
  **g++ ./exceptions.cpp -o exceptions.exe**

  Luego, para ejecutar el programa:  
  **.\exceptions.exe**

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
