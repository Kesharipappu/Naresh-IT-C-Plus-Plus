#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    cout<<setbase(8)<<65<<endl;  //output -> 101
    cout<<setbase(16)<<65<<endl;  //output -> 41
    cout<<setbase(10)<<0101<<endl; //octal to decimal conversion.  output -> 65
    cout<<setbase(10)<<0x41<<endl;  //Hexadecimal to decimal conversion.  output -> 65

    return 0;
}