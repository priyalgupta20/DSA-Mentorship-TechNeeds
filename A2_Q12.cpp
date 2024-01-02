#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==1||n==2){
        return(n-1);
    }
    else{
        return(fib(n-1)+fib(n-2));
    }
}

int main()
{
    int i,j,n;
    cout<<"enter n";
    cin>>n;
    int count=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            count++;
            cout<<fib(count)<<"     ";
        }
        cout<<endl;
    }
}