#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    cout<<setfill('*');
    cout<<setw(5)<<1<<endl;
    cout<<setw(5)<<10<<endl;
    cout<<setw(5)<<100<<endl;
    cout<<setfill(' ');
    cout<<setw(5)<<1000<<endl;
    cout<<setw(5)<<10000<<endl;
    return 0;
}