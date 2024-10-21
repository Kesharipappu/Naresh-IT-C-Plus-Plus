#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    try
    {
        cout<<"Welcome"<<endl;
        try
        {
            cout<<"To Inner Try Block"<<endl;
            throw 10;
        }
        catch(int x)
        {
            cout<<"Throw Working"<<endl;
            throw x;  // This throw x will be catched by outer catch block
        }
    }
    catch(int y)
    {
        cout<<"Catch of outer Try Block"<<endl;
    }
}