#include<iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter Your Age:- ";
    cin >> x;
    if (x>65)
    {
        cout<<"You are a senior citizen";
    }
    else if (x>18 && x<65)
    {
        cout<<"You are an adult";
    }
    else if (x<18)
    {
        cout<<"You are a child";
    }
    else
    {
        cout<<"invalid input";
    }
    return 0;
}