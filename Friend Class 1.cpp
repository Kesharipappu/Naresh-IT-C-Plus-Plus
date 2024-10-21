#include <iostream>
using namespace std;

class Test1      //It is called container class
{
    private:
        int a, b;
    public: 
        friend class Test2;

        void getab()
        {
            cout<<"Enter a and b value ";
            cin>>a>>b;
        }
};

class Test2      //It is called contained class
{
    public:
        void putab(Test1 t1)  //It has taken Test1 class object(t1) as parameter
        {
            cout<<"a = "<<t1.a<<endl;
            cout<<"b = "<<t1.b<<endl;
        }
};

//The above two class's relationship is called composition
//Declaring one class object inside another class is called composition

int main()
{
    Test1 T1;
    Test2 T2;

    T1.getab();
    T2.putab(T1);


    return 0;
};