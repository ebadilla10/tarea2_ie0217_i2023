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

// Para saber si son necesarios los includes o no
#include <iostream>   // Se utiliza para la entrada y salida estandar, si es necesario
#include <vector>     // Para poder utilizar vectores, por lo tanto si es necesario
#include <algorithm>  // Si es necesario porque se usa para la funcion for_each, o elementos de secuencia
#include <stdexcept>  // Brinda en cierta forma clases, para poder controlar excepciones estandar, como por ejemplo out_fo_range
#include <functional> // Se usa para definir y trabajar con objetos
// Por lo tanto, todos los includes si son necesarios para compilar y ejecutar el codigo

// En el siguiente codigo se tiene un tipo de template de clase para un stack(pila) 
// Se inicia con la declaracion del template de clase por medio del parametro del template
// typename T y luego se tiene la clase stack
template<typename T>
class Stack {

// Luego declara un vector vector de tipo T privado llamado data, para almacenar los 
// elementos de stack
private:
  std::vector<T> data_;

// Ahora se declara una funcion, se le llama push, la cual toma el argumento del tipo T,
// y que luego agrega el valor al final del vector data_ usando la funcion push_back
public:
  void push(T value) {
    data_.push_back(value);
  }
// Continuando, se declara la funcion pop, que elimina el elemento mas reciente del stack
// y lo devuelve, en caso que el stack este vacio se pasa la excepcion out_of_range
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }
// Se declara una funcion publica denominada clear, que borra todos los elementos del stack.
  void clear() {
    data_.clear();
  }
// Ahora se declara la funcion empty que es publica que tiene como final retornar un tipo booleano
// que indica si la pila esta vacia o no lo esta vacia o no lo esta
  bool empty() const {
    return data_.empty();
  }
// En la siguiente funcion publica se declara la denominada size, el cual devuelve el tamaño del stack
  std::size_t size() const {
    return data_.size();
  }

// Ahora se declara la funcion publica denominada foreach que toma un funcion de referencia de tipo void, 
// donde se tiene como argumento y la aplica a cada elemento del stack utilizando la funcion for_each
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};


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
