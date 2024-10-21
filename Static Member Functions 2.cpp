#include <iostream>
using namespace std;

class Sample
{
    private:
        static int a, b;  // Static data member declaration. Static data member should be declared inside class and defined outside the class
    public: 
        static void getdata()
        {
            cout<<"Eter Two Integers ";
            cin>>a>>b;
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};

int Sample :: a;  // Static data member definition outside class
int Sample :: b;  // Static data member definition outside class

int main()
{
    Sample sam;

    sam.getdata(); // Calling static function by object name

    Sample :: getdata();  // Calling static function by class name

    return 0;
}