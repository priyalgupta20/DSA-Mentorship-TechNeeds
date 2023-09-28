#include<iostream>
using namespace std;
int main()
{
    int i,n;
    if(n==0 || n==1)
    {
        cout<<"Not prime";
    }
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        cout<<"Not prime";
        else
        cout<<"Prime";
    }
}