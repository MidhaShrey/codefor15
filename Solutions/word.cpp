#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,count=0,count1=0;
    string str;
    cout<<"Enter the String:";
    getline(cin,str);
    for (i = 0; i< str.length(); i++)
    {
        if (isupper(str[i]))
        {
            count++;
        }
        else
        {
            count1++;
        }
        
    }
    for(i=0;i<str.length();i++)
    {
        if (count>count1)
        {
            str[i]=toupper(str[i]);
        }
        else
        {
            str[i]=tolower(str[i]);
        }
    }
    
    cout<<str;
    return 0;
}