#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<=n;j++){
            if(j==n-i){
                cout<<"*   ";
            }
            else{
                cout<<"    ";
            }
        }
        cout<<endl;
    }
}