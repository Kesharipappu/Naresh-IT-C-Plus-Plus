#include <iostream>
using namespace std;

class Student       // Base Class
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

class Marks         // Base Class
{
    protected:
        int marks1, marks2, marks3;  // Here declaring marks1, marks2 and marks3 as protected because Protected data members can be accessed in inherited class. Which is being inherited in Result class 
    public:
        void setMarks()
        {
            cout<<"Enter Marks of Three Subjects ";
            cin>>marks1>>marks2>>marks3;
        }
        void getMarks()
        {
            cout<<"Subject 1 Marks = "<<marks1<<endl;
            cout<<"Subject 2 Marks = "<<marks2<<endl;
            cout<<"Subject 3 Marks = "<<marks3<<endl;
        }
};

class Result : public Student, public Marks     // Derived Class
{
    private:
        int total;
        float average;
    public:
        void show()
        {
            total = marks1 +  marks2 + marks3;
            average = total / 3.0;
            cout<<"Total Marks = "<<total<<endl;
            cout<<"Average Marks = "<<average<<endl;
        }
};

int main()
{
    Result res;
    res.setStudent();
    res.setMarks();
    res.getStudent();
    res.getMarks();
    res.show();

    return 0;
}