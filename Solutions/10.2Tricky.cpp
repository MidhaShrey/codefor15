#include<iostream>
using namespace std;
int main()
{
    int i,num,result=0;
    cout<<"Enter A number:";
    cin>>num;
    for ( i = 1; i <= num; i++)
    {
        if (i%2==0)
        {
            result+=i;
        }
        else
        {
            result-=i;
        }
    }//-1+2-3+4......
    cout<<result;
    return 0;
}