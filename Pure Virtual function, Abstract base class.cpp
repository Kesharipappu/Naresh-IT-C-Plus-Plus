#include <cstdlib>
#include <iostream>
using namespace std;

// If a class contain at least one pure virtual function then it is called Abstract Class
class Shape    // Abstract class
{
    protected:
        float dimension1, dimension2;
    public:
        void setDimension()
        {
            cin>>dimension1>>dimension2;
        }
        // If a function is declared as virtual and initialized with 0 then this function is called pure virtual function.
        // Pure virtual function is always initialized with 0. Not by any other numbers, If we initialize with another number rather than 0 then it will give error.
        // Pure Virtual function is declared inside base class and redefined in derived class.
        // Syntax for Pure Virtual Function -> virtual datatype functionname = 0   Example ->  virtual float area() = 0;
        virtual float area() = 0; // Pure Virtual Function
};

class Triangle : public Shape
{
    public: 
        float area()
        {
            return (0.5 * dimension1 * dimension2);
        }
};

class Rectangle : public Shape
{
    public:
        float area()
        {
            return (dimension1 * dimension2);
        }
};

int main()
{
    system("cls");

    // Shape sh;    // It will give error because we can't create object of Abstract class.

    Triangle tr;
    cout<<"Enter Base and Height of Triangle ";
    tr.setDimension();
    cout<<"Area of Triangle = "<<tr.area()<<endl;

    Rectangle rec;
    cout<<"Enter Length and Breadth of Rectangle ";
    rec.setDimension();
    cout<<"Area of Rectangle = "<<rec.area();

    return 0;
}