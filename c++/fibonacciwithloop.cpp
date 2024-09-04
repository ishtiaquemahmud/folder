#include<iostream>
using namespace std;
int main()
{
    int first=0;
    int second=1;
    int n=4;
    int fibo;
    int count=0;
    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;

        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;

        }
        cout<< fibo;
        count++;
    }
    cout<<fibo;
}