#include <iostream>

class Flag {
private:
    bool flag;
    bool flagSwitch;

public:
    Flag () {
        flag = true;
        flagSwitch = true;
    }

    bool GetFlag () {
        return flag;
    }

    bool GetFlagSwitch () {
        return flagSwitch;
    }

    void SetFlag (bool flag) {
        this->flag = flag;
    }

    void SetFlagSwitch (bool flagSwitch) {
        this->flagSwitch = flagSwitch;
    }
};

class Pointer {
private:
    int size;
    double *p;

public:
    Pointer () {
        std::cout << "Конструктор" << std::endl;
        size = 0;
        *p = 0;
    }

    void SetSize () {
        int size;
        std::cin >> size;
        this->size = size;
    }

    void Memory () {
        p = new double [size];
    }

    void Filling () {
        for (size_t i = 0; i < size; i++) {
            p[i] = rand() % 20;
        }
    }

    void Print () {
        for (size_t i = 0; i < size; i++) {
            std::cout << p[i] << "  " << std::endl;
        }   
    }

    void Delete () {
        delete[] p;
    }

    ~Pointer () {
        std::cout << "Деструктор" << std::endl;
        delete[] p;
    } 
};