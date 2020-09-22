#include<iostream>
using namespace std;
int main()
{
    int i,num,k;
    cout<<"Enter Number and  No of Iterations:";
    cin>>num>>k;
    for ( i = 1; i <= k; i++)
    {
        if (num%10==0)
        {
            num/=10;
        }
        else
        {
            num-=1;
        }
        
    }
    return 0;
}
