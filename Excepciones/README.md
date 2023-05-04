##Excepciones


##1. Documentar
En este paso se documenta el código con formato Doxygen, el cual se llega a explicar cada clase y función y lo que retorna. Esto está en el file "exceptions.cpp". Para correr el programa se llevan a cabo las siguientes líneas de comando: "g++ .\exceptions.cpp -o .\exceptions.exe" y despues: ".\exceptions.exe", en la terminal, o también se puede poner el botón de "Compile and Run".


##2. División de archivos
En este caso se crean los archivos "exceptionsF.cpp", "exceptionsF.hpp" y el "main.cpp", los cuales contienen las clases, las funciones y la ejecución del programa por separado. Para correr el programa se llevan a cabo las siguientes líneas de comando: "g++ .\main.cpp -o .\main.exe" y despues: ".\main.exe", en la terminal, o también se puede poner el botón de "Compile and Run".


##3. Excepciones diferentes.
En este paso se crea el file "diferentes.cpp", el cual se crea para que se logren disparar tres diferentes errores de la librería común. el primer error es del de "runtime_error" el cual se lanza cuando hay un error en la ejecución del programa, el segundo error es el de "invalid_argument" el cual se lanza cuando hay un argumento invalido en una función, el tercer error es el de "out_of_range" el cual se produce cuando se intenta acceder a un índice fuera del rango de un vector o una pila en general.



##Ejecucion de los programas.
Para correr el programa se llevan a cabo las siguientes líneas de comando: "g++ .\diferentes.cpp -o .\diferentes.exe" y despues: ".\diferentes.exe", en la terminal, o también se puede poner el botón de "Compile and Run".
Tambien, para ejecutar los diferentes archivos se puede poner el comando "mingw32-make make", el cual creara un archivo ejecutable llamado "mainF.exe" y "diferentes.exe", los cuales son ejecutables con ".\mainF.exe", el cual desplega un error y ".\diferentes.exe", el cual desplega tres errores diferentes.