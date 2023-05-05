#include <iostream>
#include "MyException.hpp"
#include <cmath>
using namespace std;

/**
 * @brief Función principal del programa.
 *
 * @return int Código de salida del programa.
 */

#include <iostream>
#include <stdexcept>

int main() {
    int a = 4;
    int b = 0;
    if (b == 0)
    {
        try {
    // Lanzar una excepción lógica (std::runtime_error)
     throw std::runtime_error("Runtime error");

             } catch (std::runtime_error& e) {
                std::cout << "Error de división por cero: " << e.what() << std::endl;
            }
        }

    int i = 5;
    int arr[i] = {1, 2, 3, 4};
    if (i != 4){
         try {
    // Lanzar una excepción de rango (std::out_of_range)
     throw std::out_of_range("Fuera de rango");

             } catch (std::out_of_range& e) {
                std::cout << "Error de rango: " << e.what() << std::endl;
            }
        }
    int c = 0;
     if (c <= 0) {
        try {
            // Lanzar una excepción de argumento inválido (std::invalid_argument)
            throw std::invalid_argument("El valor de c debe ser mayor que cero");

        } catch (std::invalid_argument& e) {
            std::cout << "Error de argumento inválido: " << e.what() << std::endl;
        }
    }

  try {
    // Lanzar una excepción personalizada (MyException)
    throw MyException();

  } catch (std::exception& e) {
    std::cout << "Error personalizado: " << e.what() << std::endl;
  }

  return 0;
}
