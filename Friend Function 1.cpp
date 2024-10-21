#include <iostream>
using namespace std;

class Sample
{
    int a, b;
    friend void print(Sample);
};

void print(Sample s) // s is class type arguments
{
    s.a = 10;
    s.b = 20;
    cout<<"a = "<<s.a<<endl;
    cout<<"b= "<<s.b<<endl;
}

int main()
{
    Sample sam;
    print(sam); //Friend function are not called by object name [like -> t1.big()]. Friend function are called directly. Because Friend function are not member function of class. It takes object as an arguments

    return 0;
}