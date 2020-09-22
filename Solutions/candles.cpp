#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter 4 Numbers:";
    cin>>a>>b>>c>>d;
    if (a+b==c+d||a+c==b+d||a+d==b+c||a+b+c==d||a+b+d==c||a+c+d==b||b+c+d==a)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}