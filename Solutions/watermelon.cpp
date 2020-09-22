#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter The Size of Watermelon:";
    cin>>size;
    if (size%2==0 && size>2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}