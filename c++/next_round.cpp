#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int j[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>j[i];
    }
    for(int i=0;i<n;i++)
    {
        if(j[i]>=j[k-1] && j[i]>0)
        {
            count=count+1;
        }
    }
    cout<<count;

}