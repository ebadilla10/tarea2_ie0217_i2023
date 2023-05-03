#include <iostream>
#include "MyException.hpp"

using namespace std;

/**
 * @brief Función principal del programa.
 *
 * @return int Código de salida del programa.
 */
int main() {

  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}
