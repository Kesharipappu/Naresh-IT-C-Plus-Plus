#include <iostream>
using namespace std;

class Test
{
    public:
        static void read(int x, int y)   // static member function works on static data member only.  
        {                                // static member function are not called by this pointer.
            if(x > y)                    // static member function are called by both class name as well as object name.
                cout<<"x is Greater"<<endl;
            else if (x < y)
             cout<<"y is Greater"<<endl;
            else
             cout<<"Both are Equal"<<endl;
        }
};

int main()
{
    Test T1;
    T1.read(10, 7);  // Calling static member function by object name

    Test :: read(20, 33);  // Calling static member function by Class name. Only Static member function are called by class name. We can't call non static member function by class name

    Test :: read(5, 5);    // Calling static member function by Class name. Only Static member function are called by class name. We can't call non static member function by class name

    return 0;
}