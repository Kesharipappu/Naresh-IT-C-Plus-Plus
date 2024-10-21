#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    try
    {
        cout<<"Testing any Exception"<<endl;
        throw 10;  // Here we can use throw 10/throw 15.6/throw 'A'/throw "Pappu"  Means we cau throw any data type like -> int/char/float/double/long double/character/string
    }
    catch(...)   // Here catch(...)  three dots means it will accept any data type like -> int/char/float/double/long double/character/string
    {
        cout<<"Catched the thrown Value"<<endl;
    }

    return 0;
}