#ifndef MY_EXCEPTION_H
#define MY_EXCEPTION_H

#include <exception>

// Definición de una clase personalizada que hereda de std::exception
class MyException : public std::exception {
public:
  // Definición de la función miembro what() que devuelve un mensaje de error personalizado
  const char* what() const throw() override;
};

#endif // MY_EXCEPTION_H