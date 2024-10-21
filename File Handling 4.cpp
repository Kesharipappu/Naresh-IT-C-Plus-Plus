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
        void getStudent()
        {
            cout<<id<<"\t"<<name<<endl;
        }
        void search();
};

void Student :: search()
{
    Student stu;
    ifstream fileSearch("candidate.txt");
    int idNo, found = 0;
    cout<<"Enter Student's Id to Search ";
    cin>>idNo;
    fileSearch.read((char *)&stu, sizeof(stu));
    while (!fileSearch.eof()) 
    {
        if(stu.id == idNo)
        {
            cout<<"Id\tName"<<endl;
            cout<<"---------------------------------"<<endl;
            cout<<stu.id<<"\t"<<stu.name<<endl;
            found = 1;
            break;
        }
        fileSearch.read((char *)&stu, sizeof(stu));
    }
    fileSearch.close();
    if(found == 0)
        cout<<"Record Not Found"<<endl;
}

int main()
{
    system("cls");

    // Write Data in file
    Student stu;
    ofstream fileWrite;
    fileWrite.open("candidate.txt", ios::out | ios::app);
    char option;
    do
    {
        stu.setStudent();
        fileWrite.write((char *)&stu,sizeof(stu) );
        cout<<"One Row Created"<<endl;
        cout<<"Do You Want to Add More Student : [Y / N]";
        cin>>option;
    } while(option == 'Y' || option == 'y');
    fileWrite.close();



    // Read Data from File
    ifstream fileRead("candidate.txt",ios::in);
    fileRead.read((char *)&stu, sizeof(stu));
    cout<<"Id\tName"<<endl;
    cout<<"----------------------------------------------"<<endl;
    while (!fileRead.eof()) 
    {
        stu.getStudent();
        fileRead.read((char *)&stu, sizeof(stu));
    }
    fileRead.close();

    // To call Search
    stu.search();

   
    return 0;
}