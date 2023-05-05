// Tarea 2 Elias Alvarado Vargas B80372
// Archivo fuente a partir de exceptions.cpp

// Se agrega libreria iostream y el archivo de encabezado
// exceptions.hpp 
#include <iostream>
#include "exceptions.hpp"

// Luego se define una funcion main
int main() {

// Tal como se documentó en el archivo exception.cpp, en este
// bloque try tiene la excepcion de la clase MyException que se
// define en el archivo de encabezado incluido, donde esta excepcion
// es tomada en el bloque catch y luego muestra el mensaje Error cuando se compila

  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}