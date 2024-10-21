#include <iostream>
using namespace std;

class Account
{
    private:
        int accountNo;
        char name[20];
    public:
        void setAccount()
        {
            cout<<"Enter Account Number and Name ";
            cin>>accountNo>>name;
        }
        void getAccount()
        {
            cout<<"Account Number = "<<accountNo<<endl;
            cout<<"Name = "<<name<<endl;
        }
};

class Savings : public Account
{
    private:
        float balance;
    public:
        void setBalance()
        {
            cout<<"Enter Balance ";
            cin>>balance;
            if(balance < 500)
                cout<<"Minimum Balance 500 Required ";
            else
                cout<<"Account Created";
        }
};

class Current : public Account
{
    private:
        float balance;
    public:
        void setBalance()
        {
            cout<<"Enter Balance ";
            cin>>balance;
            if(balance < 1000)
                cout<<"Minimum Balance 1000 Required";
            else
                cout<<"Account Created";
        }
};

int main()
{
    int option;
    cout<<"1. Savings Account "<<endl;
    cout<<"2. Current Account "<<endl;
    cout<<"Enter Your Option ";
    cin>>option;
    if(option == 1)
    {
        Savings sav;
        sav.setAccount();
        sav.setBalance();
    }
    else if(option == 2)
    {
        Current curr;
        curr.setAccount();
        curr.setBalance();
    }
    else 
        cout<<"Invalid Selection";

    return 0;
}