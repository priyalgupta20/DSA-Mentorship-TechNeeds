#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=0;j<=2*(n-i)-1;j++){
            cout<<" ";
        }
        for(j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}