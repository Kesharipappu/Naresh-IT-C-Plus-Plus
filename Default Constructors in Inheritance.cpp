#include <cstdlib>
#include<iostream>
using namespace std;

class Base
{
    public:
        Base()  //Default Constructor
        {
            cout<<"Base Class Constructor "<<endl;
        }
};

class Derived : public Base
{
    public:
        Derived()   //Default Constructor
        {
            // Base :: Base(); Compiler implicitly add Base class constuctor within derived class constructor. This line will be conducted by compiler automatically
            cout<<"Derived Class Constructor "<<endl;                      
        }
};

int main()
{
    system("cls");
    Derived der;

    return 0;
}