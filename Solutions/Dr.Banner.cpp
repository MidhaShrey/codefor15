#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter A Number:";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            cout<<"I love ";
        }
        else
        {
            cout<<"I hate ";
        }
        if (i!=n)
        {
           cout<<" that ";
        }
        else
        {
            cout<<" it ";
        }
    }
    return 0;
}