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

#include <iostream> // Necesario
#include <vector> // Necesario
#include <algorithm>  // Necesario
// #include <stdexcept> // Esta librería está de más ya que no se utiliza
#include <functional> // Necesaria

/*!
 * @brief Template
 * La siguiente clase genérica proporciona una serie de métodos para manipular
 * elementos de una pila de diferentes tipos de datos
 * El elemeto 'data_' se utiliza para almacenar los elementos de la pila
 */

template<typename T>
class Stack {
private:
  std::vector<T> data_;

public:

  /*!
  * @brief Método push
  * Agrega un elemento a la parte superior de la pila
  * @param[in] value
  */
  void push(T value) {
    data_.push_back(value);
  }

  /*!
  * @brief Método pop
  * Elimina y devuelve el elemento superior de la pila, nótese que si la pila
  * está vacía se envía la exxcepción 'out_of_range'
  */
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

  /*!
  * @brief Método clear
  * Elimina todos los elementos de la pila 
  */
  void clear() {
    data_.clear();
  }

  /*!
  * @brief Método empty
  * Indica si la pila está vacía o no mediante un valor booleano
  */
  bool empty() const {
    return data_.empty();
  }

  /*!
  * @brief Método size
  * Devuelve el número de elementos que hay en la pila 
  */
  std::size_t size() const {
    return data_.size();
  }

  /*!
  * @brief Método foreach
  * Permite realizar una operación en cada elemento de la pila sin modificar
  * la pila en sí
  * @param[in] std::function 
  */
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

/*!
 * @brief Función main()
 * Crea una instancia de la clase Stack con tipo int y agrega tres elementos a
 * la pila utilizando el método push(). Luego, muestra el tamaño de la pila 
 * utilizando el método size() y llama al método foreach() para imprimir cada 
 * elemento de la pila en la consola. Después, vacía la pila utilizando el 
 * método pop() y muestra cada elemento eliminado utilizando std::cout. En caso 
 * de que la pila esté vacía y se intente llamar al método pop(), se captura la 
 * excepción lanzada y se imprime un mensaje de error en la consola. 
 * El programa devuelve 0 para indicar que se ha ejecutado correctamente.
 */

int main() {
  Stack<int> s;
  s.push(2021);
  s.push(2054);
  s.push(6524);

  std::cout << "Stack size: " << s.size() << std::endl;

  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
