#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        int id;
        string name;
        float salary;
        void setemp()
        {
            cout<<"Enter Employee Id : ";
            cin>>id;
            cout<<"Enter Employee Name : ";
            cin.ignore();
            getline(cin,name);
            cout<<"Enter Employee Salary : ";
            cin>>salary;
        }
    public:
        void getemp()
        {
            setemp();
            cout<<"Employee Id = "<<id<<"\t"<<"Employee Name = "<<name<<"\t"<<"Employee Salary = "<<salary<<endl;
        }
};

int main()
{
    Employee emp;
    emp.getemp();

    return 0;
}