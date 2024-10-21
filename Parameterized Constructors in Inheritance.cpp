/*
    Parameterized Constructor: ->
    1. Base Class should have to contain a default constructor.
    2. Base Class parameterized constructor should be invoked inside derived class parametrized constructor.
    3. Base Class parametrized constructor should be the first statement in the derived class parametrized constructor.
    4. Only one Base Class parametrized constructor is called within derived class parametrized constructor.
*/

#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

class Student
{
    private:
        char name[20], course[20];
    public: 
        Student()   // Default Constructor
        {

        }
        Student(const char name[20],const char course[20])   // Parametrized Constructor
        {
            strcpy(this->name, name);
            strcpy(this->course, course);
        }
        void showStudent()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Course : "<<course<<endl;
        }
};

class Marks : public Student
{
    private:
        int maths, physics, chemistry;
    public:
        Marks(const char name[20], const char course[20], int maths, int physics, int chemistry) : Student(name,course) // Here name and course belongs to Base Class and maths, physics and chemistry belongs to Derived Class. Student(name, course); It will call Base Class Constructor
        {
            this->maths = maths;
            this->physics = physics;
            this->chemistry = chemistry;
        }
        void showMarks()
        {
            cout<<"Maths Marks : "<<maths<<endl<<"Physics Marks : "<<physics<<endl<<"Chemistry Marks : "<<chemistry;
        }
};

int main()
{
    system("cls");
    Marks m("Pappu", "MCA", 80, 86, 95);
    m.showStudent();
    m.showMarks();


    return 0;
}