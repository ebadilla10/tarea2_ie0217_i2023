#ifndef HEADER_EXCEPTIONS_HPP
#define HEADER_EXCEPTIONS_HPP

#include <iostream>

/**
  * @brief Clase de excepción personalizada 
  * que hereda de la clase std::exception.
*/
class MyException : public std::exception {
public:

  /**
  * @brief Función what() es una función miembro de la clase base 
  * std::exception, que devuelve una cadena de caracteres (const char *) 
  * que describe la excepción que se ha producido.
  * El modificador throw() especifica que esta función no lanzará ninguna excepción. 
  */
  const char* what() const throw();
};


#endif /* HEADER_EXCEPTIONS_HPP */