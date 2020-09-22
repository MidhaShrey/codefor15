#include<iostream>
#include<string>
using namespace std;
int main()
{
    string res;
    string sym[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    int i;
    long num;
    cout<<"Enter The Number whose code is to be generated:";
    cin>>num;
    int n=num;
    i=0;
    while (num!=0)
    {
        while (num>=value[i])
        {
            num-=value[i];
            res+=sym[i];
        }
        i++;
    }
    cout<<"The code for "<<n<<" is:"<<res;
    return 0;    
}