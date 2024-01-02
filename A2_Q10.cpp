#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<n/2){
                if(j==n-i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(i==j){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        for(j=n+1;j<2*n;j++){
            if(i<n/2){
                if(j==n+i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(j==2*n-i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}