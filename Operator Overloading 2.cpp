#include <cstring>
#include <iostream>
using namespace std;

// Overloading + operator

class Test
{
    private:
        char st[100];
    public:
        void read()
        {
            cout<<"Enter String ";
            cin>>st;
        }
        void show()
        {
            cout<<"String = "<<st<<endl;;
        }
        Test operator + (Test t2)
        {
            Test T3;
            strcpy(T3.st,st);
            strcat(T3.st," ");
            strcat(T3.st, t2.st);
            return T3;        }
};

int main()
{
    Test t1, t2, t3;
    t1.read();
    t2.read();
    t3 = t1 + t2;
    t3.show();

    return 0;
}