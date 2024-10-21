#include <iostream>
using namespace std;

class Test
{
    private:
        int a, b;
    public:
        void read() // It is called modifier function. 
        {
            a = 10;
            b = 20;
        }
        // When any function is declared with constant (const) keyword then it is called accesser
        void show() const  // Constant member function is called Accessor. Because it can only access data member. It can't change data member
        {
            // a = 30;
            // b = 40; 
            //Just above two lines will give error because, we can't modify data member inside Assesser

            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};

int main()
{
    Test t;
    t.read();
    t.show();

    return 0;
}

