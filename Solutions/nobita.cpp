#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,count=0,k=0;
    string st;
    int ar[10];
    cout<<"Enter The String:";
    getline(cin,st);
    i=0;
    while (st[i]!='\0')
    {
        if(st[i]!='+')
        {
            ar[k++]=stoic(st);
            count++;
        }
        i++;
    }
   for (int i = 0; i <= count; i++)
    {
        cout<<ar[i];
    }
    return 0;
}