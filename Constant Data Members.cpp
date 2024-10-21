#include <iostream>
using namespace std;

class Si
{
    private:
        float p;
        int t;
        const float r;  // Declare constant data member
    public:
        Si() : r(2.5)  // Initialize constant data member
        {

        }
        void setData(float pa, int ti)
        {
            p = pa;
            t = ti; 
        }
        float getData()
        {
            return (p*t*r)/100;
        }
};

int main()
{
    Si s;
    s.setData(1000, 10);
    cout<<"Interest = "<<s.getData();

    return 0;
}