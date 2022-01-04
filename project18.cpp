#include <iostream>

using namespace std;

int main()
{
    char x;
    cin >> x;
    switch (x)
    {
        case 'A':
        cout<<"Excellent";
        break;
        case 'B':
        cout<<"Good";
        break;
        case 'C':
        cout<<"Fair";
        break;
        case 'D':
        cout<<"Poor";
        break;
        case 'F':
        cout<<"Fail";
        break;
        default:
        cout<<"Invvalid";
    }
    return 0;
    
}