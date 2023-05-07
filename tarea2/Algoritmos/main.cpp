#include <iostream>
#include <time.h>
#include <set>

#include "headerSort.hpp"


using namespace std;

#define SIZE_ARRAY 15



void printArray(int arr1[], int n1)
{
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}
    
    

int main() {
    //Bubble

    cout << "\n" << endl ;

    cout << "BubbleSort" << endl ;

    int arreglito[SIZE_ARRAY] = {};
    srand(time(NULL));
    int aleat = rand();

    for(int i = 0; i < SIZE_ARRAY; i++){ arreglito[i] = rand() % 100; }

    for(int i = 0; i < SIZE_ARRAY; i++){ cout << arreglito[i] << " "; }

    bubbleSort(arreglito, SIZE_ARRAY);
    cout << endl;
    for(int i = 0; i < SIZE_ARRAY; i++){ cout << arreglito[i] << " "; }

    cout << "\n" << endl ;

///////////////////////////////////////////////////////////////////////////////

    //Insertion
    cout << "InsertionSort" << endl ;

    int arr[] = { 12, 86, 10, 22, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "Ordenado array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n" << endl ;
    
///////////////////////////////////////////////////////////////////////////////

    //quick
    cout << "QuickSort" << endl ;

   int arr1[] = {10, 7, 8, 9, 1, 5};
    int n1 = sizeof(arr) / sizeof(arr[0]);

    cout << "Array no ordenado: ";
    printArray(arr1, n1);

    quickSort(arr1, 0, n1 - 1);

    cout << "Array ordenado: ";
    printArray(arr1, n1);

    cout << "\n" << endl ;
    
/////////////////////////////////////////////////////////////////////////////


    //selection ;

    cout << "SelectionSOrt" << endl ;

    int arr2[] = {64, 25, 12, 22, 11};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Original array: ";
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";
    cout << endl;

    selectionSort(arr2, n2);

    cout << "Sorted array: ";
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";

    cout << "\n" << endl ;

    return 0;
}

