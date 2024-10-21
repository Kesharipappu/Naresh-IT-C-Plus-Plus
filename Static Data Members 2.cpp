#include <iostream>
using namespace std;

class Sample
{
    private:
       //static data member is class data member not object member.  when ever a data member is declared as static then it will become class member
       static int count;  // static data member declaration
    public:
        Sample()
        {
            count++;
            cout<<count<<" Object Created"<<endl;
        }
        //In destructor destruction starts from right to left like-> s3, s2, s1
        ~Sample()
        {
             cout<<count<<" Object Deleted"<<endl;  
             count--;         
        }
};

int Sample :: count;  // static data member definition with default value 0

int main()
{
    Sample s1, s2, s3;

    return 0;
}