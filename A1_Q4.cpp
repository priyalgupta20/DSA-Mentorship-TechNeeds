#include<iostream>
using namespace std;
int main(){
    int n,x,j,i;
    cout<<"enter n";
    cin>>n;
    for(i=2;i<n;i++){
        int count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            cout<<i<<endl;
            }
        
    }
}