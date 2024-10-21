#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

/*
    When Working with friend keyword then some of the operators can't be overloaded
    1.  = (Assignment Operator)
    2. () (Function call Operator)
    3. [] (Subscript Operator)
    4. -> (Pointer to Member Access Operator)
*/

class Student
{
    private:
        int id;
        char name[20];
    public:
        friend void operator >> (istream &in, Student &st) // Here in is the alias of istream. cin belongs to instream class. &in is reference object of istream class. &st is reference object of Student class.
        {
            cout<<"Enter Student Id and Name ";
            in>>st.id>>st.name;     // Here using in instead of cin because in just two lines above in has been aliased for istream
        }
        friend void operator << (ostream &out, Student &st)  //Here out is the alias of ostream. cout belongs to ostream class. &out is reference object of ostream class. &st is reference object of Student class.
        {
            out<<"Id = "<<st.id<<endl;   // Here using out instead of cout because in just two lines above out has been aliased for ostream
            out<<"Name = "<<st.name<<endl;
        }
};

int main()
{
    Student stu;
    
    cin>>stu;
    cout<<stu;

    return 0;
}

