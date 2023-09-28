#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<"Enter a number:";
    cin>>n;
    if(n==0)
    {
        cout<<"1";
    }
    for(a=1;n>0;a++)
    {
        n=n/10;
    cout<<"Number of digits in the given number is "<<a;
    }
    return 0;
}
