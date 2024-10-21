#include <cstdlib>
#include <iostream>
using namespace std;

int x = 200;   // Here x is global variable 

void Function()
{
    class Test  // It is Local Class, Because it is declared inside a function
    {
        private:
            int x;
        public:
            void show()
            {
                x = 100;   // Here x is local data member or variable
                cout<<"Local x = "<<x<<endl;
                cout<<"Global x = "<<::x<<endl;  // Scope Resolution Operator(::)  is used to access Global Variable
            }
    };
    Test t;  // Here t is an object of class Test. For Local Class object must be created inside function. If user create object in main function then it will give error.
    t.show(); // Calling show function
}

int main()
{
    system("cls");
    Function();  // Calling function from main function

    return 0;
}