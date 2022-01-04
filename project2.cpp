#include <iostream>

using namespace std;

int main()
{
    int n1, n2,n3,sum;
    float avg;
    cout<<"Enter Number 1 :- "<<endl;
    cin >>n1;
    cout<<"Enter Number 2 :- "<<endl;
    cin >>n2;
    cout<<"Enter Number 3 :- "<<endl;
    cin >>n3;
    sum=n1+n2+n3;
    avg=sum/3;
    cout<<"Average = "<<avg<<endl;
    return 0;
}