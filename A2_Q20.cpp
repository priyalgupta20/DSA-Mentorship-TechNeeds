#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1||j==n){
                cout<<"*  ";
            }
            else if(i==j&&i>=(n+1)/2){
                cout<<"*  ";
            }
            else if(i>=(n+1)/2&&j==n-i+1){
                cout<<"*  ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;

    }
}