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
// #include <stdexcept> //no es necesario para la compilación del programa
#include <functional>

// define el template para la clase Stack
template<typename T>
class Stack {
private:
// Miembros de clases privadas, únicamente accesibles por el método de clase
  std::vector<T> data_;

// Accesibles por todos
public:
// Introduce un nuevo valor a la pila
  void push(T value) {
    data_.push_back(value);
  }
// Saca el último valor de la pila y lo devuelve
  T pop() {
    if (data_.empty()) {
      // Si está vacía tira error
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }
// Limpia la pila
  void clear() {
    data_.clear();
  }
// Verifica si la pila está vacía
  bool empty() const {
    return data_.empty();
  }
// Retorna el tamaño de la pila
  std::size_t size() const {
    return data_.size();
  }
// Ejecuta una función por cada elemento de la pila
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

// Crea un stack de enteros, con nombre s
int main() {
  Stack<int> s;
  // Introduce 3 valores en la pila
  s.push(2021);
  s.push(2054);
  s.push(6524);
// Imprime el tamaño de la pila
  std::cout << "Stack size: " << s.size() << std::endl;
// Por cada elemento de la pila imprime su valor
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  try {
    // Mientras la pila no esté vacía, toma elementos de la pila y los imprime en consola
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
    // Una vez vacía, se imprime el tamaño, que sería 0.
  } catch (const std::exception& e) {
    // Cuando la pila está vacía, ocurre un error que es "atrapado" por este catch y se imprime en consola
    // la excepción
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  Stack<char> s2;
  // Introduce 3 valores en la pila
  s2.push('a');
  s2.push('b');
  s2.push('c');
// Imprime el tamaño de la pila
// Imprimse el tamaño de la segunda pila
  std::cout << "Stack size: " << s2.size() << std::endl;
  // Imprime cada valor de la segunda pila
  s2.foreach([](char& value) {
    std::cout << "Value: " << value << std::endl;
  });
  // Si sacamos 3 valores funciona perfecto, pero si se saca el último, que está comentado
  // tira el error out_of_range
  s2.pop();
  s2.pop();
  s2.pop();
  // s2.pop();
  return 0;
}
