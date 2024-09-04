#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int easy=0;
    int hard=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]>1)
        {
            cout<<"please put '0' or '1' ";
        }
    }
     
     for(int i=0;i<n;i++)
     {
        if(arr[i]==0)
        {
            easy++;
        }
         else if(arr[i]==1)
        {
            hard++;

        }
       
     }

     if(hard>easy)
     {
        cout<<"Changed";
     }
     else if(hard>easy)
     {
        cout<<"Remains";

     }
     else
     {
        cout<<"";
     }



}