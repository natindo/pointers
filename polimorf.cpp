#include <iostream>

using namespace std;

// class Weapon
// {
// public:
//     virtual void Shoot () = 0;
// };

// class Gun : public Weapon 
// {
// public:
//     void Shoot() override 
//     {
//         std::cout << "Bang!" << std::endl;
//     }
// };

// class SubmachinGun : public Gun
// {
// public:
//     void Shoot() override {
//         std::cout << "BANGBANGBANG" << std::endl;
//     }
// };

// class Bazooka : public Weapon 
// {
// public:
//     void Shoot() override
//     {
//         std::cout << "badabum" << std::endl;
//     }
// };

// class Knife : public Weapon
// {
// public:
//     void Shoot() override {
//         std::cout << "VJUH" << std::endl;
//     }
// };

// class Player 
// {
// public:
//     void Shoot (Weapon *weapon)
//     {
//         weapon->Shoot();
//     }
// };

// class A
// {
// public:
//     A() 
//     {
//         cout << "выделена память под А" << endl;
//     }
//     virtual ~A() 
//     {
//         cout << "память освобожена А" << endl;
//     }
// };

// class B : public A
// {
// public:
//     B() 
//     {
//         cout << "выделена память под B" << endl;
//     }
//     ~B() 
//     {
//         cout << "память освобожена B" << endl;
//     }

// };

class Car 
{
public:
    void Use()
    {
        cout << "kek" << endl;
    }
};

class Airplane 
{
public:
    void Use() 
    {
        cout << "lol" << endl;
    }
};

int main (void) {

    return 0;   
}