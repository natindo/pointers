#include <iostream>
#include <string>

using namespace std;

class IBicycle 
{
public:
    void virtual EwwisrTheWheel () = 0;
    void virtual Ride () = 0;
};

class SimpleBicycle : public IBicycle
{
public:
    void EwwisrTheWheel()
    {
        cout << "kek";
    }
    void Ride ()
    {
        cout << "lol";
    }
};

class SportBicycle : public IBicycle
{
public:
    void EwwisrTheWheel()
    {
        cout << "Sporkek";
    }
    void Ride ()
    {
        cout << "Sporlol";
    }
};

class Human 
{
public:
    void RideOn (IBicycle &bycycle)
    {
        cout << "крутим руль" << endl;
        bycycle.EwwisrTheWheel();
        cout << endl << "поехали" << endl;
        bycycle.Ride();
    }
};

int main ()
{
    Human human;
    SimpleBicycle sb;
    SportBicycle ssb;

    human.RideOn(ssb);

    return 0;
}