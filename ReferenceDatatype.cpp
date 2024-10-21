#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int &b = a;
    int &c = b;
    
    cout<<a<<"\t"<<b<<"\t"<<c<<endl; //output -> 100     100     100

    c = 200;
    cout<<a<<"\t"<<b<<"\t"<<c<<endl; //output -> 200     200     200

    a = 300;
    cout<<a<<"\t"<<b<<"\t"<<c<<endl; //output -> 300     300     300

    b = 400;
    cout<<a<<"\t"<<b<<"\t"<<c<<endl; //output -> 400     400     400

    c = 500;
    cout<<a<<"\t"<<b<<"\t"<<c<<endl; //output -> 500     500     500

    return 0;
}

// Reference variable means aliasing the name of variable. Eg -> int a = 100, &b = a, &c = b; just like a = b = c;