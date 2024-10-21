#include <iostream>
using namespace std;

struct student
{
    int id;
    char name[20];

    void getdata()
    {
        cout<<"Enter Student's Id : ";
        cin>>id;
        cout<<"Enter Student's Name : ";
        cin>>name;
        cout<<"Id = "<<id<<endl;
        cout<<"Name = "<<name<<endl;
    }
}s1;

int main()
{
    s1.getdata();

    return 0;
}