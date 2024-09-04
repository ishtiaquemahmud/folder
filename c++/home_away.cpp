#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    int ai[100];
    int hi[100];
    for(int i=0;i<n;i++)
    {
        cin>>ai[i]>>hi[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ai[i]==hi[j])
            {
                count++;
            }
        }
    }
    cout<<count;
}