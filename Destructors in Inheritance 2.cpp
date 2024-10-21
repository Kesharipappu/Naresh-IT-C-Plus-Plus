#include <cstdlib>
#include <iostream>
using namespace std;

class Base
{
    public:
        ~Base()
        {
            cout<<"Base Class Destructor"<<endl;
        }
};

class Derived :public Base
{
    public:
        ~Derived()
        {
            cout<<"Derived Class Destructor"<<endl;
        // ~Base :: Base(); Compiler implicitly add Base class Destuctor within derived class Destructor. This line will be conducted by compiler automatically           
        }
};

int main()
{
    system("cls");
    Derived der;

    return 0;
}