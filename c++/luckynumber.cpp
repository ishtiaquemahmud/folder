#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
     int lucky1=0;
     int lucky2=0;
     int notlucky=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==52)
        {
            lucky1++;
        }
        else if(s[i]==55)
        {
            lucky2++;

        }
        else
        {
            notlucky++;
        }

    }
    if(notlucky==0 && lucky1!=0 && lucky2!=0)
    {
        cout<<"YES";
    }
    
    else
    {
        cout<<"NO";

    }

}