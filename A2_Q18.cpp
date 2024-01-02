#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j||j==n-i-1||i==0){
                cout<<"*";
            }
            else if(i<n/2){
                cout<<" ";
            }
            else if(i>=n/2&&j<n-i){
                cout<<" ";
            }
        }
        if(i>=(n+1)/2){
            for(j=0;j<2*i-3-(n+1)/2;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}