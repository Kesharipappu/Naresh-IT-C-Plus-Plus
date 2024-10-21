#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        int id;
    public:
        string name;
        void setData();
        void getData();
};

void Student :: setData()
{
    cout<<"Enter Student's Id : ";
    cin>>id;
    cout<<"Enter Student's Name : ";
    cin.ignore();
    getline(cin,name);
}

void Student :: getData()
{
    cout<<id<<"\t"<<name<<endl;
}

int main()
{
    Student stu[60];  // Array of object or Object Array
    int n, i;
    cout<<"Enter Number of Students [1 to 60] : ";
    cin>>n;
    if(n < 1 || n > 60)
        cout<<"Value should be 1 to 60 Only :";
    else
    {
        for(i = 0; i < n; i++)
        stu[i].setData();
    }
    cout<<"id\t Name\n";
    cout<<"---------------------------------"<<endl;;
    for(int i = 0; i < n; i++)
        stu[i].getData();

    return 0;
}