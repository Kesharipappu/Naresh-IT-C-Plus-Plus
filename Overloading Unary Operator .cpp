#include <iostream>
using namespace std;

class Test
{
    private:
        int a;
    public:
        Test()  // Default Constructor
        {
            a = 0;
        }
        void operator ++() // Prefix Increment Operator Overloading. We can write either operator ++ or operator++. Space is optional between operator ++. We can give or not space
        {
            a++;
        }
        void operator --()  // Prefix Decrement Operator Overloading
        {
            a--;
        }
        void operator ++(int)  // Postfix Increment Operator Overloading
        {
            a++;
        }
        void operator --(int)   // Postfix Decrement Operator Overloading
        {
            a--;
        }
        void show()
        {
            cout<<"a = "<<a<<endl;
        }
};

int main()
{
    Test t;
    t.show();

    ++t;   // Prefix Increment Operator Overloading Calling
    t.show();

    --t;    // Prefix Decrement Operator Overloading Calling
    t.show();

    t++;    // Postfix Increment Operator Overloading Calling
    t.show();

    t--;    // Postfix Decrement Operator Overloading Calling
    t.show();

    return 0;
}