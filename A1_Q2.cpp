#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Marks"<<endl;
    cin>>a;
    if(a>90)
        cout<<"excellent"<<endl;
        else if(a>80)
        cout<<"good";
        else if(a>70)
        cout<<"fair";
        else if(a>60)
        cout<<"meets expectations";
        else
        cout<<"below par";
}