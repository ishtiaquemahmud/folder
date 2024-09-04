#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count1=0;
    int count2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<=90)
        {
            count1++;
        }
        else
        {
            count2++;

        }
          
    }
    for(int i=0;i<s.length();i++)
    {
        if(count1>count2 && count1!=count2 && s[i]>90)
        {

           s[i]=s[i]-32;
        }
        else if(count1<count2 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        else if(count1==count2 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }
    cout<<s;

}
