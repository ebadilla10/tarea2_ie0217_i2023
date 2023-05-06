/**
@file main.cpp
**/

#include <iostream>
#include "exceptions_2.h"

int main() {
  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}