#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int arr[25];
    int count=0;
    for(int i=0;i<24;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<24;i++)
    {
        if(arr[i]==1 && arr[i]>arr[12])
        {
            arr[i-1]=arr[i];
            arr[i]=0;
            count++;
        }
        else if(arr[i]==1 && arr[i]<arr[12])
        {
            arr[i+1]=arr[i];
            arr[i]=0;
            count++;

        }
    }
    cout<<count;
 }