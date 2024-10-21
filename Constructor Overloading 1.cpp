#include<iostream>
using namespace std;

class Circle
{
    private:
        float r;
    public:
        Circle()
        {
            r = 5;
        }
        Circle(float r)
        {
            (*this).r = r;
            // this->r = r;
        }
        void showArea()
        {
            cout<<"Area = "<<3.14*r*r<<endl;;
        }
};

int main()
{
    Circle c1;
    Circle c2(10);
    c1.showArea();
    c2.showArea();

    return 0;
}