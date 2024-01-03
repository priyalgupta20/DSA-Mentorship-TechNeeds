#include<iostream>
using namespace std;

int fac(int n){
    if(n==0||n==1){
        return(1);
    }
    else{
        return(n*fac(n-1));
    }
}

int nCr(int n,int r){
    return(fac(n)/(fac(r)*fac(n-r)));
}

int main()
{
    int n,i,j;
    cout<<"Enter n";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<nCr(i,j)<<"  ";
        }
        cout<<endl;
    }
}