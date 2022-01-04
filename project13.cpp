#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    char a;
    cout << "No1:- ";
    cin >> x;
    cout<< "Operator:- ";
    cin >> a;
    cout<< "No2:- ";
    cin >> y;
    switch (a)
    {
        case '+':
        z=(x+y);
        cout << z;
        break;
        case '-':
        z=(x-y);
        cout << z;
        break;
        case '*':
        z=(x*y);
        cout << z;
        break;
        case 'x':
        z=(x*y);
        cout << z;
        break;
        case '/':
        z=(x/y);
        cout << z;
        break;
        default:
        cout <<"Invalid";
        break;
    } 
    return 0;
}