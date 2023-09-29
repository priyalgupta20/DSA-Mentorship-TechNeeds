#include<iostream>
using namespace std;
int main()
{
    int num1,num2,i,GCD,LCM;
    cout<<"Enter number 1"<<endl;
    cin>>num1;
    cout<<"Enter number 2"<<endl;
    cin>>num2;
    for(i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            GCD=i;
        }
    }
    cout<<"GCD is "<<GCD<<endl;
    LCM=num1*num2/GCD;
    cout<<"LCM is "<<LCM<<endl;
    return 0;
}