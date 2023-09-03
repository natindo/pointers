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


Flag flag;
Pointer pointer;
    
void testPointer () {
    while (flag.GetFlag()) {
        std::cout << "Введите 1 для продолжния работы, 2 для выхода" << std::endl;
        int a;
        std::cin >> a;
        switch (a) {
        case 1:
            flag.SetFlagSwitch(true);
            break;
        case 2:
            flag.SetFlagSwitch(false);
            flag.SetFlag(false);
            break;
        default:
            std::cout << "Введено не правильное значение" << std::endl;
            break;
        }

        if (flag.GetFlagSwitch()) {
            std::cout << "Введите размер массива" << std::endl;
            pointer.SetSize();
            pointer.Memory();
        }

        while (flag.GetFlagSwitch()) {
            int ans;
            std::cout << "Введите 1 для заполнения массива, 2 для вывода массива, 3 для удаления массива" << std::endl;
            std::cin >> ans;

            switch (ans) {
            case 1:
                pointer.Filling();
                break;

            case 2:
                pointer.Print();
                break;

            case 3:
                pointer.Delete();
                flag.SetFlagSwitch(false);
                break;
                
            default:
                std::cout << "Введено не правильное значение" << std::endl;
                break;
            }
        }
    }
}