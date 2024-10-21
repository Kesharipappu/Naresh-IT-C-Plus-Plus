#include <cstdlib>
#include <iostream>
using namespace std;

class C1
{
    public:
        void C1fun()
        {
            cout<<"C1 Class Function"<<endl;
        }
};

//If we declare virtual then only one copy will be passed to main function. virtual keyword is used to avoid duplicate copy of same class to mian function.

class C2 : virtual public C1  // we can declare either virtual public C1  or  public virtual C1 both are same
{
    public:
        void C2fun()
        {
            cout<<"C2 Class Function"<<endl;
        }
};

class C3 : virtual public C1   // we can declare either virtual public C1  or  public virtual C1 both are same
{
    public:
        void C3fun()
        {
            cout<<"C3 Class Function"<<endl;
        }
};

class C4 : public C2, public C3
{
    public:
        void C4fun()
        {
            cout<<"C4 Class Function"<<endl;
        }
};

int main()
{
    system("cls");
    C4 obj;
    obj.C1fun();
    obj.C2fun();
    obj.C3fun();
    obj.C4fun();

    return 0;
}