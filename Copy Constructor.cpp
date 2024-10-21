#include <iostream>
using namespace std;

class Sample
{
    private:
        int a, b;
    public:
        Sample(int a, int b) //Parameterised Constructor
        {
            (*this).a = a;
            (*this).b = b;

            //Below two lines are same as just above two lines
            // this->a = a;
            // this->b = b;
        }
        //Copy Constructor is used to initialize one object with another object data
        //Copy Constructor are having class type parameter. 
        // Copy Constructor receives object as reference
        //When no copy constructor is found, compiler supplies its own copy constructor
        Sample(Sample &old)  //Copy Constructor
        {
            a = old.a;
            b = old.b;
        }

        void print()
        {
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};

int main()
{
    Sample s1(10, 20);
    Sample s2(s1);
    
    s1.print();
    s2.print();

    return 0;
}