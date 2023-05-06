

#include <iostream>
#include <stdexcept>
#include <vector>

void ejemplouno() {
  // Ejemplo de uso de std::runtime_error
  throw std::runtime_error("Error de tiempo de ejecucion");
}

void ejemplodos(int x) {
  // Ejemplo de uso de std::invalid_argument
  if (x < 0) {
    throw std::invalid_argument("El argumento debe ser positivo");
  }
}

void ejemplotres(const std::vector<int>& vec) {
  // Ejemplo de uso de std::out_of_range
  if (vec.empty()) {
    throw std::out_of_range("El vector esta vacio");
  }
  std::cout << vec.at(10) << std::endl; // Accediendo a un elemento fuera de rango
}

int main() {
  try {
    ejemplouno();
  } catch (std::runtime_error& e) {
    std::cout << "Capturado std::runtime_error: " << e.what() << std::endl;
  }
  try {
    ejemplodos(-1);
  } catch (std::invalid_argument& e) {
    std::cout << "Capturado std::invalid_argument: " << e.what() << std::endl;
  }
  try {
    ejemplotres(std::vector<int>());
  } catch (std::out_of_range& e) {
    std::cout << "Capturado std::out_of_range: " << e.what() << std::endl;
  }
  
  return 0;
}







