// Tarea 2 Elias Alvarado Vargas B80372

/**

@file exceptions
@brief Contiene el encabezado de exceptions_main.cpp
**/

//Encabezado para archivo exceptions_main.cpp

// Directiva para definir el archivo
#ifndef MY_EXCEPTION_H
#define MY_EXCEPTION_H

// Se agrega biblioteca exception que proporciona la
// clase base para las excepciones en C++
#include <exception>

// Tal como se documento en exceptions.cpp, aqui se 
// tiene la clase MyException donde herede una excepcion
// luego los miembros de la clase son publicos, debajo de public
class MyException : public std::exception {


public:
// Se define un metodo what() que devuelve un my custom exception
  const char* what() const throw() {
    return "My custom exception";
  }
};

#endif  