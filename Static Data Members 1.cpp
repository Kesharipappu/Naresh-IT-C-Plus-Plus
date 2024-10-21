#include <iostream>
#include <utility>
using namespace std;

class Test
{
    public: 
        //static data member has two parts  1. Declaration  2. Definition
        static int a;  //static data member declaration
        void get()
        {
            cout<<"a = "<<a<<endl;
        }
};

//Syntax to declare Static data member -> returntype classname :: datamembername
int Test :: a = 10;  //Default Initial Value of Static data member is 0


int main()
{

    Test t;
    t.get();

    //To access static data member through class. static data member are access through class name as well as object name
    Test :: a = 100;

    //To access static data member through class. static data member are access through class name as well as object name
    cout<<"a = "<<Test::a<<endl;

   

    return 0;
}