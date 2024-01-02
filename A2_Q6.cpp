#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    for(i=1;i<n-1;i++){
        for(j=1;j<n-i;j++){
            cout<<"* ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        for(j=1;j<n-i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    for(i=2;i<n-1;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        for(j=1;j<2*(n-i-1);j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
}