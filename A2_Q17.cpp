#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n/2;j++)
        {
            if(i==(n-1)/2){
                cout<<"*   ";
            }
            else{
                cout<<"    ";
            }
        }
        if(i<n/2){
            for(j=0;j<=i;j++){
                cout<<"*   ";
            }
        }
        else{
            for(j=0;j<n-i;j++){
                cout<<"*   ";
            }
        }
        cout<<endl;
    }
}