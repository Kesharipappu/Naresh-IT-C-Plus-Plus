#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    
    try
    {
        cout<<"Before throw"<<endl;
        throw 1;
        cout<<"After throw"<<endl;
    }
    catch(int x)
    {
        cout<<x<<" is printed"<<endl;
    }
    cout<<"Thank You !!!";

    return 0;
}