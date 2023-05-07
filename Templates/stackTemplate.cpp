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

@file stackTemplate.cpp
@brief Contiene la parte sobre templates
**/

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

// En el siguiente codigo se tiene la funcion principial (main) del programa, 
// en
int main() {
  Stack<int> s;
  // Ahora se ingresan tres valores diferentes a la pila (stack) usando la funcion push
  s.push(2021);
  s.push(2054);
  s.push(6524);

  // Se imprime en la terminal el tamaño de  la pila utilizando la funcion size
  std::cout << "Stack size: " << s.size() << std::endl;

  // En la siguientes lineas, se usa la funcion foreach para imprimir cada valor del stack
  // en la terminal
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  // Ahora mediante un while que representa un bucle, para poder desapilar(pop) todos los 
  // valores de la pila y se imprimen en pantalla cada uno de los valores que se desapilaron, 
  // ademas se imprime en pantalla el tamaño de la pila al finalizar el bucle
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    // Para cuando se tenga el caso que ocurra una excepcion al poder intentar desapilar un 
    // valor de la pila vacia, se captura la excepcion y se imprime en pantalla un mesaje Error
    std::cerr << "Exception: " << e.what() << std::endl;
  }


  // Ahora se agrega una nueva instancia donde utilice el template dato, pero para otro tipo de dato. 
  // Agregar algunas lineas utilizando esta nueva instancia


  // Con ayuda de una investigacion se logra desarollar el siguiente codigo, donde se tiene el uso de 
  // una plantilla de clase stack que almacena elementos de tipo string, primero se crea una instancia stack 
  // llamada p
  Stack<std::string> p;
  
  // Ahora se agregan tres caracteres, Hola, Mundo y !, lo anterior al stack, que se proporciona como una 
  // funcion  que toma una referencia a cada uno de los valores del stack e imprime usando std::cout
  p.push("Hola");
  p.push("Mundo");
  p.push("!");

  std::cout << "Tamaño que posee la pila: " << p.size() << std::endl;

  // Despues se hace uso del metodo foreach para poder imprimir los valores del stack, que se proporciona
  // como una funcion que toma una referencia a cada valor del stack y lo imprime usando std::cout
  p.foreach([](std::string& value) {
    std::cout << "El Valor: " << value << std::endl;
  });

  // Luego, el el siguiente bloque se utiliza un bucle while para poder extraer todos los valores del stack
  // con el metodo pop y seguidamente se imprimen, entonces el bucle continua hasta que el stack se encuentre
  // vacia, despues se imprime el tamaño de la pila.
  try {
    while (!p.empty()) {
      std::string value = p.pop();
      std::cout << "Valor del pop: " << value << std::endl;
    }
    std::cout << "Tamano de la pila: " << p.size() << std::endl;
  } catch (const std::exception& e) {

    // Ahora en caso de producirse alguna excepcion durante la ejecusion del programa, se captura y 
    // luego se imprime el mensaje de error
    std::cerr << "Excepcion: " << e.what() << std::endl;
  }

  // Para el caso donde se dispare la excepcion un out_of_range presente en el template se tiene el siguiente codigo
  // Se deja comentado tal como se menciona en el enunciado
  
  // El codigo se crea un objeto myStack, cuando la pila esta vacia lo que hace es desencadenar la excepcion out_of_range
  // entonces para manejar esta excepcion se usa una estructura try y catch para poder capturar la excepcion y luego imprimir 
  // el mensaje de error

  //Stack<int> myStack;
  //try {
   // myStack.pop(); // Tratando de eliminar un elemento de una pila vacía
  //}
  //catch (const std::out_of_range& e) {
    //std::cerr << e.what() << std::endl; // Imprimir mensaje de error
  //}
  
  return 0;
}
