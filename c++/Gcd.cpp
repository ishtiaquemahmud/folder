#include<iostream>
using namespace std;
int main()
{
    int num1,num2,rem,gcd,lcm,n1,n2;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;
    num1=n1;
    num2=n2;

    while(num2!=0)
    {
        rem=num1%num2;
        num1=num2;
        num2=rem;
           

    }

    gcd=num1;
    lcm=(n1*n2)/gcd;
    cout<<"Gcd is :"<<gcd<<endl;
    cout<<"lcm is :"<<lcm;



} 