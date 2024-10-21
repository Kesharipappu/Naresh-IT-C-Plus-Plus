#include <iostream>
using namespace std;

class Sample
{
    private:    
        int a;
    public:
        void seta()
        {
            cout<<"Enter Number : ";
            cin>>a;
        }
        void geta()
        {
            cout<<"a = "<<a<<endl;
        }
        void big(Sample s2)
        {
            if(a > s2.a)
                cout<<"First Number is greater "<<endl;
            else if (a < s2.a)
                cout<<"Second Number is greater "<<endl;
            else
                cout<<"Both Numbers are equal";
        }
};

int main()
{
    Sample s1, s2;
    s1.seta();
    s2.seta();

    s1.geta();
    s2.geta();

    //Here passing class type parameter
    s1.big(s2); // Here s1 is implicit and s2 is explicit

    return 0;
}