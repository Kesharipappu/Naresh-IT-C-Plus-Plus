#include <cstdlib>
#include <iostream>
using namespace std;

class Test
{
    public:
        Test()
        {
            cout<<"I am Constructor"<<endl;
        }
        ~Test()
        {
            cout<<"I am Destructor"<<endl;
        }
};

int main()
{
    system("cls");
    try
    {
        cout<<"Welcome to Exception Handling"<<endl;
        Test t;
        throw 10;   // When throw occurs then destructor will execute automatically
        cout<<"Testing Destructor"<<endl; // This line will not disply on console. Because after throw it will escape all lines 
    }
    catch(...)   // It will accept any exception
    {
        cout<<"Thank You";
    }

    return 0;
}