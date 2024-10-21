#include <cstdlib>
#include <iostream>
using namespace std;

template <class t1, class t2> //Here creating <class t1, class t2> because user can pass value like
                              // (i) (int , int) (ii) (float, float) (iii) (float, int) (iv) (int, float) from main function
float sum(t1 x, t2 y)  //Here return type is float bacause float can hold value of int or float<--float sum(t1 x, t2 y)
{                      // If return type is int then it will give error, because int can't hold float value.
    return x + y;      // We can create   float sum(t1 x, t2 y, t3 z,..........., tn n) as per our requirement. Here I need only two so I declared float sum(t1 x, t2 y)
}

int main()
{
    system("cls");
    cout<<"int Sum = "<<sum(10, 20)<<endl; //here passing value(int, int)
    cout<<"float Sum = "<<sum(10.50,20.13)<<endl;  //here passing value(float, float)
    cout<<"int & float Sum = "<<sum(10.30, 20)<<endl; //here passing value(float, int)
    cout<<"float & int Sum = "<<sum(23, 23.89)<<endl; //here passing value(int, float)

    return 0;
}