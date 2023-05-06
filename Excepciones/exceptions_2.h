/**
@file exceptions_2.h
**/

#ifndef EXCEPTIONS_2_H
#define EXCEPTIONS_2_H

#include <exception>

// Declaración de la clase MyException. Hereda de std::exception.
class MyException : public std::exception {
public:
  const char* what() const throw();
};

#endif