#include <iostream>

using namespace std;

int main()
{
    char x;
    cout << "Enter First Letter:- ";
    cin >> x;
    if (x =='o' || x=='O')
    {
        cout << "Ammonia"<<'\n'<<"Glad to be of service";
    }
    else if (x =='b' || x=='B')
    {
        cout << "Carbon Monoxide"<<'\n'<<"Glad to be of service";
    }
    else if (x == 'y' || x == 'Y')
    {
        cout << "Hydrogen"<<'\n'<<"Glad to be of service";
    }
    else if (x == 'g' || x == 'G')
    {
        cout << "Oxygen"<<'\n'<<"Glad to be of service";
    }
    else
    {
        cout << "Invalid input";
    }
    return 0;
}