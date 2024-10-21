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

class Physical : public Student
{
    private:
        float height, weight;
    public:
        void setPhysical()
        {
            cout<<"Enter Student's Height and Weight ";
            cin>>height>>weight;
        }
        void getPhysical()
        {
            cout<<"Height = "<<height<<endl;
            cout<<"Weight = "<<weight<<endl;
        }
};

int main()
{
    Physical phy;
    phy.setStudent();
    phy.setPhysical();
    phy.getStudent();
    phy.getPhysical();

    return 0;
}