#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    
        if(n>=5 && n%5==0)
        {
            n=n/5;
            

        }
        else if(n>=4 && n%4==0)
        {
            n=n/4;
            
            
        }
        else  if(n>=3 && n%3==0)
        {
            n=n/3;
            
            
        }
        else if(n>=2 && n%2==0)
        {
            n=n/2;
            
        }
        else if(n>=1 && n%1==0)
        {
            n=n/1;
            
        }
    
    cout<<n;
}