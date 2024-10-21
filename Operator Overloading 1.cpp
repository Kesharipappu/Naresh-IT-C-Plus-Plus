#include <iostream>
using namespace std;

// Overloading == Operator
/*
    These operators can't be overladed ->  (1) :: (2) . (3) .* (4) sizeof() (5) conditional ? :
*/

class Test
{
    private:
        int a;
    public:
        void get()
        {
            cin>>a;
        }
        void operator == (Test t2)
        {
            if(a == t2.a)
                cout<<"Object are equal ";
            else
                cout<<"Object are not equal ";
        }
};

int main()
{
    Test t1, t2;
    cout<<"Enter t1 object a Value ";
    t1.get();
    cout<<"Enter t2 object a Value ";
    t2.get();
    t1 == t2;

    return 0;
}