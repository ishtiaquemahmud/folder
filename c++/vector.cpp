#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(100);

    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<v.at(1)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.clear();
    v.empty();

}