#include <cstdlib>
#include <iostream>
using namespace std;

class Bank
{
    private:
        int accountNumber;
        char name[20];
        float balance;
    public:
        void setAccount()
        {
            cout<<"Enter Account Number, Name and Balance ";
            cin>>accountNumber>>name>>balance;
        }
        void getAccount()
        {
            cout<<"Account Number : "<<accountNumber<<endl;
            cout<<"Name  : "<<name<<endl;
            cout<<"Balance : "<<balance<<endl;
            cout<<"Account Created"<<endl;
        }
};

int main()
{
    system("cls");
    Bank b;
    b.setAccount();
    b.getAccount();

    return 0;
}