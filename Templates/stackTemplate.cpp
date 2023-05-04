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

/**
 * @file stackTemplate.cpp
 * @brief Ejemplo de uso templates
 * @date 30/04/2023
 * @author ebadilla
*/

#include <iostream>  
#include <vector>  
#include <algorithm>  

#include <functional>  // Se incluyen las bibliotecas necesarias

/**
 * @brief Clase Stack que representa una pila de elementos del tipo T.
 *
 * Esta clase se implementa utilizando un vector para almacenar los elementos
 * de la pila.
 */
template<typename T>
class Stack {
private:
  std::vector<T> data_;  // Vector que almacena los elementos de la pila.

public:
  /**
   * @brief Agrega un elemento a la pila.
   * @param value Valor del elemento a agregar.
   */
  void push(T value) {
    data_.push_back(value);
  }

  /**
   * @brief Saca un elemento de la pila.
   * @return Valor del elemento sacado.
   *
   * Si la pila está vacía, lanza una excepción std::out_of_range.
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
   * @brief Vacia la pila.
   */
  void clear() {
    data_.clear();
  }

  /**
   * @brief Comprueba si la pila esta vacia.
   * @return True si la pila esta vacia, False en caso contrario.
   */
  bool empty() const {
    return data_.empty();
  }

  /**
   * @brief Obtiene el tamano de la pila.
   * @return Tamano de la pila.
   */
  std::size_t size() const {
    return data_.size();
  }

  /**
   * @brief Itera sobre todos los elementos de la pila, aplicando una funcion a cada uno.
   * @param func Funcion que se aplicara a cada elemento de la pila.
   */
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

/**
 * @brief Funcion principal del programa.
 */
int main() {
  // Creamos una pila de enteros
  Stack<int> s;
  //s.pop(); // Sentencia que dispararia "out_of_range"
  s.push(2021);
  s.push(2054);
  s.push(6524);

  // Creamos una nueva instancia para almacenar objetos de tipo std::string
  Stack<std::string> s2;
  s2.push("Fabian");

  std::cout << "Stack size: " << s.size() << std::endl;
  std::cout << "Stack size: " << s2.size() << std::endl;

  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  s2.foreach([](std::string& value) {
    std::cout << "Value: " << value << std::endl;
  });

  try {  // Intentamos sacar todos los elementos
    while (!s2.empty()) {
      std::string value = s2.pop();
      std::cout << "Popped value: " << value << std::endl;  // Mostramos el elemento sacado
    }
    std::cout << "Stack size: " << s2.size() << std::endl;  // Mostramos el tamaño de la pila
  } catch (const std::exception& e) {  // Se muestra la excepcion
    std::cerr << "Exception: " << e.what() << std::endl; // imprime el mensaje
  }

  return 0;
}


