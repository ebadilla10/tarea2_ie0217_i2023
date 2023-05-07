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
#include <functional>

// Declaración de la clase Stack como una plantilla (template)
template<typename T>
class Stack {
private:
  std::vector<T> data_;  // Vector que contiene los datos de la pila

public:
  // Método para agregar un elemento a la pila
  void push(T value) {
    data_.push_back(value);
  }

  // Método para eliminar y devolver el último elemento agregado a la pila
  T pop() {
    if (data_.empty()) {  // Si la pila está vacía, lanzar una excepción
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();  // Obtener el último elemento agregado
    data_.pop_back();  // Eliminar el último elemento agregado
    return value;  // Devolver el último elemento agregado
  }

  // Método para vaciar la pila
  void clear() {
    data_.clear();
  }

  // Método para verificar si la pila está vacía
  bool empty() const {
    return data_.empty();
  }

  // Método para obtener el tamaño de la pila
  std::size_t size() const {
    return data_.size();
  }

  // Método para recorrer la pila y aplicar una función a cada elemento
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

int main() {
  // Crear una pila de enteros y agregar algunos valores
  Stack<int> s;
  s.push(2021);
  s.push(2054);
  s.push(6524);

  // Imprimir el tamaño de la pila
  std::cout << "Stack size: " << s.size() << std::endl;

  // Recorrer la pila y imprimir cada valor
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  try {
    // Eliminar todos los elementos de la pila y mostrar el valor eliminado en cada iteración
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    // Imprimir el tamaño de la pila después de eliminar todos los elementos
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    // Manejar excepciones si la pila está vacía y se intenta eliminar un elemento
    std::cerr << "Exception: " << e.what() << std::endl;
  }

   
  // Stack<std::string> string_stack;
  // string_stack.push();
  // string_stack.push();
  // string_stack.push();
  // string_stack.pop();

  Stack<std::string> string_stack;
  string_stack.push("Julian");
  string_stack.push("Martha");
  string_stack.push("Oscar");

  std::cout << "tamanio del stack: " << string_stack.size() << std::endl;

  string_stack.foreach([](std::string& value) {
    std::cout << "Value: " << value << std::endl;
  });

  try {
    while (!string_stack.empty()) {
      std::string value = string_stack.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "String stack size: " << string_stack.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
