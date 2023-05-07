#include "exceptions.hpp"

// Implementación de la función miembro what() que devuelve un mensaje de error personalizado
const char* MyException::what() const throw() {
  return "My custom exception";
}