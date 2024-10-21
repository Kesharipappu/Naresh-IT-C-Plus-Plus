#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

class Student
{
    private:
        int id;
        char name[20];
    public: 
        void getStudent()
        {
            cout<<id<<"\t"<<name<<endl;
        }
};

int main()
{
    system("cls");
    Student stu;
    ifstream file("student.txt",ios::in);
    file.read((char *)&stu, sizeof(stu));
    cout<<"Id\tName"<<endl;
    cout<<"----------------------------------------------"<<endl;
    while (!file.eof()) 
    {
        stu.getStudent();
        file.read((char *)&stu, sizeof(stu));
    }
    file.close();


    return 0;
}