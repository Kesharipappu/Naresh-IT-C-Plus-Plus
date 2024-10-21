#include <iostream>
using namespace std;

class Test
{
    private:
        int a, b;
    public: 
        void setdata();
        void getdata();
        Test sum(Test); // Here     It is class type return type <- Test sum(Test);      sum(Test) -> sum i sfunction name and (Test) is class type parameter
};

void Test :: setdata()
{
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
}

void Test :: getdata()
{
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}

Test Test :: sum(Test te) // Here te is class type parameter. This function has return type is class type
{
    Test t;
    t.a = a + te.a;
    t.b = b + te.b;

    return t;   // Here t is class type return value
}

int main()
{
    Test t1, t2, t3;

    t1.setdata();
    t2.setdata();

    t3 = t1.sum(t2);

    t1.getdata();
    t2.getdata();
    
    cout<<"t3 Object data in "<<endl;
    t3.getdata();

    return 0;
}