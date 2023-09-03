#include <iostream>

class MyClassCopy {
public:
    int *data;

    MyClassCopy (int size) {
        this -> Size = size;
        this -> data = new int[size];
        for (size_t i = 0; i < size; i++)
        {
            data[i] = i;
        }
        
        std::cout << "Вызвался конструктор " << this << std::endl;
    }

    MyClassCopy (const MyClassCopy &other) {
        std::cout << "Взыван конструктор копирования " << this << std::endl;
        this -> Size = other.Size;
        this -> data = new int[other.Size];

        for (size_t i = 0; i < other.Size; i++)
        {
           this->data[i] = other.data[i];
        }
        
    };

    MyClassCopy operator = (const MyClassCopy &other) {
        this -> Size = other.Size;
        std::cout << "Вызвался оператор = " << this << std::endl;

        if (this->data != nullptr) {
            delete[] data;
        }

        this -> data = new int[other.Size];
        for (size_t i = 0; i < other.Size; i++) {
           this->data[i] = other.data[i];
        }

        return *this;

    }

    ~MyClassCopy () {
        delete[] data; 
        std::cout << "Вызвался деструктор " << this << std::endl;
    }

private:
    int Size;

};

void Foo (MyClassCopy value) {
    std::cout << "Вызвалась функция FOO" << std::endl;
}

MyClassCopy Foo2 () {
    MyClassCopy temp (2);
    std::cout << "Вызвалась функция FOO2 " << std::endl;
    return temp;
}

int main () {
    MyClassCopy a(1);
    MyClassCopy b(3);

    a = b;

    return 0;
}