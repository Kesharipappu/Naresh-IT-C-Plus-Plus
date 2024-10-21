#include <iostream>
using namespace std;

class Test
{
    private:
        int a, b;
    public:
        void show()
        {
            a = 10;
            b = 20;
            cout<<"Object Address = "<<this<<endl; //Output -> Object Address = 0x62ff18       //Object address will be in the form of Hexadecimal
            cout<<"a = "<<this->a<<endl;  //Output -> a = 10
            cout<<"b = "<<this->b<<endl;  //Output -> b = 20
        }
};

int main()
{
    Test t;
    t.show();

    return 0;
}