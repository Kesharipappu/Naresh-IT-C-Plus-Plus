#include<iostream>
using namespace std;

template <class t>
class Test
{
    private:
        t a, b;
    public:
        void get()     //function definition     //It is inside  function so it is converted into inline function
        {
            cin>>a>>b;
        }
        
        t sum();     //function declaration

};

template <class t>    //function definition
t Test<t> :: sum()
{
    return a + b ;
}

int main()
{
    Test <int> t1;     //t1 is the object of class Test
    Test <float> t2;  //t2 is the object of class Test

    cout<<"Enter two integer numbers ";
    t1.get();
    cout<<"Sum of two integer is = "<<t1.sum()<<endl;

    cout<<"Enter two float numbers ";
    t2.get();
    cout<<"Sum of two float numbers is = "<<t2.sum();

    return 0;
}