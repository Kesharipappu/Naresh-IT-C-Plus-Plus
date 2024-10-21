#include_next <iostream>
#include <utility>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;
    cout<<"Before Swap : "<<"a = "<<a <<"\tb = "<<b<<endl;
    swap(&a, &b);
    cout<<"After Swap : "<<"a = "<<a <<"\tb = "<<b<<endl;


    return 0;
}

