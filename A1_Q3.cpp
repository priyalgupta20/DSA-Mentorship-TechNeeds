#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter a number";
    cin>>n;    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        x=1;
    }
    if(x==1 || n==0 || n==1)
    {
        cout<<"Not prime";
    }
    else
    {
        cout<<"Prime";
    }
    return 0;
}