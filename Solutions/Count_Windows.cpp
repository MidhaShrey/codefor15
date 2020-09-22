#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    long int a,b;
    cout<<"Enter the Number of Buildings and Number of Windows:";
    cin>>a>>b;
    while (b!=0)
    {
        sum+=a;
        b--;
    }
    cout<<sum;
    return 0;
}