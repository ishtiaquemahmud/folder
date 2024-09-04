#include<iostream>
using namespace std;
int main()
{
    int N;
    int password=1;
    cout<<"hridoy please insert an input = ";
    cin>>N;
    for(int i=N;i>=1;i--)
    {
        password*=i;
    }
    cout<<"you can set your password with "<< password <<" number of ways";


}