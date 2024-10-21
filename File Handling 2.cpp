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
        void setStudent()
        {
            cout<<"Enter Id and Name ";
            cin>>id>>name;
        }
};

int main()
{
    system("cls");
    Student stu;

    // We can open file in two modes (1) Using Parametrized Constructor (2) Using open member function

    // File opening mode
    // It is called how to open a file using Parametrized Constructor
    //ofstream file("student.txt",ios::out);  // ofstream is a predefined classs and file is an object of ofstream class

    // It is called how to open a file using open member function
    ofstream file;
    file.open("student.txt", ios::out | ios::app);
    char option;
    do
    {
        stu.setStudent();
        file.write((char *)&stu,sizeof(stu) );
        cout<<"One Row Created"<<endl;
        cout<<"Do You Want to Add More Student : [Y / N]";
        cin>>option;
    } while(option == 'Y' || option == 'y');
    file.close();
   
    return 0;
}