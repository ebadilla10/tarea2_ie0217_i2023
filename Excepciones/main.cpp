
#include <iostream>
#include "exceptionF.hpp"
#include "exceptionF.cpp"


int main() {

  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}
