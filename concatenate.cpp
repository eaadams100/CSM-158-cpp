#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstname="John ";
    string lastname="Doe";
    string fullname=firstname.append(lastname);
    cout<<fullname;
    
    return 0;
}