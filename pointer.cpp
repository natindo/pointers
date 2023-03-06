#include <iostream>
#include "pointer.h"

Flag::Flag () {
    flag = true;
    flagSwitch = true;
}

bool Flag::GetFlag () {
    return flag;
}

bool Flag::GetFlagSwitch () {
    return flagSwitch;
}

void Flag::SetFlag (bool flag) {
    this->flag = flag;
}

void Flag::SetFlagSwitch (bool flagSwitch) {
    this->flagSwitch = flagSwitch;
}

Pointer::Pointer () {
    std::cout << "Конструктор" << std::endl;
    size = 0;
    p = 0;
}

void Pointer::SetSize () {
    int size;
    std::cin >> size;
    this->size = size;
}

void Pointer::Memory () {
    p = new double [size];
}

void Pointer::Filling () {
    for (size_t i = 0; i < size; i++) {
            p[i] = rand() % 20;
        }
    }

void Pointer::Print () {
    for (size_t i = 0; i < size; i++) {
        std::cout << p[i] << "  " << std::endl;
    }   
}

void Pointer::Delete () {
    delete[] p;
}
