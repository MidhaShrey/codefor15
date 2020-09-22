#include<iostream>
using namespace std;
int main()
{
    int num,steps=0;
    cout<<"Enter the Co-ordinate of Friend's House:";
    cin>>num;
    while (num>5)
    {
        num-=5;
        steps+=1;
    }
    if (num==1||num==2||num==3||num==4||num==5)
    {
        steps+=1;
    }
    cout<<"Total Steps:"<<steps;
    return 0;
}