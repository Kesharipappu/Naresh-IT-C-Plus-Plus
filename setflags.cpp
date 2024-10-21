#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    cout<<setw(10)<<setiosflags(ios::left)<<"Pappu"<<endl;  //setw(10) will create 10 space from starting like ->Pappu-----
    cout<<setw(10)<<setiosflags(ios::left)<<"Keshari"<<endl;

    cout<<setw(10)<<setiosflags(ios::right)<<"Pappu"<<endl; //setw(10) will create 10 space from starting like -> -----Pappu
    cout<<setw(10)<<setiosflags(ios::right)<<"Keshari"<<endl;

    cout<<setiosflags(ios::oct)<<65<<endl; //Decimal to octal conversion
    cout<<setiosflags(ios::hex)<<65<<endl; //Decimal to hexadecimal conversion
    cout<<setiosflags(ios::dec)<<0101<<endl; //octal to Decimal conversion
    cout<<setiosflags(ios::dec)<<0x41<<endl; //Hexadecimal to Decimal conversion

    cout<<22/7<<endl;  //output -> 3
    cout<<setiosflags(ios::showpoint)<<22/7<<endl; //output -> **

    cout<<234.1234<<endl; //output -> 234.123
    cout<<setiosflags(ios::scientific)<<234.1234<<endl; //output-> 2.341234e+002
    cout<<setiosflags(ios::fixed)<<234.1234<<endl; //output-> 8.45034e-307

    cout<<setiosflags(ios::showpos)<<100<<endl; // pos means Positive(+). //output-> +100


    return 0;
}