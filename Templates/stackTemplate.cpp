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
#include <functional>
#include <vector>
#include <algorithm>

/**
 * @brief Templated class for representing a stack.
 * 
 * This class creates a stack and allows its manipulation.
 * Values can be of different types since they are defined
 * by template parameters.
 * 
 * @tparam T Type of the values that fill the stack.
 */
template<typename T>
class Stack {
private:

  /**
   * @brief Vector de datos que conforma el stack.
   * 
   */
  std::vector<T> data_;

public:

  /**
  * @brief Ingresa un valor al stack.
  * 
  * Ingresa el valor en la cima del stack.
  * 
  * @param value Valor que sera ingresado al stack.
  */
  void push(T value) {
    data_.push_back(value);
  }

  /**
   * @brief Extrae el valor mas reciente del stack.
   * 
   * @return T Valor en la cima del stack.
   */
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

  /**
   * @brief Elimina todos los elementos del stack.
   * 
   */
  void clear() {
    data_.clear();
  }

  /**
   * @brief Revisa si el stack esta vacio o no.
   * 
   * @return True if the stack is empty or false if the stack
   * is not empty.
   */
  bool empty() const {
    return data_.empty();
  }

  /**
   * @brief Retorna el tamaño del stack.
   * 
   * @return std::size_t Tamaño del stack.
   */
  std::size_t size() const {
    return data_.size();
  }

  /**
   * @brief Itera sobre los elementos del stack y les
   * aplica metodo.
   * 
   * @param func Metodo que se le aplicara a los datos.
   */
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

int main() {
  // crear un stack de valores enteros
  Stack<int> s;

  // rellenar el stack
  s.push(2021);
  s.push(2054);
  s.push(6524);

  // imprimir el tamaño del stack
  std::cout << "Stack size: " << s.size() << std::endl;

  // llamar a la funcion de iteracion para imprimir todos los valores.
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  // Extraer los valores uno por uno
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    // imprimir tamaño final del stack
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    // atrapar excepciones
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  //------------------SEGUNDA INSTANCIA------------------//

  std::cout << "------" << std::endl;

  // crear stack de decimales
  Stack<double> d;

  // rellenar el stack
  d.push(20.3);
  d.push(5.4);
  d.push(476.2);

  // llamar a la funcion de iteracion para imprimir todos los valores.
  d.foreach([](double& value) {
    std::cout << "Value: " << value << std::endl;
  });

  // imprimir el estado del stack
  bool isEmpty = d.empty();

  if (isEmpty) {
    std::cout << "The stack is empty" << std::endl;
  } else {
    std::cout << "The stack is not empty" << std::endl;
  }

  // vaciar el stack
  d.clear();

  // extraer un valor del stack vacio dispara la excepcion
  //out_of_range
  
  //double extraction = d.pop();

  return 0;
}
