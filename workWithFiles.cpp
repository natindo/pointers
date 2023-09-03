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

int main (void)
{
    string path = "myfile.txt";
    /*
    fout.open(path, ofstream::app);

    if (!fout.is_open()) 
    {
        cout << "error" << endl;
    } 
    else 
    {
        fout << "Данные";
    }

    fout.close();
    */
    /*
    ifstream fin;

    fin.open(path);

    if (!fin.is_open())
    {
        cout << "error" << endl;
    }
    else
    {
        cout << "NICE" << endl;
        char ch;
        string str;
        while (!fin.eof())
        {
            str = "";
            getline(fin, str);
            cout << str;
        }
    }
    fin.close();
    */
    /*
    Point point (5, 10, 46);
    ofstream fout;
    fout.open(path, ofstream::app);

    if (!fout.is_open())
    {
        cout << "error" << endl;
    }
    else
    {
        cout << "open" << endl;
        fout.write((char*)&point, sizeof(Point));
    }
    fout.close();

    ifstream fin;
    fin.open(path);
    Point pnt;

    if (!fin.is_open())
    {
        cout << "error" << endl;
    }
    else 
    {
        cout << "open" << endl;

        while (fin.read((char*)&pnt, sizeof(Point)))
        {
            pnt.Print();
        }
    }
    fin.close();
    */
    /*
   fstream fs;
   fs.open(path, fstream::in | fstream::out | fstream::app);
   if (!fs.is_open())
   {
       cout << "error" << endl;
   }
   else
   {
        int value;
        string msg;
        cout << "NICE" << endl;

        cin >> value;
        switch (value)
        {
        case 1:
            cin >> msg;
            fs << msg << "\n";
            break;

        case 2:
            cout << "kek" << endl;
            while(!fs.eof())
            {
                msg = "";
                fs >> msg;
                cout << msg << endl;
            }
            break;
        
        default:
            break;
        }

   }
   
   fs.close();

   */

    return 0;
}