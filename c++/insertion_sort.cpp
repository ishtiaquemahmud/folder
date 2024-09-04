#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int value;
    int index;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        value=arr[i];
        index=i;
        while(index>0 && arr[index-1]<value)
        {
            arr[index]=arr[index-1];
            index--;
        }
        arr[index]=value;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   // cout<<endl;
   // cout<<arr[0]-arr[n-1]<<" "<<arr[0]-arr[n-2]<<" "<<arr[0]-arr[n-3];
}