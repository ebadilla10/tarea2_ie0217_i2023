#include <iostream>
#include "headerSort.hpp"
using namespace std;

int main() {

   // Declarar arrays para probar cada algoritmo
   int arrBubble[] = {5,7,9,1,0,6,8,2,4};
   int arrSelection[] = {5,7,9,1,0,6,8,2,4};
   int arrInsertion[] = {5,7,9,1,0,6,8,2,4};
   int arrQuick[] = {5,7,9,1,0,6,8,2,4};

   // Imprimir el orden original
   cout << "Arreglo original:" << endl;
   for (int i = 0; i < 9; i++) {
        std::cout << arrBubble[i] << " ";
    }
    cout << endl;

   // Ordenar los arreglos
   bubbleSort(arrBubble, 9);
   selectionSort(arrSelection, 9);
   insertionSort(arrInsertion, 9);
   quickSort(arrQuick, 0, 8);
   
   // Imprimir los areglos ordenados
   // Bubble array
   cout << "Con el algoritmo Bubble Sort: " << endl;
   for (int i = 0; i < 9; i++) {
        std::cout << arrBubble[i] << " ";
   }
   cout << endl;

    // Selection array
   cout << "Con el algoritmo Selection Sort: " << endl;
   for (int i = 0; i < 9; i++) {
        std::cout << arrSelection[i] << " ";
   }
   cout << endl;

   // Insertion array
   cout << "Con el algoritmo Insertion Sort: " << endl;
   for (int i = 0; i < 9; i++) {
        std::cout << arrInsertion[i] << " ";
   }
   cout << endl;
   
   // Insertion array
   cout << "Con el algoritmo Quick Sort: " << endl;
   for (int i = 0; i < 9; i++) {
        std::cout << arrQuick[i] << " ";
   }
   cout << endl;

}