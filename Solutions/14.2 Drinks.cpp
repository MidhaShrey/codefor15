#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a,i;
    float sum=0.0;
    cout<<"Enter the number of oranges:";
    cin>>n;
    vector<int>ar(n);
    cout<<"Enter the volume of the oranges:";
    for (i = 0; i < n; i++)
    {
        cin>>a;
        ar.push_back(a);
        sum+=a;
    }
    cout<<sum/n;
    return 0;
}