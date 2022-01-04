#include <iostream>

using namespace std;

/*
d = difference
p = product
q= quotient
r = remainder
*/
int main()
{
    int x, y, sum, d, p, q, r;
    cin>>x>>y;
    sum =x+y;
    d=x-y;
    p=x*y;
    r=x%y;
    cout<<"Sum :-"<<sum<<'\n'<<"Difference :-"<<d<<'\n'<<"Product :-"<<p<<'\n'<<"Quotient :-"<<q<<'\n'<<"Remainder :-"<<r<<'\n'<<endl;
    return 0;

}