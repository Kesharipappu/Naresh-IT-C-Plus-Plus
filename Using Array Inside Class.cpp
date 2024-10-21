#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        int id, sub[6];
        string name;
    public:
        void setData();
        void getData();
};

void Student :: setData()
{
    cout<<"Enter Student's Id : ";
    cin>>id;
    cin.ignore();
    cout<<"Enter Student's Name : ";
    getline(cin,name);
    cout<<"Enter Marks of 6 Subjects : ";
    for(int i = 0; i < 6; i++)
        cin>>sub[i];
}

void Student :: getData()
{
    int tot = 0;
    float avg;
    for(int i = 0; i < 6; i++)
        tot = tot + sub[i];
    avg = tot / 6.0;
    cout<<"Total = "<<tot<<endl;
    cout<<"Average = "<<avg<<endl;
    for(int i = 0; i < 6; i++)
    {
         if(sub[i] < 35)
        {
            cout<<"Fail"<<endl;
            return;
        }       
    }
    cout<<"Pass"<<endl;
}

int main()
{
    Student stu;
    stu.setData();
    stu.getData();
    
    return 0;
}