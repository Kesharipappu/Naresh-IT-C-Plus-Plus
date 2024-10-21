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

class Marks : public Student
{
    protected:
        int marks1, marks2, marks3;
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

class Result : public Marks
{
    private:
        int total;
        float average;
    public:
        void show()
        {
            total = marks1 + marks2 + marks3;
            average = total / 3.0;
            cout<<"Total Marks = "<<total<<endl;
            cout<<"Average = "<<average<<endl;
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