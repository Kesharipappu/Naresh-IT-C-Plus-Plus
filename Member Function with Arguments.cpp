#include <iostream>
#include <string>
using namespace std;

class emp
{
    private:
        int empid;
        string ename;
        float sal;
    public:
        void setemp(int id,  string name, float basic);
        void getemp();
};

void emp :: setemp(int id,  string name, float basic)
{
    empid = id;
    ename = name;
    sal = basic;
}

void emp :: getemp()
{
    cout<<"Employee Id = "<<empid<<endl;
    cout<<"Employee Name = "<<ename<<endl;
    cout<<"Employee Salary = "<<sal;
}

int main()
{
    emp e;
    e.setemp(101, "Pappu Kumar Keshari", 20000);
    e.getemp();

    return 0;
}