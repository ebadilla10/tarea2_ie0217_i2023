
#include "exceptionF.hpp"

const char* MyException::what() const throw() {
  return "My custom exception";
}
