#include<bits/stdc++.h>
using namespace std;

int bs(int arr[],int start,int end,int key)
{
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
           return bs(arr,mid+1,end,key);
        }
        else if(arr[mid]>key)
        {
            return bs(arr,start,mid-1,key);
        }
       
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n;
    cin >>n;
    int result;
    result=bs(arr,0,10-1,n);
    if(result>10-1)
    {
        result=-1;
    }
    else if(result<0)
    {
        result=-1;
    }
    cout<<result;
}