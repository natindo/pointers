#include <iostream>

template <typename T1>
void CreateTwoDimensionalArray (T1 num, T1 col) {
    int **arr = new int* [num];
    for (size_t i = 0; i < num; i++) {
        arr [i] = new int [col];
    }

    for (size_t i = 0; i < num; i++) {
        for (size_t j = 0; j < col; j++) {
            arr[i][j] = rand() % 20;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    

    for (size_t i = 0; i < num; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

void FillArray (int* const arr, const int size) {
    for (size_t i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
}

void PrintArray (const int* const arr, const int size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << "\t";
    }
    
}

void push_back (int *&arr, int &size, const int value) {
    int* newArray = new int [size+1];

    for (size_t i = 0; i < size; i++) {
        newArray [i] = arr [i];
    }

    newArray[size] = value;
    size++;

    delete[] arr;

    arr = newArray;
}

void pop_back (int *&arr, int &size) {
    size--;
    int* newArray = new int [size];
    for (size_t i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }

    delete[] arr;
    
    arr = newArray;
}

void push_front (int *&arr, int &size, const int value) {
    int* newArray = new int [size + 1];

    for (size_t i = 0; i < size; i++) {
        newArray[i + 1] = arr[i];
    }
    size++;

    newArray[0] = value;

    delete[] arr;

    arr = newArray;
}

void pop_front (int *&arr, int &size) {
    size--;
    int* newArray = new int [size];

    for (size_t i = 0; i < size; i++) {
        newArray[i] = arr[i + 1];
    }

    delete[] arr;
    
    arr = newArray;
}

void push_index (int *&arr, int &size, const int value, const int index) {

    int* newArray = new int [size + 1];

    for (size_t i = 0; i < size; i++) {
        if (i >= index) {
            newArray[i + 1] = arr[i];
        } else {
        newArray[i] = arr[i];
        }
    }
    newArray[size + 1] = arr[size];
    newArray[index] = value;

    size++;
    
    delete[] arr;

    arr = newArray;
}

void pop_index (int *&arr, int &size, const int index) {

    int* newArray = new int [size - 1];

    for (size_t i = 0; i < size; i++) {
        if (i < index) {
            newArray[i] = arr[i];
        } else if (i > index) {
            newArray[i - 1] = arr[i];
        }
    }
    size--;

    delete[] arr;

    arr = newArray;
}
