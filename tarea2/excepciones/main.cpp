#include <iostream>
#include "exceptions.hpp" // Incluimos el archivo de encabezado

int main() {

  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  try {
    throw OutOfRangeException("Index out of range");
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  try {
    throw InvalidArgumentException("Invalid argument");
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  try {
    throw LengthErrorException("Length error");
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}

