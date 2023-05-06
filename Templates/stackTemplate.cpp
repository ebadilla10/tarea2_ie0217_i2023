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

#include <iostream> // Libreria para la Entrada y Salida de datos
#include <vector> // Librería para que puedan utilizarse vectores
#include <algorithm> // Libreria para que pueda utilizarse el algoritmo for_each
#include <stdexcept> // Libreria para poder utilizar excepciones
#include <functional> // Libreria para poder utilizar std::function

// Se define la clase Stack y se declara la plantilla de clase llamada 'T'
template<typename T>
class Stack {
private:
  // Este vector se encarga de guardar los elementos de la pila  
  std::vector<T> data_; 

public:
  // Este método se encarga de insertar valores en la pila
  void push(T value) {
    data_.push_back(value);
  }

  // Por otro lado, este método es el encargado de extraer el primer valor en la pila 
  T pop() {
    if (data_.empty()) {
      // Este código se encarga de lanzar un mensaje con la excepción std::out_of_range si la pila se encuentra vacía
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();   // Se encarga de guardar el valor del ultimo elemento
    data_.pop_back(); // El ultimo elemento es eliminado
    return value; // Retorna el valor del último elemento 
  }

  // Esta función limpia la pila 
  void clear() {
    data_.clear();
  }

  // Esta función verifica si la pila se encuentra vacía 
  bool empty() const {
    return data_.empty();
  }

  // Con esta función se obtiene el tamaño de la pila 
  std::size_t size() const {
    return data_.size();
  }

  // Esta función aplica las funciones a cada uno de los elementos de la pila 
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

int main() {
  // Se crea una instancia de la clase Stack<int>
  Stack<int> s;

  // Se envían valores enteros a la pila
  s.push(2021);
  s.push(2054);
  s.push(6524);

  // Imprime en pantalla el tamaño de la pila 
  std::cout << "Stack size: " << s.size() << std::endl;

  // Imprime un valor 
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  // Esta sección elimina los elementos de la pila hasta vaciarlo y lo muestra en la consola
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
