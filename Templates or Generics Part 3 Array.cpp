#include <cstdlib>
#include <iostream>
using namespace std;

template <class t>
t sum(t a[], int size) //It will take two values (array_name,  array_size). array size always be int. like 1, 2, 3...
{
    t s = 0;
    for(int i = 0; i < size; i++)
    {
        s = s + a[i];
    }
    return s;
}

int main()
{
    system("cls");
    int x[5] = {10, 20, 30, 40, 50};
    float y[3] = {1.1, 2.2, 3.3};

    cout<<"Int array elements Sum = "<<sum(x, 5)<<endl;
    cout<<"Float array elements Sum ="<<sum(y, 3)<<endl;

    return 0;
}