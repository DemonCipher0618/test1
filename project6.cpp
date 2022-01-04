#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x ;
    y=(x/100)*8;
    z=(x-y);
    cout <<"Commision :-  " << y<<'\n' << "Company Amount :-  " << z << endl;
    return 0;
}