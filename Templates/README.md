##Templates

##1
Se puede saber que el unico #include que no se esta utilizando en este codigo es el de "#include <stdexcept>". Ya que en este programa no se utiliza la biblioteca estandar en las que se encuentran tipos de excepciones estandar de este tipo. En este caso no se esta cayendo en el error de "popear" o sacar elementos de un vector vacio, entonces la libreria no se utiliza para nada.

##5
La sentencia es un pop() (linea 70), el cual saca un elemento de la pila. En este caso estaria vacia, entonces no podria sacar nada, por eso se dispararia el "out_of_range".



##Ejecucion
Para correr el programa se llevan a cabo las siguientes lineas de comando: "g++ .\stackTemplate.cpp -o .\templates.exe" y despues: ".\templates.exe", en la terminal, o tambien se puede poner el boton de "Compile and Run".
Tambien se puede poner el comando "mingw32-make make", el cual creara un archivo ejecutable llamado "stack.exe", el cual es ejecutable con ".\stack.exe", el cual desplega el programa original con las modificaciones que se le hicieron.


