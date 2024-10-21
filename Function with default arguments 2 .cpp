#include <iostream>
using namespace std;

float si(float p, float t, float r = 3)
{
    return (p*t*r)/100;
}

int main()
{
    cout<<"Simple Interest is = "<<si(1000, 10, 2)<<endl;
    cout<<"Simple Interest is = "<<si(1000, 10)<<endl;


    return 0;
}