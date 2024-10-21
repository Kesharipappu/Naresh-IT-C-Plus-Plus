#include <iostream>
using namespace std;

class Test2; //Forward declaration

class Test1
{
    private:
        int a;
    public:
        void geta()
        {
            cout<<"Enter Value of a ";
            cin>>a;
        }
        friend void big(Test1, Test2);
};

class Test2
{
    private:
        int b;
    public: 
        void getb()
        {
            cout<<"Enter Value of b ";
            cin>>b;
        }
        friend void big(Test1, Test2);
};

void big(Test1 T1, Test2 T2) // T1 and T2 are class type arguments
{
    if(T1.a > T2.b)
        cout<<"a is greater";
    else if (T1.a < T2.b)
        cout<<"b is greater";
    else
        cout<<"Both are equal";
}

int main()
{
    Test1 t1;
    Test2 t2;

    t1.geta();
    t2.getb();

    big(t1, t2); //Friend function are not called by object name [like -> t1.big()]. Friend function are called directly. Because Friend function are not member function of class. It takes object as an arguments

    return 0;
}