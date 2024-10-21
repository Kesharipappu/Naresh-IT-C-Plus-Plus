#include <cstdlib>
#include <iostream>
using namespace std;

template <class t> //here is only one <class t> because user can pass value either int or float from main function. t is called place holder
t sum(t a, t b)    //  This t is return type which depends on value passed by user from main function <--t sum(t a, t b)
{                  // We can create    t sum(t a, t b, t c, t d,..........., t n) as per our requirement. Here I need only two so I declared t sum(t a, t b)
    return a + b;
}

int main()
{
    system("cls");
    cout<<"int Sum = "<<sum(10, 20)<<endl; //here passing both value (int, int)
    cout<<"float Sum = "<<sum(15.50, 20.37)<<endl; //here passing both value (float, float)

/*
    Generic Means one function for different Task or function.
    Generic Functions are Functions Template
    Function Template or Generic Function

    Note : -> Below two lines will show error, because we have created only one template <class t> which will accept
    either (int, int) or (float, float) value. Not (int, float)  and (float, int). 
    To overcome this problem we will have to create template <class t1, class t2>  then below two lines will 
    work properly. Now user can pass (i) (int , int) (ii) (float, float) (iii) (float, int) (iv) (int, float) value 
    from main function. Here t1 and t2 place holder will change according to data type pass by user from main function.
    It's example has been given in Program Templates or Generics Part 2.cpp
            
    cout<<"int & float Sum = "<<sum(10, 12.50)<<endl;
    cout<<"float & int Sum = "<<sum(12.50, 50)<<endl;
*/

    return 0;
}

