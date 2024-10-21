#include <iostream>
using namespace std;

int sum(int x = 1, int y = 2, int z = 3);  //Function Declaration or Function Prototype

int main()
{
    cout<<"Sum = " <<sum(10, 20, 30)<<endl;
    cout<<"Sum = "<<sum(10, 20)<<endl;
    cout<<"Sum = "<<sum(10)<<endl;
    cout<<"Sum = "<<sum()<<endl;

    return 0;
}

int sum(int x, int y, int z)
{
    return x + y + z;
}