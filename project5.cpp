#include <iostream>

using namespace std;

int main()
{
    int x, y, a, b, c, d, e, f, g;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        cout<<"Enter Item Price "<<endl;
        cin>>a;
        cout<<"Enter Item count "<<endl;
        cin>>b;
        c=(a*b);
        d=(d+c);
        f=f+b;
    }
    g=f+x;
    y=(d/100)*g;
    e=(d+y);
    cout<<"Grand Total Price RS:"<<d<<" +tax RS:"<<y<<'\t'<<'\n'<<"Net Total Price RS:"<<e<<endl;
    return 0;
}