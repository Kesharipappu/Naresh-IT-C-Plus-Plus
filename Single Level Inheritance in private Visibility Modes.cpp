#include <iostream>
using namespace std;

class Student
{
    private:
        int id;
        char name[20];
    public: 
        void setStudent()
        {
            cout<<"Enter Student's Id and Name ";
            cin>>id>>name;
        }
        void getStudent()
        {
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
        }
};

class Physical : private Student
{
    private:
        float height, weight;
    public:
        void setPhysical()
        {
            setStudent();
            cout<<"Enter Student's Height and Weight ";
            cin>>height>>weight;
        }
        void getPhysical()
        {
            getStudent();
            cout<<"Height = "<<height<<endl;
            cout<<"Weight = "<<weight<<endl;
        }
};

int main()
{
    Physical phy;
    phy.setPhysical();
    phy.getPhysical();

    // phy.setStudent();  // We can't call setStudent() & getStudent() function because we have inherited Student class inside Physical class in Private visibility mode, 
    // phy.getStudent();  // So public member function of Student class will be private member function inside Physical class. And Private member function are not accessible from outside the class
                          // we can call setPhysical() & getPhysical() function by. calling setStudent() inside setPhysical() function. And calling getStudent() inside getPhysical() function
    return 0;
}