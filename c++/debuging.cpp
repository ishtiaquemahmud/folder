#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n-1];
    int c[n-2];
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int count1;
    int count2;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        sum1=sum1+a[i];

    }
    for(int i=0;i<n-1;i++)
    {
        sum2=sum2+b[i];

    }
    for(int i=0;i<n-2;i++)
    {
        sum3=sum3+c[i];
    }
    count1=sum1-sum2;
    count2=sum2-sum3;
    cout<<count1<<endl<<count2;
}
