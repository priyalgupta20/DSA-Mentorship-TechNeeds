#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    while(n%2==0)
        n=n/2;
        cout<<2<<" "<<endl;
    for(int i=3;i<=n;i+2)
    {
        while(n%i==0)
        n=n/i;
        cout<<i<<" "<<endl;
        break;
    }
    if(n>1)
    cout<<n<<" "<<endl;

}
