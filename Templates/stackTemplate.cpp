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
#include <stdexcept>
#include <functional>

/**
 * @brief Template con una implementación de stack
 * 
 * @tparam T El tipo de los elementos en la pila.
*/
template<typename T>
class Stack {
private:
  std::vector<T> data_;

public:
  /**
   * @brief Función que permite agregar un elemento al final del vector.
   * 
   * @param value El valor a agregar a la pila.
  */
  void push(T value) {
    data_.push_back(value);
  }

  /**
   * @brief Función que se encarga de eliminar el último elemento de la pila.
   * 
   * @return El valor en la parte superior de la pila.
   * @throws std::out_of_range Si la pila está vacía.
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
   * @brief Función que se encarga de limpiar la pila.
  */
  void clear() {
    data_.clear();
  }

  /**
   * @brief Función que se encarga de verificar si la pila está vacía.
   * 
   * @return `true` si la pila está vacía, `false` en caso contrario.
  */
  bool empty() const {
    return data_.empty();
  }

  /**
   * @brief Función que obtiene el número de elementos de la pila.
   * 
   * @return El número de elementos en la pila.
  */
  std::size_t size() const {
    return data_.size();
  }

  /**
   * @brief Función que permite alicar una función a cada elemento en la pila.
   * 
   * @param func La función a aplicar a cada elemento.
  */
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

/**
 * @brief Función principal.
 * 
 * @return 0 en caso de éxito.
*/
int main() {
  Stack<int> s; /*se crea una instancia de la clase Stack*/

  /*Se agregan tres valores enteros a la pila con push: */
  s.push(2021);
  s.push(2054);
  s.push(6524);

  /* Se imprime el tamaño de la pila usando el método size.*/
  std::cout << "Stack size: " << s.size() << std::endl;

  /* Se llama al método foreach de la pila, que recorre todos los elementos de la pila y 
  los imprime en la pantalla utilizando una función lambda.*/
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  /* Ciclo que extrae los valores de la pila utilizando el método pop y 
  los imprime en la pantalla. Este bucle se ejecuta hasta que la pila este vacía.*/
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    /*Se imprime el tamaño de la pila*/
    std::cout << "Stack size: " << s.size() << std::endl;
  } 
  /*Si la pila está vacía y se intenta retirar un elemento, se lanzará una excepción de tipo 
  std::out_of_range que se captura en un bloque catch. La excepción se imprime en la pantalla utilizando cerr*/
  catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << std::endl;


  /*Nueva instancia*/
  Stack<std::string> sn; 

  /*Se agregan tres strings a la pila con push: */
  sn.push("Valeria");
  sn.push("Diego");
  sn.push("Carlos");
  sn.push("Karla");

  /* Se imprime el tamaño de la pila usando el método size.*/
  std::cout << "Stack size: " << sn.size() << std::endl;

  /* Se llama al método foreach de la pila, que recorre todos los elementos de la pila y 
  los imprime en la pantalla utilizando una función lambda.*/
  sn.foreach([](std::string& value) {
    std::cout << "Name: " << value << std::endl;
  });

  /* Ciclo que extrae los valores de la pila utilizando el método pop y 
  los imprime en la pantalla. Este bucle se ejecuta hasta que la pila este vacía.*/
  try {
    while (!sn.empty()) {
      std::string value = sn.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    /*Se imprime el tamaño de la pila*/
    std::cout << "Stack size: " << sn.size() << std::endl;

    /*Se llama al método pop() y se trata de eliminar un valor de la pila. 
    Como la pila está vacía, entonces dispararía la excepción out_of_range*/
    std::string value = sn.pop();
  } 
  /*Si la pila está vacía y se intenta retirar un elemento, se lanzará una excepción de tipo 
  std::out_of_range que se captura en un bloque catch. La excepción se imprime en la pantalla utilizando cerr*/
  catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
