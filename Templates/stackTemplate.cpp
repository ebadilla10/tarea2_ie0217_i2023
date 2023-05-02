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
 * @brief Template de clase que implementa una pila.
 *
 * @tparam T es el tipo de dato que se almacena en la pila.
 */
template < typename T >
  class Stack {
    private: std::vector < T > data_; ///< Vector que almacena los elementos de la pila.

    public:
      /**
       * @brief Inserta un elemento en la pila.
       *
       * @param value Elemento a insertar.
       */
      void push(T value) {
        data_.push_back(value);
      }

    /**
     * @brief Elimina el elemento más reciente de la pila y lo retorna.
     *
     * @throw std::out_of_range Si la pila está vacía.
     *
     * @return Elemento eliminado de la pila.
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
     * @brief Elimina todos los elementos de la pila.
     */
    void clear() {
      data_.clear();
    }

    /**
     * @brief Indica si la pila está vacía.
     *
     * @return true si la pila está vacía, false en caso contrario.
     */
    bool empty() const {
      return data_.empty();
    }

    /**
     * @brief Retorna la cantidad de elementos en la pila.
     *
     * @return Cantidad de elementos en la pila.
     */
    std::size_t size() const {
      return data_.size();
    }
    
    /**
     * @brief Ejecuta una función sobre cada elemento de la pila.
     *
     * @param func Función a ejecutar sobre cada elemento de la pila.
     */
    void foreach(const std:: function < void(T & ) > & func) {
      std::for_each(data_.begin(), data_.end(), func);
    }
  };

/**

@brief Función principal del programa que crea una instancia de Stack<int> y Stack<float>
empuja tres valores y los imprime usando el método foreach. Luego, le hace pop a los valores
y los imprime en la consola, y maneja cualquier excepción que pueda surgir si se desapila de una pila vacía.
@return 0.
*/
int main() {
  Stack < int > s;
  s.push(2021); ///se insertan estos números a la pila
  s.push(2054);
  s.push(6524);
  std::cout << "Stack size: " << s.size() << std::endl; /// da el tamaño de la pila

  s.foreach([](int & value) { ///Función que itera sobre cada elemento del vector
    std::cout << "Value: " << value << std::endl; //Imprime los valores insertados en la pila
  });

  try {
    while (!s.empty()) { ///Mientras la pila no este vacía entra al while
       int value = s.pop(); /// Saca cada elemento de la pila
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl; ///Si la pila está vacía dispara la exepción
  }

  Stack < float > f; /// Instancia para usar el template con tipo de dato float
  f.push(20.4); ///se insertan estos números a la pila
  f.push(100.5);
  f.push(3.14);
  std::cout << "Stack size: " << f.size() << std::endl; /// da el tamaño de la pila
  f.foreach([](float & value) { ///Función que itera sobre cada elemento del vector
    std::cout << "Value: " << value << std::endl; //Imprime los valores insertados en la pila
  });

  try {
    while (!f.empty()) { ///Mientras la pila no este vacía entra al while
       float value = f.pop(); /// Saca cada elemento de la pila
      std::cout << "Popped value: " << value << std::endl;
    }
    // f.pop(); // Sentencia que dispara la exepción out of range
    std::cout << "Stack size: " << f.size() << std::endl;
  } catch (const std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl; ///Si la pila está vacía dispara la exepción
  }


  return 0;
}