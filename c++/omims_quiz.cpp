#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    int count;
    for(int i=-0;i<4;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[j]>arr[i])
            {
                count=arr[j]-arr[i];
            }
            else if(arr[j]<arr[i])
            {
                count=arr[i]-arr[j];
            }
        }
        cout<<count<<" ";
    }
}