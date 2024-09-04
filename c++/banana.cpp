#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int count=0;
    for(int i=1;i<=w;i++)
    {
        count+=i*k;
    }
    if (count>=n)
    {
        count=count-n;
    }
    else if(count<=n)
    {
        count=0;
    }

    cout<<count;


}