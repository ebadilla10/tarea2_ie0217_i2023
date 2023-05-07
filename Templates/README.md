# Ejercicio con el uso de Templates

Este es un código fuente de la tarea 2 de programación en C++ que tiene como objetivo 
hacer la revisión de una clase escrita bajo la caracteristica Template, por lo tanto el
archivo fuente stackTemplate.cpp contiene la implementación completa de una clase pila
mediante templates. Así como una pequeña función main donde es utilizada esta plantilla 
para el caso del tipo entero.

## Descripción
Esta tarea se desarrolla en el marco del curso Estructuras Abstractas de Datos y Algoritmos para 
Ingeniería IE-0217 y la documentación del código fuente se puede consultar en la dirección: 
- [Sitio web del proyecto](https://esp8266alfa.000webhostapp.com/)

## Tabla de contenidos

- [Investigación](#investigación)
- [Instalación](#instalación)
- [Uso](#Uso)
- [Licencia](#licencia)
- [Contacto](#contacto)

## Investigación

### Las tareas sobre el archivo fuente consisten en lo siguiente:

### 1. Verificar si todos los includes agregados son necesarios para la compilación del código dado. 
    
    - Los includes agregados necesarios para la compilación del código dado, son: 

      #include <iostream>      // Para entrada/salida estándar

      #include <vector>        // Para usar std::vector

      #include <functional>    // Para std::function

      #include <algorithm>     // Para std::for_each

    - El include agregado innecesariamente para la compilación del código dado, es: 

    #include <stdexcept>  // proporciona excepciones de tiempo de ejecución que se pueden lanzar 
    en casos específicos de errores, como errores de índice fuera de rango, argumentos inválidos 
    o división por cero.   

    Pero si se implementa alguna sentencia, declaración o instrucción que dispara la excepción 
    out_of_range presente en el template, se hace necesaria.

### 2. Comentar el código del template:
se hizo la documentación tipo Doxygen para la clase Stackel "código del template"

### 3. Comentar el código de la función main:
se hizo la documentación de línea simple, formato Doxygen de la función main

### 4. Agregar nueva instancia donde utilice el template dado para otro tipo de dato. Agregue algunas líneas utilizando esta nueva instancia.

### 5. Agregar en las líneas del paso anterior, alguna sentencia, declaración o instrucción que dispararía la excepción out_of_range presente en el template.

## Instalación 

Requisitos previos para el uso del archivo Makefile: 
- Conexión a Internet para descargar los archivos de instalación. 
- Windows 10 o posterior.

Pasos para la instalación:
Ve a la siguiente URL en tu navegador web: https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download
completa los pasos de https://dev.to/gamegods3/how-to-install-gcc-in-windows-10-the-easier-way-422j

## Uso 

Requisitos: Ejecutar los comandos en la terminal desde el directorio Templates.

- Para compilar y ejecutar con el make:  
  **mingw32-make all -s**

- Para compilar de forma manual:  
  **g++ ./stackTemplate.cpp -o stackTemplate.exe**

  Luego, para ejecutar el programa:  
  **.\stackTemplate.exe**

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
