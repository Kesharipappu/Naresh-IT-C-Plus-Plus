#include <iostream>
using namespace std;

class Author   //Container Class
{
    private:
        char aname[20];
        friend class Book;   //Declaring Book Class as a friend
};

class Book     //Contained Class
{
    private:
        char bname[20];
        float price;
        Author a;  //Composition -> Defining one class object in another class. Here defining Author class inside Book class

    public:
        void setdata()
        {
            cout<<"Enter Author Name : ";
            cin>>a.aname;                 //Here using dot operator like -> a.aname because a object is of different class i.e. -> Author Class
            cout<<"Enter Book Name : ";
            cin>>bname;                   // Here no need of dot operator because it is data member of same Class i.e. ->Book Class
            cout<<"Enter Price : ";
            cin>>price;                  // Here no need of dot operator because it is data member of same Class i.e. ->Book Class
        }
        void getdata()
        {
            cout<<"Author Name : "<<a.aname<<endl;  //Here using dot operator like -> a.aname because a object is of different class i.e. -> Author Class
            cout<<"Book Name : "<<bname<<endl;     // Here no need of dot operator because it is data member of same Class i.e. ->Book Class
            cout<<"Price : "<<price<<endl;         // Here no need of dot operator because it is data member of same Class i.e. ->Book Class
        }
};

int main()
{
    Book b;  //Here no need to declared Container Class again. We need to declare only contained Class, Because Container Class is already declare in Contained Class
    b.setdata();
    b.getdata();

    return 0;
}