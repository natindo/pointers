#include <iostream>
#include <string>

using namespace std;

template <typename T>
class SmartPoint 
{
public:
    SmartPoint(T *ptr)
    {
        this->ptr = ptr;
    }
    ~SmartPoint()
    {
        delete ptr;
    }

    T& operator *()
    {
        return *ptr;
    }
private:
    T *ptr;
};


int main (void)
{
    SmartPoint<int> point = new int(5);

    cout << *point << endl;

    return 0;
}