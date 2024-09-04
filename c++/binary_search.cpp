#include<bits/stdc++.h>
using namespace std;


int bs(int arr[],int start,int end,int key)
{
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(key>arr[mid])
    {
        return bs(arr,mid+1,end,key);
    }
    else if(key<arr[mid])
    {
       
        return bs(arr,start,mid-1,key);
    }
    else if(key!=arr[mid])
    {
        return -1;

    }
    }

}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


int key;
cin>>key;
int result=bs(arr,0,n-1,key);
cout<<result;

}