#include <cstdlib>
#include <iostream>
using namespace std;

template <class t>  //It will accept only (i) (int, int) or (ii) (float, float)
t sum(t a, t b)   // We can create    t sum(t a, t b, t c, t d,..........., t n) as per our requirement. Here I need only two so I declared t sum(t a, t b)
{
    return a + b;
}

template <class t>  //It will accept only (i) (int, int, int) or (ii) (float, float, float)
t sum(t a, t b, t c)  // We can create    t sum(t a, t b, t c, t d,..........., t n) as per our requirement. Here I need only three so I declared t sum(t a, t b, t c)
{
    return a + b + c;
}

int main()
{
    system("cls");
    cout<<"Two int Sum = "<<sum(10, 20)<<endl; //here passing value(int, int)
    cout<<"Two float Sum = "<<sum(1.1, 2.2)<<endl; //here passing value(float, float)
    cout<<"Three int Sum = "<<sum(10, 20, 30)<<endl; //here passing value(int, int, int)
    cout<<"Three float Sum = "<<sum(1.1, 2.2, 3.3); //here passing value(float, float, float)

    return 0;
}
