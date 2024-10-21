#include <iostream>
using namespace std;
class Test2;

class Test1
{
    private:
        int a;
    public:
        void geta()
        {
            cout<<"Enter a Value ";
            cin>>a;
        }
        friend void operator > (Test1, Test2);
};

class Test2
{
    private:
        int b;
    public:
        void getb()
        {
            cout<<"Enter b Value ";
            cin>>b;
        }
        friend void operator > (Test1, Test2);
};

void operator > (Test1 t1, Test2 t2)  // t1 and t2 are Formal Parameters
{
    t1.a > t2.b ? cout<<"a is greater" : cout<<"b is greater";
}

int main()
{
    Test1 t1;   // t1 is Actual Parameter. Actual parameter and Formal Parameter name can be Same or Different
    Test2 t2;   // t2 is Actual Parameter. Actual parameter and Formal Parameter name can be Same or Different

    t1.geta();
    t2.getb();

    t1 > t2;  // Calling Operator Overloading

    return 0;
}