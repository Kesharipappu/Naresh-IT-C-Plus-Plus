#include <cstring>
#include <iostream>
using namespace std;

class Student
{
    private:
        char name[20], course[20];
        float fee;
    public:
        Student(char name[20], char course[20])
        {
            strcpy(this->name, name);
            strcpy(this->course,  course);
            fee = 0;
        }
        Student(char name[20], char course[20], float fee) : Student(name, course) // calling construcotr using another constructor ->  Student(name, course) -> this is declared above
        {
            //Syntax -> className :: Constructor(arg1, arg2)      // Syntax to call a constructor inside another constructor
            // Student :: Student(name, course); //Calling constructor inside another constructor
            this->fee =  fee;
        }
        void show()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Course : "<<course<<endl;
            cout<<"Fee : "<<fee<<endl;
            cout<<"----------------------------"<<endl;
        }
};

int main()
{
    Student s1("Pappu", "MCA");
    Student s2("Ranjeet", "MBA", 5000);

    s1.show();
    s2.show();

    return 0;
}