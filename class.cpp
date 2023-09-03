#include <iostream>
#include <string>

class Human {

public:
    int age;
    int weight;
    std::string name;

    void Print () {
        PrintName();
        PrintAge();
        PrintWeight();
    }

private:
    void PrintName () {
        std::cout << name << std::endl;
    }

    void PrintAge () {
        std::cout << age << std::endl;
    }

    void PrintWeight () {
        std::cout << weight << std::endl;
    }

};

class Point {
private:
    int x;
    int y;

public:

    Point (int valueX, int valueY) {
        x = valueX;
        y = valueY;
    }

    Point () {
        x = 0;
        y = 0;
    }

    int GetX () {
        return x;
    }

    void SetX (int valueX) {
        x = valueX;
    }

    void Print () {
        std::cout << x << ' ' << y << std::endl;
    }

};

class MyClass {

private:
    int x;

public:
    MyClass () {
        std::cout << "Конструктор  " << this << std::endl;
    }

    void Debag () {
        std::cout << "Debag" << std::endl;

        //std::cout << this << std::endl;

        //this->Debag();
    }

    ~MyClass () {
        std::cout << "Деструктор  " << this << std::endl;
    }

};

void ClassHuman () {
    Human firstHuman;

    firstHuman.age = 30;
    firstHuman.name = "Ivanov";
    firstHuman.weight = 60;

    firstHuman.Print();

    //std::cout << firstHuman.age << std::endl;
}

void ClassPoint () {
    Point a(4, 10);
    Point b;

    a.Print();
    b.Print();
}

void ClassMyClass () {
    MyClass myClass;
    MyClass kek (myClass);

    myClass.Debag();

    //std::cout << "kekekekekekek" << std::endl;;
}
