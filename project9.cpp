#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x>75)
    {
        cout << "A";
    }
    else if (x>65)
    {
        cout<< "B";
    }
    else if (x>55)
    {
        cout<< "C";
    }
    else if (x>30)
    {
        cout<< "S";
    }
    else
    {
        cout<< "F";
    }
    return 0;
    
}