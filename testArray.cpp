#include <iostream>
#include "array.h"

void testArray (int *arr, int num) {
    FillArray (arr, num);
    PrintArray (arr, num);

    push_back (arr, num, 555);
    std::cout << "\n";
    PrintArray (arr, num);

    pop_back(arr, num);
    std::cout << "\n";
    PrintArray (arr, num);
    std::cout << std::endl;

    push_front(arr, num, 497);
    PrintArray (arr, num);
    std::cout << std::endl;

    pop_front(arr, num);
    PrintArray (arr, num);
    std::cout << std::endl;

    push_index(arr, num, 444, 2);
    PrintArray (arr, num);
    std::cout << std::endl;

    pop_index(arr, num, 2);
    PrintArray (arr, num);
    std::cout << std::endl;
}