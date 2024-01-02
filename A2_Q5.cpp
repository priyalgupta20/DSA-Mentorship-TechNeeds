#include<iostream>
using namespace std;

void pattern1(int n)
{
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"   ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*  ";
        }
        for(j=1;j<=n-i;j++){
            cout<<"   ";
        }
        cout<<endl;
    }
}

void pattern2(int n)
{
    int i,j;
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            cout<<"   ";
        }
        for(j=1;j<=2*(n-i)-1;j++){
            cout<<"*  ";
        }
        for(j=1;j<=i;j++){
            cout<<"   ";
        }
        cout<<endl;
    }
}

int main()
{
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    pattern1(n);
    pattern2(n);
}