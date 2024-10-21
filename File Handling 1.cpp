#include <cstdlib>
#include<iostream>
using namespace std;

class Bank
{
    private:
        int accountNumber;
        char name[20];
        float balance;
    public:
        void getAccount()
        {
            cout<<"Enter Account Number, Name and Balance ";
            cin>>accountNumber>>name>>balance;
            cout<<"Account Number : "<<accountNumber<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Balance : "<<balance<<endl;
            cout<<"Account Created";
        }
};

int main()
{
    system("cls");
    Bank b;
    b.getAccount();

    return 0;
}