#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    cout<<22/7.0<<endl;    //output -> 3.14286
    cout<<setprecision(2)<<22/7.0;  //output -> 3.1

    return 0;
}