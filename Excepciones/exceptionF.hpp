
#ifndef MY_EXCEPTION_H
#define MY_EXCEPTION_H

#include <exception>

class MyException : public std::exception {
public:
  const char* what() const throw();
};

#endif // MY_EXCEPTION_H



