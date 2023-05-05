#include "exceptions_2.h"

// Definición de la función what() de la clase MyException.
const char* MyException::what() const throw() {
  return "My custom exception";
}