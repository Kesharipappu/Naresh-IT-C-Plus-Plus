#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int intResult = add(5, 3);
    cout<<"Addition of integers : "<<intResult<<endl;

    double doubleResult = add(5.5, 3.3);
    cout<<"Addition of doubles : "<<doubleResult<<endl;

    return 0;
}