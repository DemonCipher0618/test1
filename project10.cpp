#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    switch (x)
    {
        case 75 ... 100: 
        cout<<"A";
        break;
        case 65 ... 74:
        cout<<"B";
        break;
        case 55 ... 64:
        cout<<"C";
        break;
        case 30 ... 54:
        cout<<"S";
        break;
        case 0:
        cout<<"F";
        break;
        default:
        cout<<"Invvalid";
    }
    return 0;
    
}