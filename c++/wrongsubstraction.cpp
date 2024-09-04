#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int r;
    for(int i=0;i<k;i++)
    {
        r=n%10;
        if(r==0)
        {
            n=n/10;
        }
         else
         {
            n=n-1;
         }
        
    }
    cout<<n;
    
}