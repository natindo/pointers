#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Point 
{
public:
    Point() 
    {
        x = y = z = 0;
    };
    Point(int x, int y, int z) 
    {
        this -> x = x;
        this -> y = y;
        this -> z = z;
    };

    
private:
    int x, y ,z;
};

template <typename T1>
class MyClass 
{
public:
    MyClass (T1 value)
    {
        this -> value = value;
    }

    void DataTypeSize ()
    {
        cout << sizeof(T1) << endl;
    }
protected:
    T1 value;
};

template <typename T1>
class TypeInfo : public MyClass<T1>
{
public:
    TypeInfo (T1 value): MyClass<T1> (value)
    {

    }

    void Show ()
    {
        cout << typeid(this -> value).name() << endl;
    }
};

template <typename T1>
class Printer 
{
public:
    void Print (T1 value)
    {
        cout << value << endl;
    }
};

template<>
class Printer <string>
{
public:
    void Print (string value) 
    {
        cout << "__" << value << "__" << endl;
    }
};

int main (void)
{
    Point point;
    TypeInfo<Point> a(point);
    //a.Show();

    Printer<string> printer;

    printer.Print("heelo");

    return 0;
}