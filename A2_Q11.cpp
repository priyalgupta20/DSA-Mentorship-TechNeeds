#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter n";
    cin>>n;
    int num=1;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            num=num+i+j-1;
            cout<<num<<"  ";
        }
        cout<<endl;
    }
}