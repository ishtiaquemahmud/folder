#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int i=0;i<10;i++)
    {
        if((a=a*3)<=(b=b*2))
        {
            count++;
        }
    }
    count =count+1;
    cout<<count;
}