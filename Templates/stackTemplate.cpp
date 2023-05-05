/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

#include <iostream>
#include <vector>
#include <algorithm>
//#include <stdexcept>  Esta libreria no es necesaria incluirla debido a que no afecta en la compilacion del programa y solo hace mas lento el programa
#include <functional>

template<typename T>
class Stack {
private:
  //vector de tipo T utilizado para almacenar los elementos de la pila.
  std::vector<T> data_;

public:
  //Este método toma un parámetro de tipo T y lo agrega a la parte superior de la pila utilizando el método "push_back" del vector.
  void push(T value) {
    data_.push_back(value);
  }
  //Este método elimina el elemento en la parte superior de la pila y lo devuelve. Si la pila está vacía, se lanza una excepción "std::out_of_range".
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }
  // Este método elimina todos los elementos de la pila utilizando el método "clear" del vector.
  void clear() {
    data_.clear();
  }
  //Este método devuelve verdadero si la pila está vacía y falso si no lo está utilizando el método "empty" del vector.
  bool empty() const {
    return data_.empty();
  }
  //Este método devuelve el tamaño de la pila utilizando el método "size" del vector.
  std::size_t size() const {
    return data_.size();
  }
  //Este método toma una función como argumento y la aplica a cada elemento de la pila utilizando el algoritmo "for_each" de la biblioteca estándar de C++.
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

int main() {
  // Crear un objeto Stack de tipo int
  Stack<int> s;

  // Agregar algunos valores a la pila
  s.push(2021);
  s.push(2054);
  s.push(6524);

  // Imprimir el tamaño de la pila
  std::cout << "Stack size: " << s.size() << std::endl;

  // Imprimir cada elemento de la pila utilizando una función lambda
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  // Vaciar la pila utilizando un bucle while
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }

   // Imprimir el tamaño de la pila después de vaciarla
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
     // Manejar la excepción std::out_of_range que se lanza si se intenta llamar a pop() en una pila vacía
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  /**
   *  PRUEBA DE CODIGO UTILIZANDO UN DATO DE TIPO DOUBLE
   * */


  // Crear un objeto Stack de tipo int
  Stack<double> d;

  // Agregar algunos valores a la pila
  d.push(12.12);
  d.push(20.15);
  d.push(31.40);

  // Imprimir el tamaño de la pila
  std::cout << "Stack size double: " << d.size() << std::endl;

  // Imprimir cada elemento de la pila utilizando una función lambda
  d.foreach([](double& value) {         // cambiado a double cuando era int
    std::cout << "Value: " << value << std::endl;
  });

  // Vaciar la pila utilizando un bucle while
  try {
    while (!d.empty()) {
      int value = d.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
   // Imprimir el tamaño de la pila después de vaciarla
    std::cout << "Stack size double: " << d.size() << std::endl;
  } catch (const std::exception& e) {
     // Manejar la excepción std::out_of_range que se lanza si se intenta llamar a pop() en una pila vacía
    std::cerr << "Exception: " << e.what() << std::endl;
  }

 /**
  se utiliza el siguientre metodo para que salte el error out of range
*/
   std::cout << "ejecucion del error: Stack is empty" << std::endl;
   
  // Eliminar todos los elementos de la pila
  d.clear();

   // Intentar extraer un elemento de la pila vacía
  try {
    int value = s.pop();
    std::cout << "Popped value: " << value << std::endl;
  } catch (const std::exception& e) {
    // Manejar la excepción std::out_of_range que se lanza si se intenta llamar a pop() en una pila vacía
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  // Imprimir el tamaño de la pila después de vaciarla
  std::cout << "Stack size: " << s.size() << std::endl;

  return 0;
}
