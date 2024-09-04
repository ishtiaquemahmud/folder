#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string g;
    for(int i=0;i<n;i++)
    {
        cin>>g;

        if(g.length()>10)
        {
            cout<<g[0]<<g.length()-2<<g[g.length()-1]<<endl;

        }
        else 
        {
            cout<<g<<endl;
        }
    }

}
