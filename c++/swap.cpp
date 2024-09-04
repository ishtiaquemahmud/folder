#include<iostream>
using std::cout;
int main()
{
    int a=1;
    int b=2;
    int temp;
    
    temp=a;
    a=b;
    b=temp;
    cout<<a<<b;
}
