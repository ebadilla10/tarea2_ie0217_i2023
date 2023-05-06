#ifndef EXCEP
#define EXCEP

#include <iostream>

/**
 * @brief Clase MyExceptions utilizada para crear una excepcion
 * personalizada.
 * 
 * Clase hija de la clase exception que genera una nueva excepcion
 * personalizada. Imprime "My custom exception" cuando se genera una
 * excepcion.
 * 
 */
class MyException : public std::exception {
public:

  /**
   * @brief Retorna "My custom exception" cuando se
   * genera una excepcion.
   * 
   * @return const char* Frase "My custom exception"
   */
  const char* what() const throw();
};

#endif