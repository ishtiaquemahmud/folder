#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n;
    long long k;
    int steps=0;
    
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        
        while(n>0)

       {

        if(n%k==0)
        {
            n=n/k;
            steps=steps+1;
        }
        else
        {   n=n-1;
            steps=steps+1;
    
        }
        
    }
        cout<<steps;

    

}
}