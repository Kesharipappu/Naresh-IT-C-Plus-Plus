#include <iostream>
using namespace std;

class Test
{
    private:   
        int a, b;
    public:
        void setdata(int x, int y)
        {
            a = x;
            b = y;
        }
        void getdata()
        {
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
        int big()
        {
            if(a > b)
                return a;
            else
                return b;
        }
};

int main()
{
    Test t;
    t.setdata(50, 70);
    t.getdata();
    int max = t.big();
    cout<<"The larger Number is "<<max<<endl;

    return 0;
}