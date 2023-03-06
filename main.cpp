#include <iostream>
#include <ctime>
#include <string>
// #include "array.h"
// #include "string.h"
// #include "class.h"
#include "pointer.h"

int main(void) {
    srand(time(NULL));
    Flag flag;
    Pointer pointer;
    
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
  