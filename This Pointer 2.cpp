#include <iostream>
using namespace std;

class Test
{
    private:
        int a, b;   // a and b are data members
    public:
        void setData(int a, int b)   // a and b are local variables
        {
            // a = a;   // It will give garbage value, Because local varible a has high priority rather than data member a and local variable a has not been initialize so it will store garbage value in a and print garbage value
            // b = b;   // It will give garbage value, Because local varible b has high priority rather than data member b and local variable b has not been initialize so it will store garbage value in b and print garbage value

            this->a = a; // this->a means data member of class Test and a means value which is comming to parameters. i.e -> Local Variable
            this->b = b; // this->b means data member of class Test and b means value which is comming to parameters. i.e -> Local Variable

            //Below Two lines are Same as just above two lines
            // (*this).a = a;
            // (*this).b = b;
        }
        void getData()
        {
            cout<<a<<"\t"<<b;
        }
};

int main()
{
    Test t;
    t.setData(10, 20);
    t.getData();

    return 0;
}