#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    int n=s.length();
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[n-1-i])
        {
            count++;
            
        }

    }
    if(count>0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";

    }

}