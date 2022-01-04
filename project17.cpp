#include <iostream>

using namespace std;

int main()
{
    float x;
    cout << "Enter Temperature:- ";
    cin >> x;
    if (x>100)
    {
        cout << "STEAM";
    }
    else if (x>0 && x<100)
    {
        cout << "Water";
    }
    else if (x<0)
    {
        cout << "ICE";
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}