#include <iostream>
#include "headerSort.hpp"

// Se implementa la funcion main para probar los algoritmos
int main() {
    // Array desordenado
    int arr1[] = {77, 43, 75, 213, 14};
    int arr2[] = {1, 23, 15, 12, 54};
    int arr3[] = {98, 2, 56, 1, 23};
    int arr4[] = {67, 77, 33, 21, 3};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int n4 = sizeof(arr4) / sizeof(arr4[0]);

    std::cout << "Array antes de ordenamiento:" << std::endl;
    for (int i = 0; i < n1; i++) {
        std::cout << arr1[i] << " ";
    } 
    std::cout << "\n" << std::endl;

    std::cout << "Array antes de ordenamiento:" << std::endl;
    for (int i = 0; i < n2; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << "\n" << std::endl;

    std::cout << "Array antes de ordenamiento:" << std::endl;
    for (int i = 0; i < n3; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << "\n" << std::endl;

    std::cout << "Array antes de ordenamiento:" << std::endl;
    for (int i = 0; i < n4; i++) {
        std::cout << arr4[i] << " ";
    }
    std::cout << "\n" << std::endl;

    // Llamada a los algoritmos de ordenamiento
    bubbleSort(arr1, n1);
    selectionSort(arr2, n2);
    insertionSort(arr3, n3);
    quickSort(arr4, 0, n4-1);

    std::cout << "\n\nArray despues de ordenamiento:" << std::endl;
    for (int i = 0; i < n1; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << "\n" << std::endl;

    std::cout << "\n\nArray despues de ordenamiento:" << std::endl;
    for (int i = 0; i < n2; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << "\n" << std::endl;

    std::cout << "\n\nArray despues de ordenamiento:" << std::endl;
    for (int i = 0; i < n3; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << "\n" << std::endl;

    std::cout << "\n\nArray despues de ordenamiento:" << std::endl;
    for (int i = 0; i < n4; i++) {
        std::cout << arr4[i] << " ";
    }
    std::cout << "\n" << std::endl;

    return 0;
}
