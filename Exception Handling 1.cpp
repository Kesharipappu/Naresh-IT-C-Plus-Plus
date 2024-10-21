/*  Exception means error causing
    Three keywords in Exception Handling
        1. Try -> Try block contains error causing program.  Try is a keyword
        2. Throw -> When error is occured by try block then throw throws some values
        3. Catch -> Thrown value is received by Catch and give solution to error causing program
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int a, b;
    try
    {
        cout<<"Enter Two Numbers ";
        cin>>a>>b;
        if(b == 0)
            throw 0;
        cout<<"Division = "<<a/b;
    }
    catch(int x)
    {
        cout<<"Division not Possible ";
    }

    return 0;
}