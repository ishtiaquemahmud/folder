#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=1;
    for(int i=0;i<s[s.size()-1];i++)
    {

        if(s[i]==s[i+1])
        {
            count ++;
        }
        else
        {
            count=1;
        }
    }
    if (count==6)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}