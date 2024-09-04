#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,3,2,1,5};
    int n=5;
    for(int i=0;i<5-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}