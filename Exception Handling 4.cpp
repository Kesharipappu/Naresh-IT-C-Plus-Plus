#include <iostream>
using namespace std;

//This program will give error because there is no catch block. Program will terminate abnormally
// Everty try block need one catch block

int main()
{
    try
    {
        throw 10;
    }

    return 0;
}