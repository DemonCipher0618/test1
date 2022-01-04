#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    int a, b, c;
    cin >> x >> y >> z;
    if (x>y)
    {
        if (x>z)
        {
            c=x;
            if (z>y)
            {
                b=z;
                a=y;
            }
            else
            {
                b=y;
                a=z;
            }
        }
        else
        {
            a=y;
            b=x;
            c=z;
        }
    }
    else
    {
         if (y>z)
        {
            c=y;
            if (z>x)
            {
                b=z;
                a=x;
            }
            else
            {
                b=x;
                a=z;
            }
        }
        else
        {
            a=x;
            b=y;
            c=z;
        }
    }
    cout<<a<<'\t'<<b<<'\t' <<c<<'\t' <<endl;
     
}