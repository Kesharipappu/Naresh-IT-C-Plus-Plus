#include <iostream>
using namespace std;

class Student
{
    private:
        int idNo;
        char name[20];
    public:
        void setStudent()
        {
            cout<<"Enter Student's Id and Name ";
            cin>>idNo>>name;
        }
};

class Marks : public Student
{
    protected:
        int maths, physics, chemistry;
    public:
        void setMarks()
        {
            cout<<"Enter Three Subjects Marks ";
            cin>>maths>>physics>>chemistry;
        }
};

class Sports
{
    protected:
        int sportsMarks;
    public:
        void setSports()
        {
            cout<<"Enter Sports Marks ";
            cin>>sportsMarks;
        }
};

class Result : public Marks, public Sports
{
    private:    
        int total;
        float average;
    public:
        void show()
        {
            total = maths + physics + chemistry;
            average = total / 3.0;
            cout<<"Total Marks = "<<total<<endl;
            cout<<"Average = "<<average<<endl;
            cout<<"Average and Sports Marks = "<<average + sportsMarks<<endl;
        }
};

int main()
{
    Result res;
    res.setStudent();
    res.setMarks();
    res.setSports();
    res.show();

    return 0;
}