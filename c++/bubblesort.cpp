#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1])
        {
            count++;
        }
        
    }
    int p=n-count+1;
    cout<<endl<<arr[n-p];
    
}