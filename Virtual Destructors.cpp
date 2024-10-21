#include <cstdlib>
#include <iostream>
using namespace std;

class Base
{
    public: 
        Base()
        {
            cout<<"Base Class Constructor"<<endl;
        }
        virtual ~Base()    // Virtual Descructor
        {
            cout<<"Base Class Destructor"<<endl;
        }
};

class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"Derived Class Constructor"<<endl;
        }
        ~Derived()
        {
            cout<<"Derived Class Destructor"<<endl;
        }
};

int main()
{
    system("cls");
    Base *b = new Derived;
    delete b;


    return 0;
}

/*
    NOTE :-> 

    1. If Destructor without virtual keyword. 

     ~Base() 
        {
            cout<<"Base Class Destructor"<<endl;
        }

        Then output will be :->
                                Base Class Constructor
                                Derived Class Constructor
                                Base Class Destructor   


    2. If destructor with virtual keyword.

        virtual ~Base()  
        {
            cout<<"Base Class Destructor"<<endl;
        }

        Then output will be :->
                                Base Class Constructor
                                Derived Class Constructor
                                Derived Class Destructor
                                Base Class Destructor

*/