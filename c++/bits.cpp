#include<bits/stdc++.h>
#include <string>;
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s[0]=='+'&& s[1]=='+'&& s[2]=='X')
        {
            count++;

        }
       else if(s[0]=='X'&& s[1]=='+'&& s[2]=='+')
       {
        count++;
       }
       else
       {
        count--;
       }

    }
    cout<<count<<endl;

}